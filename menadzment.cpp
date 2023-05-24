#include "menadzment.hpp"

Menadzment::Menadzment(string ime, string prezime, int oib, double koefPlace, double osn)
    : Osoba(ime, prezime, oib, koefPlace, osn) {}
Menadzment::Menadzment(string ime, string prezime, int oib)
    : Menadzment(ime, prezime, oib, 0, 0) {}
Menadzment::Menadzment()
    : Menadzment("", "", 0, 0, 0) {}
bool Menadzment::operator==(Menadzment &p)
{
    if ((ID = p.getID()))
        return 1;
    return 0;
}
double Menadzment::placa() { return osn * 5; }
double Menadzment::bonus() { return placa() * 0.1; }