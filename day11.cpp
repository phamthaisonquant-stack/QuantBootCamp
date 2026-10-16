#include <iostream>
#include <cmath>
    void  applyShock( double& price ,  double shockFactor ) {
        price *= ( 1.0 + shockFactor );

    }
    
    double getPortfolioValue( const double& price, int quantity ) {
        return price * quantity ;

    }

    int main() {
        double assetPrice = 200.0;
        int shares = 50;
        std::cout<< "Gia tri ban dau cua danh muc la:"<< getPortfolioValue( assetPrice, shares ) << std::endl;
        applyShock( assetPrice, -0.15 );
        std::cout<<"Gia tri cua co phieu sau khi thay doi la: "<<  assetPrice << std::endl;
        std::cout<<"Gia tri danh muc sau cu soc la: "<< getPortfolioValue( assetPrice, shares ) << std::endl;

        return 0;
    }