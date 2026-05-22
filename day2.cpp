#include <string>
#include <iostream>

void printbio(const std::string &name, const std::string &college){
    name = "anonymous";
    std::cout << "The owner's Biodata:  ";
    std::cout << "The name is: " <<name << "\n";
    std::cout << "The college is: " <<college << "\n";
}

int main(){
    std::string name;
    std::string college;

    std::cout << "Type your name\n";
    std::getline(std::cin, name);

    std::cout << "Type your college\n";
    std::getline(std::cin, college);

    printbio(name,college);
}