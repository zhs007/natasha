#ifndef __NATASHA_GAMERULES_H__
#define __NATASHA_GAMERULES_H__

#include "basedef.hpp"
#include "symbol.hpp"
#include "gamescene.hpp"

BEGIN_NATASHA()

// -----------------------------------------------------------------------------------
// GameRules

class GameRules {
public:
    GameRules() {}
    virtual ~GameRules() {}
public:
    // get symbol with (x, y)
    virtual void countPay(PayInfo& pi, const LineData& linedata) = 0;
private:
};

END_NATASHA()

#endif //__NATASHA_GAMERULES_H__
