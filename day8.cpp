#include <iostream>
#include <cmath>
    double callPayoff(double S_T, double K) {
    if (S_T > K) {
        return S_T - K;
    } else {
        return 0.0;
    }
    }
        int main() {
        std::cout << "Nhap gia tri dau " << callPayoff(115.0, 100.0) << std::endl;
        std::cout << "Nhap gia tri sau " << callPayoff(92.0, 100.0) << std::endl;
         
    
        }     
        