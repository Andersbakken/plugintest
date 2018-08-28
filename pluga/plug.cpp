#include <base.h>


struct ShitPlug : public Shit
{
    virtual void foo()
    {
        inlineFunc();
        foo();
    }
};

extern "C" {
Shit *createShit()
{
    return new ShitPlug;
}
}
