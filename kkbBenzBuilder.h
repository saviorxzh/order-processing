#ifndef _KKB_BENZ_BUILDER_H_
#define _KKB_BENZ_BUILDER_H_
#include "kkbBuilder.h"

class kkbBenzBuilder : public kkbBuilder
{
private:
    /* data */
public:
    kkbBenzBuilder(/* args */);
    ~kkbBenzBuilder();

public:
    void buildStart() override;
    void buildProcess() override;
    void buildFinish() override;

};

#endif