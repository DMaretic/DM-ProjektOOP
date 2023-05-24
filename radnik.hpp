#include <iostream>
#include <string>
#include "osoba.hpp"
#pragma once

using std::cout;
using std::endl;
using std::string;

class Radnik : public Osoba
{
public:
    Radnik(string, string, int, double, double, int);
    Radnik(string, string, int, int);
    bool operator==(Radnik &);
    virtual double placa() override;
    virtual double bonus() override;

private:
    int staz;
};