#ifndef __NATASHA_GAMESCENE_H__
#define __NATASHA_GAMESCENE_H__

#include "basedef.hpp"
#include "symbol.hpp"
#include <vector>

BEGIN_NATASHA()

// -----------------------------------------------------------------------------------
// GameSceneNode

struct GameSceneNode {
    int             x, y;
    SymbolCode      code;
};

// -----------------------------------------------------------------------------------
// LineData

class LineData {
public:
    LineData() { clear(); }
    virtual ~LineData() {}
public:
    // get symbol with (index)
    virtual SymbolCode getSymbol(int index);
    // get node with (index)
    virtual GameSceneNode* getNode(int index);
    // reset to empty
    virtual void clear();
protected:
    std::vector<GameSceneNode>     m_lst;
};

// -----------------------------------------------------------------------------------
// WayData

class WayData {
public:
    WayData() { clear(); }
    virtual ~WayData() {}
public:
    // get symbol with (index)
    virtual SymbolCode getSymbol(int index);
    // reset to empty
    virtual void clear();
protected:
    std::vector<GameSceneNode>     m_lst;
};

// -----------------------------------------------------------------------------------
// BlockData

class BlockData {
public:
    BlockData() {}
    virtual ~BlockData() {}
public:
    // get symbol with (x, y)
    virtual SymbolCode getSymbol(int x, int y) = 0;
    // reset to empty
    virtual void clear() = 0;
private:
};

// -----------------------------------------------------------------------------------
// GameScene

class GameScene {
public:
    GameScene() {}
    virtual ~GameScene() {}
public:
    // get symbol with (x, y)
    virtual SymbolCode getSymbol(int x, int y) = 0;
    // reset to INVALID_SYMBOL
    virtual void clear() = 0;
private:
};

END_NATASHA()

#endif //__NATASHA_GAMESCENE_H__
