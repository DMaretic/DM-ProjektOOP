#include <iostream>
#include <string>
#pragma once

#define TECAJEUR 7.53;

using std::cout;
using std::endl;
using std::string;

template <typename T>
T maks(T, T);

template <typename T>
void zamijeni(T &, T &);

template <typename T>
class ph
{
protected:
    T p1;
    T p2;

public:
    void setp(T p1, T p2)
    {
        this->p1 = p1;
        this->p2 = p2;
    }
    T const getp1()
    {
        return p1;
    }
    T const getp2()
    {
        return p2;
    }
    T zbroj()
    {
        return p1 + p2;
    }
    T razlika()
    {
        return p1 - p2;
    }
    bool operator==(ph &p)
    {
        if ((p1 == p.getp1()) && (p2 == p.getp2()))
            return 1;
        return 0;
    }
};