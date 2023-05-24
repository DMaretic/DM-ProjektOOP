/*
#include "cpp.hpp"

template <typename T>
T maks(T t1, T t2)
{
    if (t1 >= t2)
        return t1;
    return t2;
};

template <typename T>
void zamijeni(T &a, T &b)
{
    T c = a;
    a = b;
    b = c;
};

Iznimka::Iznimka(string opis) { this->opis = opis; }
string Iznimka::getOpis() { return opis; }

IznimkaNevazeciArg::IznimkaNevazeciArg(string opis) : Iznimka(opis) {}

IznimkaNegativniArg::IznimkaNegativniArg(string opis) : IznimkaNevazeciArg(opis) {}

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

Tekucina::Tekucina(string ime, int ID, double cijena, double masa, double volumen) : Proizvod(ime, ID, cijena, masa) { this->volumen = volumen; }
Tekucina::Tekucina(OsnOpis opis, double cijena, double masa, double volumen) : Tekucina(opis.ime, opis.ID, cijena, masa, volumen) {}
Tekucina::Tekucina(string ime, int ID, double cijena, double masa) : Tekucina(ime, ID, cijena, masa, 0) {}
Tekucina::Tekucina(OsnOpis opis, double cijena, double masa) : Tekucina(opis, cijena, masa, 0) {}
int const Tekucina::getVolumen()
{
    return volumen;
}
void const Tekucina::setVolumen(int volumen)
{
    if (volumen <= 0)
    {
        throw IznimkaNegativniArg("Volumen ne moze biti manji ili jednak 0.");
    }
    if (volumen > 1000)
    {
        throw IznimkaNevazeciArg("Volumen ne moze biti veci od 1000.");
    }
    this->volumen = volumen;
}
bool Tekucina::operator==(Tekucina &p)
{
    if ((opis.ime == p.getIme()) && (opis.ID == p.getID()) && (cijena == p.getCijena()) && (masa == p.getMasa()) && (volumen = p.getVolumen()))
        return 1;
    return 0;
}
void const Tekucina::info()
{
    cout << opis.ime << ", " << opis.ID << ", " << cijena << ", " << masa << ", " << volumen << endl;
}
void Tekucina::reset()
{
    cijena = 0;
    masa = 0;
    volumen = 0;
}

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
*/