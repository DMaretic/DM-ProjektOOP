#include <iostream>
#include <string>
#include "proizvod.hpp"
#include "OsnOpis.hpp"
#include "iznimke.hpp"
#pragma once

using std::cout;
using std::endl;
using std::string;

class Hrana : public Proizvod
{
protected:
    int kcal;

public:
    Hrana(string, int, double, double, int);
    Hrana(OsnOpis, double, double, int);
    Hrana(string, int, double, double);
    Hrana(OsnOpis, double, double);
    int const getKcal();
    void const setKcal(int);
    bool operator==(Hrana &);
    virtual void const info() override;
    virtual void reset() override;
};