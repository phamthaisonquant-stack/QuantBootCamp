#include <iostream>
#include <cmath>
int main() {
    int total = 7;
    int K = 4;
    double avgReturn = static_cast<double>(total) / K;
    double benchmark = 1.75;
    
    bool isEqual = std::abs(avgReturn - benchmark) < 1e-7;
    std::cout << "Average Return: " << avgReturn << std::endl;
    std::cout << "So sanh dung (1 la true, 0 la false): " << isEqual << std::endl;
    return 0;
}