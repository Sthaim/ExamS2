#include "Plante.h"
#include "Plante.cpp"
#include <string>
#include <iostream>

int main()
{
    Plante anon;
    Plante BobLenon(5, 5, false, "PyroBarbare");
    BobLenon.inspecter();
    return 0;
}