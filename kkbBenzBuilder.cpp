#include "kkbBenzBuilder.h"
#include <iostream>
#include "kkbFactory.h"
#include "kkbBenz.h"
#include "kkbBuilder.h"

kkbBenzBuilder::kkbBenzBuilder(/* args */) : kkbBuilder("BENZ")
{
}

kkbBenzBuilder::~kkbBenzBuilder()
{
}

void kkbBenzBuilder::buildStart() {
    std::cout << "BENZ汽车制造开始！" << _currentOrder->shopid;
    std::cout << " - " << _currentOrder->brand;
    std::cout << " - " << _currentOrder->serial << std::endl;
}

void kkbBenzBuilder::buildProcess() {
    std::cout << "BENZ汽车制造中。。。" << _currentOrder->shopid << std::endl;
    kkbBenz* car = new kkbBenz();
    _currentOrder->car = car;
    car->assemble(_currentOrder);
    std::this_thread::sleep_for(std::chrono::milliseconds(2000));
}

void kkbBenzBuilder::buildFinish() {
    std::cout << "BENZ汽车制造完成！" << std::endl;
    kkbFactory::instance()->onOrderFinished(_currentOrder);
    _workState = S_WAIT;
    _currentOrder = nullptr;
}