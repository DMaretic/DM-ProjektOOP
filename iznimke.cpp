#include "iznimke.hpp"

Iznimka::Iznimka(string opis) { this->opis = opis; }
string Iznimka::getOpis() { return opis; }

IznimkaNevazeciArg::IznimkaNevazeciArg(string opis) : Iznimka(opis) {}

IznimkaNegativniArg::IznimkaNegativniArg(string opis) : IznimkaNevazeciArg(opis) {}