
#include "basedef.hpp"
#include "gamescene.hpp"

BEGIN_NATASHA()

// -----------------------------------------------------------------------------------
// LineData

// get symbol with (index)
SymbolCode LineData::getSymbol(int index) {
    if (index >= 0 && index < m_lst.size()) {
        return m_lst[index].code;
    }

    return INVALID_SYMBOL;
}

// get node with (index)
GameSceneNode* LineData::getNode(int index) {
    if (index >= 0 && index < m_lst.size()) {
        return &(m_lst[index]);
    }

    return NULL;
}

// reset to empty
void LineData::clear() {
    m_lst.clear();
}

END_NATASHA()