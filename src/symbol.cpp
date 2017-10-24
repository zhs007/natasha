#include "symbol.hpp"

BEGIN_NATASHA()

SymbolMgr& SymbolMgr::getSingleton() {
    static SymbolMgr s_mgr;

    return s_mgr;
}

SymbolMgr::SymbolMgr() {

}

SymbolMgr::~SymbolMgr() {

}

END_NATASHA()