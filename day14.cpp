#include <iostream>
#include <cmath>
    double func( double x) {
        return std::pow(x, 3) - 2 * x + 5;
    }
    double exactDerivative( double x) {
        return 3 * std::pow(x, 2) - 2;
    }
    double centralDifference( double (*func)(double), double x, double h = 1e-5) {
        return (func(x+h) - func(x-h)) / (2*h);
    }
    int main() {
        double x_0 = 2.0;
        std::cout << "Value of the derivative at x_0: " << exactDerivative(x_0) << std::endl;
        std::cout << "Value of the central difference is: " << centralDifference(func, x_0) << std::endl;
        std::cout << "Value of absolutely error: " << std::abs(exactDerivative(x_0) - centralDifference(func, x_0)) << std::endl;
        return 0;
    }