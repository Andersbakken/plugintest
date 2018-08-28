#include <base.h>
#include <stdio.h>

struct ShitPlug : public Shit
{
    ShitPlug()
    {
        printf("[plug.cpp:%d]: ShitPlug()\n", __LINE__); fflush(stdout);
    }
    virtual void foo()
    {
        printf("[plug.cpp:%d]: virtual void foo()\n", __LINE__); fflush(stdout);
        inlineFunc();
        printf("[plug.cpp:%d]: inlineFunc();\n", __LINE__); fflush(stdout);
        shit();
        printf("[plug.cpp:%d]: shit();\n", __LINE__); fflush(stdout);
    }
    int balle { 12 };
};

extern "C" {
__attribute__ ((visibility ("default"))) Shit *createShit()
{
    return new ShitPlug;
}
}
