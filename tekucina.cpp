#include "tekucina.hpp"

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