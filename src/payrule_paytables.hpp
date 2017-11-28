#ifndef __NATASHA_PAYRULE_PAYTABLES_H__
#define __NATASHA_PAYRULE_PAYTABLES_H__

#include "basedef.hpp"
#include "symbol.hpp"
#include "payrule.hpp"
#include "csv.hpp"
#include <map>

BEGIN_NATASHA()

// -----------------------------------------------------------------------------------
// PayRule_Paytables

template<int WIDTH>
class PayRule_Paytables : public PayRole {
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
public:
    void load(const char* csvfile) {
        m_map.clear();

        CSVData csv;

        csv.load(csvfile);

        for (auto y = 0; y < csv.getHeight(); ++y) {
            const char* strcode = csv.getText(y, 0);
            if (strcode == NULL) {
                continue ;
            }

            SymbolCode cursymbol = atoi(strcode);
            _Node curnode;

            for (auto x = 0; x < WIDTH; ++x) {
                const char* strpayout = csv.getText(y, 2 + x);
                if (strpayout == NULL) {
                    curnode.payout[x] = 0;
                }
                else {
                    curnode.payout[x] = atoi(strpayout);
                }
            }

            m_map[cursymbol] = curnode;
        }
    }
protected:
    std::map<SymbolCode, _Node>  m_map;
};

END_NATASHA()

#endif //__NATASHA_PAYRULE_PAYTABLES_H__
