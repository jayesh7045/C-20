#include <iostream>
#include "Header1.h"

int main() {
    Creo c("Some description", 123);
    std::cout << Creo::nu << std::endl;  // Accessing static member nu
    return 0;
}
