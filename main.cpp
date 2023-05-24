#include <iostream>
#include <string>
#include <vector>
#include "template.hpp"
#include "hrana.hpp"
#include "tekucina.hpp"
#include "radnik.hpp"
#include "menadzment.hpp"
#include "lokacija.hpp"

#define TECAJEUR 7.53;

using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    OsnOpis descRage{"Rage", 1};
    Hrana rage1(descRage, 99.99, 1000, 1);
    Hrana rage2("Rage", 1, 99.99, 1000, 1);
    Tekucina rage3(descRage, 99.99, 1000, 1);
    Tekucina rage4("Rage", 1, 99.99, 1000, 1);
    if (rage1 == rage2)
    {
        cout << "jednaki su!" << endl;
    }
    if (rage3 == rage4)
    {
        cout << "jednaki su!" << endl;
    }
    rage1.info();
    rage2.info();
    rage3.info();
    rage4.info();
    Lokacija a("lokacija1", "Bjelovar", new Menadzment("Ivan", "Ivanovic", 123));
    a.info();
    a.addOsoblje(new Radnik("Jure", "Juric", 123, 3));
    a.addOsoblje(new Radnik("Josip", "Josipovic", 12345, 3));
    a.info();
    try
    {
        a.kickOsoblje(-3);
        cout << "Uspjeh." << endl;
    }
    catch (std::exception &e)
    {
        cout << e.what() << endl;
    }
    try
    {
        a.kickOsoblje(2);
        cout << "Uspjeh." << endl;
    }
    catch (std::exception &e)
    {
        cout << e.what() << endl;
    }
    a.info();
    Lokacija b = a;
    b.info();
    if (a == b)
    {
        cout << "jednaki su!" << endl;
    }
    a.addProizvod(rage1);
    a.addProizvod(rage2);
    a.addProizvod(rage3);
    a.addProizvod(rage4);
    a.info();
    a.updateProizvod(0, 300);
    a.updateProizvod(1, 400);
    a.updateProizvod(2, 500);
    a.updateProizvod(3, 600);
    a.info();
    a.kickProizvod(2);
    a.kickProizvod(1);
    a.info();
    cout << rage1.cijenaEUR() << endl;
    rage1.reset();
    rage1.info();
}