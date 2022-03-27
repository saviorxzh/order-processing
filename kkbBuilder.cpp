#include "kkbBuilder.h"

kkbBuilder::kkbBuilder(char* name) : _name(name), _currentOrder(nullptr), _workState(S_SLEEP)
{
    this->startWork(); //开始线程
}

kkbBuilder::~kkbBuilder()
{
    this->stopWork(); //结束线程
}

void kkbBuilder::applyOrder(kkbOrderInfo* order) {
    _currentOrder = order;
}

void kkbBuilder::buildCar() {
    this->buildStart();
    this->buildProcess();
    this->buildFinish();
}

void kkbBuilder::startWork() {
    _workState = S_WAIT;
    if (_thread) stopWork();
    _thread = new std::thread(&kkbBuilder::workThread, this);
}

void kkbBuilder::stopWork() {
    if (_thread) {
        _thread->join();
        delete _thread;
        _thread = nullptr;
    }
}

void kkbBuilder::workThread() {
    while (true)
    {
        if (_currentOrder && _workState == S_WAIT) {
            _workState = S_WORK;
            _mtx.lock();
            this->buildCar();
            _mtx.unlock();
            _workState = S_WAIT;
        } else {
            std::this_thread::sleep_for(std::chrono::milliseconds(1));
        }
    }
}