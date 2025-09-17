#include <iostream>
#include <string>
#include "structs.hpp"
#include "functions.hpp"

int main() 
{
    person mig;
    mig.alder = 31, mig.fornavn = "Allan", mig.efternavn = "Nielsen";
    person per;
    per.alder = 50, per.fornavn = "per", per.efternavn = "Dahlstrøm";
    std::cout << mig.alder << std::endl;
    std::cout << per.alder << std::endl;
    return 0;
}