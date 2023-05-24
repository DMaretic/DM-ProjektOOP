#include "lokacija.hpp"

Lokacija::Lokacija(string ime, string mjesto, Menadzment *vlasnik) : ime(ime), mjesto(mjesto), vlasnik(vlasnik) {}
Lokacija::Lokacija(string mjesto) : Lokacija("", mjesto, nullptr) {}
Lokacija::Lokacija(const Lokacija &l)
{
    ime = l.ime;
    mjesto = l.mjesto;
    vlasnik = new Menadzment;
    *vlasnik = *(l.vlasnik);
}
string const Lokacija::getIme() { return ime; }
void Lokacija::setIme(string ime) { this->ime = ime; }
string const Lokacija::getMjesto() { return mjesto; }
void Lokacija::setMjesto(string mjesto) { this->mjesto = mjesto; }
Osoba *const Lokacija::getVlasnik() { return vlasnik; }
void Lokacija::setVlasnik(Menadzment *vlasnik) { this->vlasnik = vlasnik; }
void Lokacija::addOsoblje(Osoba *osoba)
{
    osoblje.push_back(osoba);
}
void Lokacija::kickOsoblje(int ID)
{
    if (ID <= 0)
    {
        throw std::invalid_argument("ID ne moze biti manji ili jednak 0.");
    }
    for (auto it = osoblje.begin(); it != osoblje.end(); it++)
    {
        if ((*it)->getID() == ID)
            it = osoblje.erase(it);
    }
}
void Lokacija::addProizvod(Proizvod &a)
{
    skladiste.push_back({a, 0});
}
void Lokacija::kickProizvod(int red)
{
    if ((red + 1) > skladiste.size())
    {
        throw IznimkaNevazeciArg("Argument je nevazeci.");
    }
    skladiste.erase(skladiste.begin() + red);
}
void Lokacija::updateProizvod(int red, int kol)
{
    if (kol < 0)
    {
        throw IznimkaNegativniArg("Argument je manji od 0.");
    }
    (skladiste.begin() + red)->kolicina = kol;
}
void Lokacija::info()
{
    cout << "Ime: " << ime << endl;
    cout << "Mjesto: " << mjesto << endl;
    cout << "Vlasnik: " << vlasnik->getIme() << " " << vlasnik->getPrezime() << endl;
    cout << "Osoblje: " << endl;
    for (auto it = osoblje.begin(); it != osoblje.end(); it++)
    {
        cout << "   ";
        (*it)->info();
        cout << endl;
    }
    cout << "Skladiste: " << endl;
    int c = 0;
    for (auto it = skladiste.begin(); it != skladiste.end(); it++)
    {
        cout << "   " << (*it).proizvod.getIme() << ", kolicina: " << (*it).kolicina << endl;
        cout << "   Redni broj: " << c++ << endl;
    }
}
bool Lokacija::operator==(Lokacija &p)
{
    if ((ime == p.getIme()) && (mjesto == p.getMjesto()))
        return 1;
    return 0;
}