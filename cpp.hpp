/*
#include <iostream>
#include <string>
#include <vector>
#pragma once

#define TECAJEUR 7.53;

using std::cout;
using std::endl;
using std::string;
using std::vector;

template <typename T>
T maks(T, T);

template <typename T>
void zamijeni(T &, T &);

template <typename T>
class ph
{
protected:
    T p1;
    T p2;

public:
void setp(T p1, T p2)
{
    this->p1 = p1;
    this->p2 = p2;
}
T const getp1()
{
    return p1;
}
T const getp2()
{
    return p2;
}
T zbroj()
{
    return p1 + p2;
}
T razlika()
{
    return p1 - p2;
}
bool operator==(ph &p)
{
    if ((p1 == p.getp1()) && (p2 == p.getp2()))
        return 1;
    return 0;
}
};

class Iznimka
{
public:
    Iznimka(string);
    string getOpis();

protected:
    string opis;
};

class IznimkaNevazeciArg : public Iznimka
{
public:
    IznimkaNevazeciArg(string);
};

class IznimkaNegativniArg : public IznimkaNevazeciArg
{
public:
    IznimkaNegativniArg(string);
};

struct OsnOpis
{
    string ime;
    int ID;
};

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

class Hrana : public Proizvod
{
protected:
    int kcal;

public:
    Hrana(string, int, double, double, int);
    Hrana(OsnOpis, double, double, int);
    Hrana(string, int, double, double);
    Hrana(OsnOpis, double, double);
    int const getKcal();
    void const setKcal(int);
    bool operator==(Hrana &);
    virtual void const info() override;
    virtual void reset() override;
};

class Tekucina : public Proizvod
{
protected:
    double volumen;

public:
    Tekucina(string, int, double, double, double);
    Tekucina(OsnOpis, double, double, double);
    Tekucina(string, int, double, double);
    Tekucina(OsnOpis, double, double);
    int const getVolumen();
    void const setVolumen(int);
    bool operator==(Tekucina &);
    virtual void const info() override;
    virtual void reset() override;
};

struct Spremljeno
{
    Proizvod proizvod;
    int kolicina;
};

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

class Radnik : public Osoba
{
public:
    Radnik(string, string, int, double, double, int);
    Radnik(string, string, int, int);
    bool operator==(Radnik &);
    virtual double placa() override;
    virtual double bonus() override;

private:
    int staz;
};

class Menadzment : public Osoba
{
public:
    Menadzment(string , string , int , double , double );
    Menadzment(string , string , int );
    Menadzment();
    bool operator==(Menadzment &);
    virtual double placa() override;
    virtual double bonus() override;
    using Osoba::getNextID;
};

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
*/