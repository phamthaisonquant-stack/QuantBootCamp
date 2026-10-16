#include <iostream>
#include <cmath>
    const double RISK_FREE_RATE = 0.04;
    double discountFactor(double T){
        return exp(-RISK_FREE_RATE * T);
    }
    int main() {
        double FV = 1000.0;
        double T = 2.5;
        double PV = FV * discountFactor(T);
        double shadowPrice = PV * 1.05;
        std::cout << "Gia tri hien tai cua 1000 sau 2.5 nam la: " << PV << std::endl;
        {
            std::cout << "Gia tri hien tai cua 1000 sau 2.5 nam voi shadow price la: " << shadowPrice << std::endl;
        }
        return 0;
    }