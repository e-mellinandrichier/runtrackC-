#include <iostream>
#include <cstdlib>

int main(int argc, char* argv[]) {
    int n = std::atoi(argv[1]);

    if (n % 2 == 0) {
        std::cout << "pair";
    } else {
         std::cout << "impair";
    }

    return 0;
}