#include "kkbAudiBuilder.h"
#include <iostream>
#include "kkbFactory.h"
#include "kkbAudi.h"
#include "kkbBuilder.h"

kkbAudiBuilder::kkbAudiBuilder(/* args */) : kkbBuilder("AUDI")
{
}

kkbAudiBuilder::~kkbAudiBuilder()
{
}

void kkbAudiBuilder::buildStart() {
    std::cout << "AUDI汽车制造开始！" << _currentOrder->shopid;
    std::cout << " - " << _currentOrder->brand;
    std::cout << " - " << _currentOrder->serial << std::endl;
}

void kkbAudiBuilder::buildProcess() {
    std::cout << "AUDI汽车制造中。。。" << _currentOrder->shopid << std::endl;
    //组装过程
    kkbAudi* car = new kkbAudi();
    _currentOrder->car = car;
    car->assemble(_currentOrder);
    std::this_thread::sleep_for(std::chrono::milliseconds(2000)); //不同车需要不同的制造时间
}

void kkbAudiBuilder::buildFinish() {
    std::cout << "AUDI汽车制造完成！" << std::endl;
    kkbFactory::instance()->onOrderFinished(_currentOrder); //流水线通知工厂完成订单
    _workState = S_WAIT;
    _currentOrder = nullptr;
}