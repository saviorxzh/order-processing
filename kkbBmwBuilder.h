#ifndef _KKB_BMW_BUILDER_H_
#define _KKB_BMW_BUILDER_H_
#include "kkbBuilder.h"

class kkbBmwBuilder : public kkbBuilder
{
private:
    /* data */
public:
    kkbBmwBuilder(/* args */);
    ~kkbBmwBuilder();

public:
    void buildStart() override;
    void buildProcess() override;
    void buildFinish() override;

};

#endif