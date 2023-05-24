#include "proizvod.hpp"

Proizvod::Proizvod(string ime, int ID, double cijena, double masa) : opis{ime, ID}, cijena(cijena), masa(masa) {}
Proizvod::Proizvod(string ime, int ID) : Proizvod(ime, ID, 0, 0) {}
Proizvod::Proizvod(OsnOpis opis) : Proizvod(opis.ime, opis.ID, 0, 0) {}
Proizvod::Proizvod(OsnOpis opis, double cijena, double masa) : Proizvod(opis.ime, opis.ID, cijena, masa) {}
Proizvod::~Proizvod() {}
string const Proizvod::getIme()
{
    return opis.ime;
}
int const Proizvod::getID()
{
    return opis.ID;
}
double const Proizvod::getCijena()
{
    return cijena;
}
double const Proizvod::getMasa()
{
    return masa;
}
void const Proizvod::setIme(string &ime)
{
    this->opis.ime = ime;
}
void const Proizvod::setID(int &ID)
{
    this->opis.ID = ID;
}
void const Proizvod::setCijena(double cijena)
{
    this->cijena = cijena;
}
void const Proizvod::setMasa(double masa)
{
    this->masa = masa;
}
double Proizvod::cijenaEUR()
{
    return cijena * TECAJEUR;
}
void const Proizvod::info()
{
    cout << opis.ime << ", " << opis.ID << ", " << cijena << ", " << masa << endl;
}
void Proizvod::reset()
{
    cijena = 0;
    masa = 0;
}