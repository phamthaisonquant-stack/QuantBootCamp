#include <iostream>
#include <cmath>
    int main() {
        double S_T = 108.5;
        double  K = 100.0;
        double payoff = 0.0; 
        
        if (S_T > K) {
            payoff = S_T - K;
            std::cout << "Trang thai: In the money ( ITM )" << std::endl;
        }
        else {
            payoff = 0.0;
            std::cout << "Trang thai: Out of the money ( OTM )" << std::endl;
        }
            std::cout << "Payoff: " << payoff << std::endl;
        return 0;
    
    }
