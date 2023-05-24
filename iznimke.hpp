#include <iostream>
#include <string>
#pragma once

using std::cout;
using std::endl;
using std::string;

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