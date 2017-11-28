#ifndef __NATASHA_SYMBOL_H__
#define __NATASHA_SYMBOL_H__

#include "basedef.hpp"
#include <string>
#include <vector>
#include <map>
#include <set>

BEGIN_NATASHA()

typedef int8_t SymbolCode;

const SymbolCode INVALID_SYMBOL = -1;

struct SymbolInfo{
    SymbolCode                  code;
    std::string                 name;

    bool                        isnotwild;  // wild not substitution
    std::set<SymbolCode>        sWild;

    SymbolInfo() : isnotwild(false), code(INVALID_SYMBOL) {}
};

class SymbolRules{
public:
    SymbolRules();
    ~SymbolRules();
public:
    void addSymbol(SymbolCode code);

    void addSymbolWild(SymbolCode wild, SymbolCode code);

    void setSymbolNotWild(SymbolCode code, bool isnotwild);
public:
    bool isEqu(SymbolCode dest, SymbolCode code);
private:
    std::map<SymbolCode, SymbolInfo>    m_mapSymbol;
};

END_NATASHA()

#endif //__NATASHA_SYMBOL_H__
