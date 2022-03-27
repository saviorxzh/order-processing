#ifndef _KKB_AUDI_H_
#define _KKB_AUDI_H_
#include "kkbCar.h"

class kkbAudi : public kkbCar
{
private:

public:
    kkbAudi();
    ~kkbAudi();

    void assemble(const kkbOrderInfo* order) override;
    void run() override;
    void didi() override;

};

#endif