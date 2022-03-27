#include "kkbBmwBuilder.h"
#include <iostream>
#include "kkbFactory.h"
#include "kkbBmw.h"
#include "kkbBuilder.h"

kkbBmwBuilder::kkbBmwBuilder(/* args */) : kkbBuilder("BMW")
{
}

kkbBmwBuilder::~kkbBmwBuilder()
{
}

void kkbBmwBuilder::buildStart() {
    std::cout << "Bmw汽车制造开始！" << _currentOrder->shopid;
    std::cout << " - " << _currentOrder->brand;
    std::cout << " - " << _currentOrder->serial << std::endl;
}

void kkbBmwBuilder::buildProcess() {
    std::cout << "BMW汽车制造中。。。" << _currentOrder->shopid << std::endl;
    kkbBmw* car = new kkbBmw();
    _currentOrder->car = car;
    car->assemble(_currentOrder);
    std::this_thread::sleep_for(std::chrono::milliseconds(2000));
}

void kkbBmwBuilder::buildFinish() {
    std::cout << "Bmw汽车制造完成！" << std::endl;
    kkbFactory::instance()->onOrderFinished(_currentOrder);
    _workState = S_WAIT;
    _currentOrder = nullptr;
}