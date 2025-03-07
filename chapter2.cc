#include <iostream>

void exercise21();

int main() {
    bool finished = false;
    int choice = -1;
    while (!finished) {
        std::cout << "Menu: (Please choose a number)" << std::endl;
        std::cout << "1) Exercise 2.1" << std::endl;
        std::cout << "Press any other integer to quit." << std::endl;

        std::cin >> choice;
        switch(choice) {
            case 1:
                exercise21();
                break;
            default:
                finished = true;
                break;
        }

        std::cout << std::endl;
    }
    

  return 0;
}

//Exercise 2.1: What are the differences between int, long, long long and short?
//Between an unsigned and a signed type? Between a float and a double?
void exercise21() {
    std::cout << "\n**EXERCISE 2.1**" << std::endl;
    std::cout << "An int is 2 bytes, a long 4 bytes, a long long 8 bytes. A short is guaranteed to be 2 bytes. " 
    "The difference between a short and an int is evident when a 32-bit compiler is used where ints are now 4 bytes while shorts remain 2." << std::endl;
    std::cout << "An unsigned type can not hold a negative value while a signed type can." << std::endl;
    std::cout << "A float holds 6 significant digits while a double can hold up to 10." << std::endl;
}