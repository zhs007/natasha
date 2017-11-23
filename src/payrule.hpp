#ifndef __NATASHA_PAYRULE_H__
#define __NATASHA_PAYRULE_H__

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

class PayRule {
public:
    PayRule() {}
    virtual ~PayRule() {}
public:
    // get symbol with (x, y)
    virtual void countPay(PayInfo& pi, const LineData& linedata) = 0;
private:
};

END_NATASHA()

#endif //__NATASHA_PAYRULE_H__
