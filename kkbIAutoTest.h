#ifndef _KKB_IAUTO_TEST_H_
#define _KKB_IAUTO_TEST_H_

class kkbCar;
class kkbOrderInfo;
class kkbIAutoTest
{
public:
    virtual void testRun(kkbCar* car) = 0; //对汽车进行测试
    virtual void testDiDi(kkbCar* car) = 0;
    virtual bool testAll(kkbOrderInfo* order) = 0; //订单完成后对订单进行测试
};

#endif