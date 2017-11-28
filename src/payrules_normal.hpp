#ifndef __NATASHA_PAYRULES_NORMAL_H__
#define __NATASHA_PAYRULES_NORMAL_H__

#include "basedef.hpp"
#include "symbol.hpp"
#include "payrules_paytables.hpp"
#include <vector>

BEGIN_NATASHA()

// -----------------------------------------------------------------------------------
// PayRule_Normal

template<int WIDTH>
class PayRules_Normal : public PayRules_Paytables {
public:
    PayRules_Normal() {}
    virtual ~PayRules_Normal() {}
public:
    // get symbol with (x, y)
    virtual void countPay(PayInfo& pi, const LineData& linedata);
public:
    void load(const char* jsonfile) {
    }
protected:
};

END_NATASHA()

#endif //__NATASHA_PAYRULES_NORMAL_H__
