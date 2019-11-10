#include <iostream>
#include <string>

int factorial(int num) {
    int ret = 1;

    for(int i = num; i > 0; i--) {
        ret = ret * i;
    }
}

int main (int argc, char **argv) {
    for(int i = 1; i <= 10; i++) {
        std::cout << "The factorial of " << i << " is " << factorial(i) << std::endl;
    }

    return 0;
}