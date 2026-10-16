#include <iostream>
long long fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    else if (n == 1) {
        return 1;
    }
    else if (n > 1) {
        return fibonacci(n-1) + fibonacci(n-2);
    }
    else {
        return -1;
    }
}   
    int main() {
        for (int i = 0; i < 10; i++) {
            std::cout << fibonacci(i) << " ";
        }
        std::cout << std::endl;

        std::cout << "F(15) = " << fibonacci(15) << std::endl;
        return 0;
    }