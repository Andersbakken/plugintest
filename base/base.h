#ifndef BASE_H
#define BASE_H

struct Shit
{
    virtual ~Shit() {}
    virtual void foo() = 0;
    void shit();

    void inlineFunc()
    {

    }
};


#endif /* BASE_H */
