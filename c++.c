#include <iostream>

int main() {
    for (int i = 0; i <= 10; ++i) {
        std::cout << i;
        if (i % 2 != 0) {
            std::cout << " buzz";
        }
        std::cout << std::endl;
    }
    return 0;
}
