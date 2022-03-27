#include "kkbAudi.h"
#include <iostream>
#include "kkbFactory.h"
#include <ctime>

kkbAudi::kkbAudi() {

}

kkbAudi::~kkbAudi() {

}

void kkbAudi::assemble(const kkbOrderInfo* order) { //根据订单进行组装
    this->name = order->brand + " " + order->serial;
    this->color = order->color;
    this->engine = order->engine;
    this->wheel = order->wheel;
    this->seat = order->seat;
    time_t now = time(0);
    this->date = ctime(&now); //时间字符串化
}

void kkbAudi::run() {
    std::cout << "AUDI Is Running" << std::endl;
}

void kkbAudi::didi() {
    std::cout << "AUDI Is DIDI" << std::endl;
}