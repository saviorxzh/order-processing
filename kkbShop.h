#ifndef _KKB_SHOP_H_
#define _KKB_SHOP_H_
#include <string>
#include <queue>

class kkbOrderInfo;
class kkbShop {
private:
    std::queue<kkbOrderInfo*> _orders; //订单队列
    const std::string _shopid; //店铺id

public:
    kkbShop(char* name);
    ~kkbShop();

public:
    virtual void applyBMWOrder(); //向工厂下订单
    virtual void applyBENZOrder();
    virtual void applyAUDIOrder();
    virtual void onOrderFinish(kkbOrderInfo* order); //外部回调前面加个on,工厂完成订单后通知Shop

    inline const std::string& id() { return _shopid; } //获取商店id

};


#endif