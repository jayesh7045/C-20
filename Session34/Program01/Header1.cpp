#include "Header1.h"
#include <iostream>

// Constructor definition
Creo::Creo(std::string a, int b) : des(a), rno(b) {
    std::cout << "Constructor called for Creo Project" << std::endl;
}

// Definition and initialization of static member nu
size_t Creo::nu = 0;
