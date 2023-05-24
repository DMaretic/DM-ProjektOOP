#include "radnik.hpp"

Radnik::Radnik(string ime, string prezime, int oib, double koefPlace, double osn,
               int staz) : Osoba(ime, prezime, oib, koefPlace, osn) { this->staz = staz; }
Radnik::Radnik(string ime, string prezime, int oib, int staz) : Radnik(ime, prezime, oib, 0, 0, staz) {}
bool Radnik::operator==(Radnik &p)
{
    if ((ID = p.getID()))
        return 1;
    return 0;
}
double Radnik::placa() { return osn * koefPlace * (1 + (staz * 0.01)); }
double Radnik::bonus() { return 0; }