#include "osoba.hpp"

int const Osoba::getNextID() { return IDc; }

Osoba::Osoba(string ime, string prezime, int oib, double koefPlace, double osn)
{
    setIme(ime);
    setPrezime(prezime);
    setOIB(oib);
    this->koefPlace = koefPlace;
    this->osn = osn;
    ID = IDc++;
}
Osoba::Osoba(string ime, string prezime, int oib) : Osoba(ime, prezime, oib, 0, 0) {}
void Osoba::setIme(string ime) { this->ime = ime; }
string const Osoba::getIme() { return ime; }
void Osoba::setPrezime(string prezime) { this->prezime = prezime; }
string const Osoba::getPrezime() { return prezime; }
void const Osoba::setOIB(int oib)
{
    this->oib = oib;
}
int Osoba::getOIB() { return oib; }
double Osoba::getOsn() { return osn; }
void Osoba::setOsn(double osn) { this->osn = osn; }
double Osoba::getKoef() { return koefPlace; }
void Osoba::setKoef(double koefPlace) { this->koefPlace = koefPlace; }
int const Osoba::getID() { return ID; }
void const Osoba::info()
{
    cout << ime << ", " << prezime << ", " << oib << ", " << koefPlace << ", " << osn << endl;
    cout << "   ID: " << ID << endl;
}
double Osoba::placa() { return osn * koefPlace; }

int Osoba::IDc = 1;