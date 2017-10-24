#ifndef __NATASHA_BASEDEF_H__
#define __NATASHA_BASEDEF_H__

#define BEGIN_NATASHA()   namespace natasha {
#define END_NATASHA()     }

BEGIN_NATASHA()

// random [0, max)
int randomInt(int max);

END_NATASHA()

#endif // __NATASHA_BASEDEF_H__