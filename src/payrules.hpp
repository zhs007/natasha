#ifndef __NATASHA_PAYRULES_H__
#define __NATASHA_PAYRULES_H__

#include "basedef.hpp"
#include "symbol.hpp"
#include "gamescene.hpp"

BEGIN_NATASHA()

struct PayInfo {
    int paytype;

    int basemul;
    int realpay;
};

// -----------------------------------------------------------------------------------
// PayRule

class PayRules {
public:
    PayRules() {}
    virtual ~PayRules() {}
public:
    // get symbol with (x, y)
    virtual void countPay(PayInfo& pi, const LineData& linedata) = 0;
private:
};

END_NATASHA()

#endif //__NATASHA_PAYRULES_H__
