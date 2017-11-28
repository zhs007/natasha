#ifndef __NATASHA_GAMESCENE_MAT_H__
#define __NATASHA_GAMESCENE_MAT_H__

#include "basedef.hpp"
#include "gamescene.hpp"

BEGIN_NATASHA()

template<int WIDTH, int HEIGHT>
class GameScene_Mat : public GameScene {
public:
    GameScene_Mat() {}
    virtual ~GameScene_Mat() {}
public:
    // get symbol with (x, y)
    virtual SymbolCode getSymbol(int x, int y) {
        if (y >= 0 && y < HEIGHT && x >= 0 && x < WIDTH) {
            return mat[y][x];
        }

        return INVALID_SYMBOL;
    }

    // reset to INVALID_SYMBOL
    virtual void clear() {
        for (int y = 0; y < HEIGHT; ++y) {
            for (int x = 0; x < WIDTH; ++x) {
                mat[y][x] = INVALID_SYMBOL;
            }
        }
    }
private:
    SymbolCode mat[HEIGHT][WIDTH];
};

END_NATASHA()

#endif //__NATASHA_GAMESCENE_MAT_H__
