#include "kkbBenz.h"
#include <iostream>
#include <ctime>
#include "kkbFactory.h"

kkbBenz::kkbBenz() {

}

kkbBenz::~kkbBenz() {

}

void kkbBenz::assemble(const kkbOrderInfo* order) {
    this->name = order->brand + " " + order->serial;
    this->color = order->color;
    this->engine = order->engine;
    this->wheel = order->wheel;
    this->seat = order->seat;
    time_t now = time(0);
    this->date = ctime(&now);
}

void kkbBenz::run() {
    std::cout << "Benz Is Running" << std::endl;
}

void kkbBenz::didi() {
    std::cout << "Benz Is DIDI" << std::endl;
}