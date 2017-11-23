#ifndef __NATASHA_PAYRULE_PAYTABLES_H__
#define __NATASHA_PAYRULE_PAYTABLES_H__

#include "basedef.hpp"
#include "symbol.hpp"
#include "payrule.hpp"
#include <vector>

BEGIN_NATASHA()

// -----------------------------------------------------------------------------------
// PayRule_Paytables

template<int WIDTH>
class PayRule_Paytables {
public:
    struct _Node {
        int payout[WIDTH];
    };
public:
    PayRule_Paytables() {}
    virtual ~PayRule_Paytables() {}
public:
    // get symbol with (x, y)
    virtual void countPay(PayInfo& pi, const LineData& linedata);
private:
    std::vector<_Node>  m_lst;
};

END_NATASHA()

#endif //__NATASHA_PAYRULE_PAYTABLES_H__
