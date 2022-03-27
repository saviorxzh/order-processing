#ifndef _KKB_IBUILDER_DELEGATE_H_
#define _KKB_IBUILDER_DELEGATE_H_

class kkbBuilder;
class kkbOrderInfo;
class kkbIBuilderDelegate
{
public:
    virtual void onOrderFinished(kkbOrderInfo* order) = 0; //订单完成
    virtual void dealOrder() = 0; //处理订单
    virtual kkbBuilder* addBuilder(kkbOrderInfo* order) = 0; //新增builder
    virtual void reduceBuilder() = 0; //减少builder
    virtual kkbBuilder* getAvalideBuilder(kkbOrderInfo* order) = 0; //可用builder

};

#endif