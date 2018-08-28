#ifndef BASE_H
#define BASE_H

#include <stdio.h>

struct Shit
{
    virtual ~Shit() {}
    virtual void foo() = 0;
    void shit();

    void inlineFunc()
    {
        printf("[base.h:%d]: void inlineFunc()\n", __LINE__); fflush(stdout);
    }
};

typedef Shit *(*CreateShit)();

#endif /* BASE_H */
