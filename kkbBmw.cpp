#include "kkbBmw.h"
#include <iostream>
#include <ctime>
#include "kkbFactory.h"

kkbBmw::kkbBmw() {

}

kkbBmw::~kkbBmw() {

}


void kkbBmw::assemble(const kkbOrderInfo* order) {
    this->name = order->brand + " " + order->serial;
    this->color = order->color;
    this->engine = order->engine;
    this->wheel = order->wheel;
    this->seat = order->seat;
    time_t now = time(0);
    this->date = ctime(&now);
}

void kkbBmw::run() {
    std::cout << "Bmw Is Running" << std::endl;
}

void kkbBmw::didi() {
    std::cout << "Bmw Is DIDI" << std::endl;
}