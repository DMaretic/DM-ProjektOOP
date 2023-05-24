#include <iostream>
#include <string>
#include "OsnOpis.hpp"
#pragma once

#define TECAJEUR 7.53;

using std::cout;
using std::endl;
using std::string;

class Proizvod
{
protected:
    OsnOpis opis;
    double cijena;
    double masa;
    int kolicina;

public:
    Proizvod(string, int, double, double);
    Proizvod(string, int);
    Proizvod(OsnOpis);
    Proizvod(OsnOpis, double, double);
    ~Proizvod();
    string const getIme();
    int const getID();
    double const getCijena();
    double const getMasa();
    void const setIme(string &);
    void const setID(int &);
    void const setCijena(double);
    void const setMasa(double);
    double cijenaEUR();
    virtual void const info();
    virtual void reset();
};