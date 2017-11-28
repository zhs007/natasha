#ifndef __NATASHA_PAYRULES_PAYTABLES_H__
#define __NATASHA_PAYRULES_PAYTABLES_H__

#include "basedef.hpp"
#include "symbol.hpp"
#include "payrules.hpp"
#include "csv.hpp"
#include <map>

BEGIN_NATASHA()

// -----------------------------------------------------------------------------------
// PayRule_Paytables

template<int WIDTH>
class PayRules_Paytables : public PayRules {
public:
    struct _Node {
        bool    istotalbets;
        int     payout[WIDTH];
    };
public:
    PayRules_Paytables() {}
    virtual ~PayRules_Paytables() {}
public:
    // get symbol with (x, y)
    virtual void countPay(PayInfo& pi, const LineData& linedata);
public:
    void addNode(SymbolCode code, PayRule_Paytables<WIDTH>::_Node& node) {
        m_map[code] = node;
    }
protected:
    std::map<SymbolCode, _Node>  m_map;
};

END_NATASHA()

#endif //__NATASHA_PAYRULES_PAYTABLES_H__
