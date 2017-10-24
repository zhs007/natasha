#ifndef __NATASHA_CSV_H__
#define __NATASHA_CSV_H__

#include <string>
#include <stdio.h>
#include "basedef.hpp"

BEGIN_NATASHA()

// CSVData base class
class CSVData{
public:
    CSVData();
    ~CSVData();
public:
    bool load(const char* filename);

    void release();
protected:
    bool countWH();

    bool onRead();
public:
    char*   m_buff;
    int     m_width;
    int     m_height;

    char*** m_lst;
};

END_NATASHA()

#endif //__NATASHA_CSV_H__
