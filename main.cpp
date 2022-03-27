#include <iostream>
#include "kkbFactory.h"
#include "kkbShop.h"

using namespace std;


int main() {
    
    kkbShop* shop = new kkbShop("AUDI-shop");
    //shop->applyBMWOrder();
    //shop->applyBMWOrder();
    //shop->applyBMWOrder();

    kkbFactory::instance();
    while (true)
    {
        shop->applyAUDIOrder();
        shop->applyBMWOrder();
        shop->applyBENZOrder();
        std::this_thread::sleep_for(std::chrono::milliseconds(3000));
    }
    delete shop;


    return 0;
}