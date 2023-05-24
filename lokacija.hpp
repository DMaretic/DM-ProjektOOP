#include <iostream>
#include <string>
#include <vector>
#include "iznimke.hpp"
#include "osoba.hpp"
#include "menadzment.hpp"
#include "radnik.hpp"
#include "Spremljeno.hpp"
#pragma once

#define TECAJEUR 7.53;

using std::cout;
using std::endl;
using std::string;
using std::vector;

class Lokacija
{
protected:
    string ime;
    string mjesto;
    Menadzment *vlasnik;
    vector<Osoba *> osoblje;
    vector<Spremljeno> skladiste;

public:
    Lokacija(string , string , Menadzment *);
    Lokacija(string );
    Lokacija(const Lokacija &);
    string const getIme();
    void setIme(string );
    string const getMjesto();
    void setMjesto(string );
    Osoba *const getVlasnik();
    void setVlasnik(Menadzment *);
    void addOsoblje(Osoba *);
    void kickOsoblje(int );
    void addProizvod(Proizvod &);
    void kickProizvod(int );
    void updateProizvod(int , int );
    void info();
    bool operator==(Lokacija &);
};