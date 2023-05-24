#include "template.hpp"

template <typename T>
T maks(T t1, T t2)
{
    if (t1 >= t2)
        return t1;
    return t2;
};

template <typename T>
void zamijeni(T &a, T &b)
{
    T c = a;
    a = b;
    b = c;
};