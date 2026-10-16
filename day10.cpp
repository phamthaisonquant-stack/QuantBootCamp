#include <iostream>
#include <cmath>
    int main() {
        double stockPrice = 150.0;
        double* pPrice = &stockPrice;
        std::cout << "Gia tri ban dau cua co phieu la: " << stockPrice << std::endl;
        std::cout << "Dia chi cua co phieu la: " << pPrice << std::endl;
        *pPrice = *pPrice * 1.10; // Tang gia tri co phieu len 10%
        std::cout << "Gia tri cua co phieu sau khi thay doi la: " << stockPrice << std::endl;
        return 0;        
    }

