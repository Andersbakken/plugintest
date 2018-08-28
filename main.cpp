#include <dlfcn.h>
#include <stdio.h>

int main()
{
    void *plug = dlopen("pluga/libpluga.so", RTLD_LOCAL);
    if (!plug) {
        printf("[main.cpp:%d]: if (!plug) {\n", __LINE__); fflush(stdout);
        return 1;
    }

    void *sym = dlsym(plug, "createShit");
    if (!sym) {
        printf("[main.cpp:%d]: if (!sym) {\n", __LINE__); fflush(stdout);
        return 1;
    }
    return 0;
}