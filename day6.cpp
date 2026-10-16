#include <iostream>
#include <cmath>
    int main() {
        double S = 2.0;
        double x_old = 1.0;
        double epsilon = 1e-7;
        int interactions = 0;
        double x_new = 0.5 * (x_old + S / x_old);
        while (std::abs(x_new - x_old) > epsilon) {
            x_old = x_new;
            x_new = 0.5 * (x_old + S / x_old);
            interactions++;
        }
        std::cout << "So lan lap: " << interactions << std::endl;
        return 0;   
    }
