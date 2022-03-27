#ifndef _KKB_ISHOP_DELEGATE_H_
#define _KKB_ISHOP_DELEGATE_H_

// 接口类：纯虚方法,和shop进行交互  delegate委托
class kkbShop;
class kkbOrderInfo;
class kkbIShopDelegate {
public:
    virtual void registerShop(kkbShop* shop) = 0; //店铺注册到工厂,工厂订单完成通知店铺
    virtual void addOrder(kkbOrderInfo* order) = 0; //下订单
};

#endif