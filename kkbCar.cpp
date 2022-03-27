#include "kkbCar.h"
#include <iostream>

kkbCar::kkbCar() {

}

kkbCar::~kkbCar() {

}

void kkbCar::details() {
    std::cout << name << " Product Details :" << std::endl;
    std::cout << "color : " << color << std::endl;
    std::cout << "engine : " << engine << std::endl;
    std::cout << "wheel : " << wheel << std::endl;
    std::cout << "seat : " << seat << std::endl;
    std::cout << "date : " << date << std::endl;
}