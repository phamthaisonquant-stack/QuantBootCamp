#include <iostream>

int main() {
    int N = 250;
    double F = 1000.0;
    double r = 0.065;
    double Coupon = N * F * r;
    std::cout << "Annual Coupon : " << Coupon << std::endl;
    return 0;

}