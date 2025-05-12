#include <iostream>
#include <cstdlib>

int main(int argc, char* argv[]) {
    int n = std::atoi(argv[1]);
    int count = 1;

    while (count < 11) {
        std::cout << n;
        std::cout << " * " << count;
        std::cout << " = " << n * count << std::endl;
        count += 1;
    }

    return 0;
}
