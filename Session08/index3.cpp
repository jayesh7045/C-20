#include <iostream>

int main() {
#ifdef __GNUC__
    std::cout << "Using GCC/G++ compiler." << std::endl;
#elif defined(__clang__)
    std::cout << "Using Clang compiler." << std::endl;
#elif defined(_MSC_VER)
    std::cout << "Using MSVC compiler." << std::endl;
#else
    std::cout << "Compiler unknown." << std::endl;
#endif

    return 0;
}