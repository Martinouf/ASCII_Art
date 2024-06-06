#include <iostream>
#include <string>

void printASCIIArt() {
    std::string art = R"(
     /\_/\  
    ( o.o ) 
     > ^ <
    )";
    std::cout << art << std::endl;
}

int main() {
    printASCIIArt();
    return 0;
}
