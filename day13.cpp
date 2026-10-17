#include <iostream>
    long long fibOptimized(int n) {
        if (n<=1)  return n;
            long long prev2 = 0;
            long long  prev1 = 1;
            long long current = 0;
        for (int i =2; i <= n; i++) {
            current = prev1 + prev2;
            prev2 = prev1;
            prev1 = current;
        }
    return current;
    }
    int main() {
        std::cout << "F(50) optimized = " << fibOptimized(50) << std::endl;
        return 0;
    }