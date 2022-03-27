#ifndef _KKB_BMW_H_
#define _KKB_BMW_H_
#include "kkbCar.h"

class kkbBmw : public kkbCar {
private:

public:
    kkbBmw();
    ~kkbBmw();

    void assemble(const kkbOrderInfo* order) override;
    void run() override;
    void didi() override;

};

#endif