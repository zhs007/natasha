#include "symbol.hpp"

BEGIN_NATASHA()

SymbolRules::SymbolRules() {

}

SymbolRules::~SymbolRules() {

}

void SymbolRules::addSymbol(SymbolCode code) {
    m_mapSymbol[code].code = code;
}

void SymbolRules::addSymbolWild(SymbolCode wild, SymbolCode code) {
    m_mapSymbol[wild].sWild.insert(code);
}

void SymbolRules::setSymbolNotWild(SymbolCode code, bool isnotwild) {
    m_mapSymbol[code].isnotwild = isnotwild;
}

bool SymbolRules::isEqu(SymbolCode dest, SymbolCode code) {
    auto itdest = m_mapSymbol.find(dest);
    if (itdest != m_mapSymbol.end()) {
        if (itdest->second.isnotwild) {
            return dest == code;
        }

        auto it = m_mapSymbol.find(code);
        if (it != m_mapSymbol.end()) {
            if (it->second.sWild.empty()) {
                return false;
            }

            auto itw = it->second.sWild.find(dest);
            return itw != it->second.sWild.end();
        }
    }

    return false;
}

END_NATASHA()