#ifndef __NATASHA_SYMBOL_H__
#define __NATASHA_SYMBOL_H__

#include "basedef.hpp"
#include <string>
#include <vector>
#include <map>

BEGIN_NATASHA()

typedef int8_t SymbolCode;

struct SymbolInfo{
    SymbolCode                  code;
    std::string                 name;

    std::vector<SymbolCode>     lstWild;
};

class SymbolMgr{
public:
    static SymbolMgr& getSingleton();
private:
    SymbolMgr();
    ~SymbolMgr();
private:
    std::map<SymbolCode, SymbolInfo>    m_mapSymbol;
};

END_NATASHA()

#endif //__NATASHA_SYMBOL_H__
