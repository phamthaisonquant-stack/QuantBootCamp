#include <iostream>
    void matVecMul( const double A[][3], const double x[], double y[],int rows,int cols) {
        for (int i=0; i<rows; i++) {
            y[i] = 0.0;
            for (int j=0; j<cols; j++) {
                y[i] += A[i][j] * x[j];
            }
        }
    }
    int main() {
        const double A[2][3] = {{1.5, 2.0, -1.0}, {0.5, 3.0, 2.5}};
        const double x[3] = {2.0, 1.0, 4.0};
        double y[2];
        matVecMul(A, x, y, 2, 3);
        for (int i=0; i<2; i++) {
            std::cout << "y[" << i << "] = " << y[i] << std::endl;
        }
    }