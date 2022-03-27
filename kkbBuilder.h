#ifndef _KKB_BUILDER_H_
#define _KKB_BUILDER_H_
#include <string>
#include <thread>
#include <mutex>

enum STATE {
    S_WAIT,
    S_WORK,
    S_SLEEP,
};

class kkbOrderInfo;
class kkbBuilder
{
protected: //基类的数据定义为protected
    std::string _name;
    kkbOrderInfo* _currentOrder; //每个流水线只能接收一个订单

    STATE _workState; //汽车制造周期长,需要区分流水线状态
    std::thread* _thread;
    std::mutex _mtx;

public:
    kkbBuilder(char* name);
    ~kkbBuilder();

    inline const std::string& name() { return _name; } //输出名字

    virtual void applyOrder(kkbOrderInfo* order); //接受订单
    virtual void buildCar();

    virtual void startWork();
    virtual void stopWork();
    virtual void workThread();

    virtual bool isValide() { return _workState == S_WAIT; } //valid有效的

public:
    virtual void buildStart() = 0;
    virtual void buildProcess() = 0;
    virtual void buildFinish() = 0;

};

#endif