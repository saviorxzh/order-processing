#ifndef _KKB_BENZ_H_
#define _KKB_BENZ_H_
#include "kkbCar.h"

class kkbBenz : public kkbCar {
private:

public:
    kkbBenz();
    ~kkbBenz();

    void assemble(const kkbOrderInfo* order) override;
    void run() override;
    void didi() override;

};

#endif