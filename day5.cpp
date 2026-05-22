#include <iostream>
#include <unordered_map>
#include <string>

int main() {

    std::unordered_map<std::string, double> price_registry;

    price_registry["RELIANCE.NS"] = 2450.50;
    price_registry["TCS.NS"] = 3210.20;
    price_registry["INFY.NS"] = 1420.15;

    std::string target_ticker = "RELIANCE.NS";
    std::cout << "Searching registery for: " << target_ticker << "\n";

    auto it = price_registry.find(target_ticker);

    if( it != price_registry.end()){
        std::cout << "SUCCESS!, " << it->first << it->second << "\n";
    }else {
        std::cout << "Ticker " << target_ticker << " not found in registry\n";
    }

    price_registry["RELIANCE.NS"] = 2462.10;

    std::cout << "Reliance new value: " << price_registry["RELIANCE.NS"] << "\n";
    

    return 0;
}