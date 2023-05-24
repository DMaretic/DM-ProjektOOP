#include <iostream>
#include <string>
#include "osoba.hpp"
#pragma once

using std::cout;
using std::endl;
using std::string;
class Menadzment : public Osoba
{
public:
    Menadzment(string , string , int , double , double );
    Menadzment(string , string , int );
    Menadzment();
    bool operator==(Menadzment &);
    virtual double placa() override;
    virtual double bonus() override;
    using Osoba::getNextID;
};