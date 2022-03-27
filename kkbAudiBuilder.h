#ifndef _KKB_AUDI_BUILDER_H_
#define _KKB_AUDI_BUILDER_H_
#include "kkbBuilder.h"

class kkbAudiBuilder : public kkbBuilder
{
private:
    /* data */
public:
    kkbAudiBuilder(/* args */);
    ~kkbAudiBuilder();

public:
    void buildStart() override;
    void buildProcess() override;
    void buildFinish() override;

};

#endif