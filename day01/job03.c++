#include <iostream>
#include <cstdlib>

int main(int argc, char* argv[]) {

    int n = std::atoi(argv[1]);

    for (int i = 0; i < n; ++i) {
        std::cout << "Hello World\n";
    }

    return 0;
}
