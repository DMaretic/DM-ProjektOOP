#include <iostream>
#include <string>
#pragma once

using std::cout;
using std::endl;
using std::string;

class Osoba
{

protected:
    string ime;
    string prezime;
    int oib;
    double koefPlace;
    double osn;
    int ID;
    static int IDc;
    static int const getNextID();

public:
    Osoba(string, string, int, double, double);
    Osoba(string, string, int);
    void setIme(string);
    string const getIme();
    void setPrezime(string);
    string const getPrezime();
    void const setOIB(int);
    int getOIB();
    double getOsn();
    void setOsn(double);
    double getKoef();
    void setKoef(double);
    int const getID();
    void const info();
    virtual double placa();
    virtual double bonus() = 0;
};