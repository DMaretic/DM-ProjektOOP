#include "hrana.hpp"

Hrana::Hrana(string ime, int ID, double cijena, double masa, int kcal) : Proizvod(ime, ID, cijena, masa) { this->kcal = kcal; }
Hrana::Hrana(OsnOpis opis, double cijena, double masa, int kcal) : Hrana(opis.ime, opis.ID, cijena, masa, kcal) {}
Hrana::Hrana(string ime, int ID, double cijena, double masa) : Hrana(ime, ID, cijena, masa, 0) {}
Hrana::Hrana(OsnOpis opis, double cijena, double masa) : Hrana(opis, cijena, masa, 0) {}
int const Hrana::getKcal()
{
    return kcal;
}
void const Hrana::setKcal(int kcal)
{
    if (kcal <= 0)
    {
        throw IznimkaNegativniArg("Kalorije ne mogu biti manje ili jednake 0.");
    }
    this->kcal = kcal;
}
bool Hrana::operator==(Hrana &p)
{
    if ((opis.ime == p.getIme()) && (opis.ID == p.getID()) && (cijena == p.getCijena()) && (masa == p.getMasa()) && (kcal = p.getKcal()))
        return 1;
    return 0;
}
void const Hrana::info()
{
    cout << opis.ime << ", " << opis.ID << ", " << cijena << ", " << masa << ", " << kcal << endl;
}
void Hrana::reset()
{
    cijena = 0;
    masa = 0;
    kcal = 0;
}