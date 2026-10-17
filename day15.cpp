#include <iostream>

    double dotProduct(const double w[], const double R[], int n) {
        double S = 0.0;
        for (int i=0; i<n; i++) {
            S += w[i] * R[i];
        }
        return S;
    }
    int main() {
        const int n = 4; 
        double w[] = {0.25, 0.35, 0.20, 0.20};
        double R[] = {0.08, 0.12, 0.05, 0.15};
        std::cout << "R_p= " << dotProduct(w, R, n) << std::endl;
        std::cout << "Expected return of the portfolio is: " << dotProduct(w, R, n)*100.0 << "%" << std::endl;
        return 0;
    }