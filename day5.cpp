#include <iostream>
#include <cmath>
    int main() {
        double CF = 100.0;
        int T = 5;
        double r = 0.08;
        double PV = 0;
        for (int i = 1; i <= T; i++) {
            PV += CF / std::pow(1 + r, i);
        }
        std::cout << "Chuoi dong tien bang: " << PV << std::endl;
        return 0;
}