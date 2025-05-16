#include <iostream>
#include <string>

int main() {
    std::string phrase1 = "vive la plateforme !";
    std::string phrase2  = "vive la plateforme !";

    if (phrase1.compare(phrase2) != 0){
        return 1;
    }

    return 0;
}
