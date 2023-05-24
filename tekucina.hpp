#include <iostream>
#include <string>
#include "iznimke.hpp"
#include "proizvod.hpp"
#include "OsnOpis.hpp"
#pragma once

using std::cout;
using std::endl;
using std::string;

class Tekucina : public Proizvod
{
protected:
    double volumen;

public:
    Tekucina(string, int, double, double, double);
    Tekucina(OsnOpis, double, double, double);
    Tekucina(string, int, double, double);
    Tekucina(OsnOpis, double, double);
    int const getVolumen();
    void const setVolumen(int);
    bool operator==(Tekucina &);
    virtual void const info() override;
    virtual void reset() override;
};