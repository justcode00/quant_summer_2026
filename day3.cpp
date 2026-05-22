#include <iostream>
#include <vector>

void vect( std::vector<double> &prices ){
    std::cout << "Current Portfolio Prices:\n";
    for(double p : prices){
        std::cout << "INR" << p << "\n";
    }
}
int main(){
    std::vector<double> reliance_prices;

    reliance_prices.push_back(2484.43);
    reliance_prices.push_back(2434.43);
    reliance_prices.push_back(2487.43);

    vect(reliance_prices);

    std::cout << "\nNumber of data points stored\n" << reliance_prices.size() << "\n";
    std::cout << reliance_prices[5];
    return 0;
}