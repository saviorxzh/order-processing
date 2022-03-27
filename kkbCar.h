#ifndef _KKB_CAR_H_
#define _KKB_CAR_H_
#include <string>

class kkbOrderInfo;
class kkbCar {
protected:
    std::string name; //brand+" "+serial合成名字
    unsigned long color;
    float engine;
    int wheel;
    int seat;
    std::string date; //对象创建时的生产日期

public:
    kkbCar();
    virtual ~kkbCar(); //基类虚析构

    virtual void assemble(const kkbOrderInfo* order) = 0; //assemble组装,根据订单进行生产组装
    virtual void run() = 0;
    virtual void didi() = 0;
    virtual void details(); //输出汽车信息
};


#endif