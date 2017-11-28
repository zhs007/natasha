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

    int getWidth() const { return m_width; }

    int getHeight() const { return m_height; }

    const char* getText(int line, const char* fieldname);

    const char* getText(int line, int fieldindex);
protected:
    bool countWH();

    bool onRead();
protected:
    char*   m_buff;
    int     m_width;
    int     m_height;

    char*** m_lst;
    char*** m_lstHead;
};

END_NATASHA()

#endif //__NATASHA_CSV_H__
