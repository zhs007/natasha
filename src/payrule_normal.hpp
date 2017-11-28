#ifndef __NATASHA_PAYRULE_NORMAL_H__
#define __NATASHA_PAYRULE_NORMAL_H__

#include "basedef.hpp"
#include "symbol.hpp"
#include "payrule_paytables.hpp"
#include <vector>

BEGIN_NATASHA()

// -----------------------------------------------------------------------------------
// PayRule_Normal

template<int WIDTH>
class PayRule_Normal : public PayRule_Paytables {
public:
    struct _Node {
        int payout[WIDTH];
    };
public:
    PayRule_Normal() {}
    virtual ~PayRule_Normal() {}
public:
    // get symbol with (x, y)
    virtual void countPay(PayInfo& pi, const LineData& linedata);
public:
    void load(const char* jsonfile) {
    }
protected:
    std::vector<int>     m_lstWild;
    std::vector<int>     m_lstScatter;
};

END_NATASHA()

#endif //__NATASHA_PAYRULE_NORMAL_H__
