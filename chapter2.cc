#include <iostream>
using namespace std;

void exercise21();
void exercise22();
void exercise23();
void exercise25();
void exercise26();
void exercise27();
void exercise28();
void exercise29();
void exercise210();

int main() {
    bool finished = false;
    int choice = -1;
    while (!finished) {
        std::cout << "Menu: (Please choose a number)" << std::endl;
        cout << "1) Exercise 2.1" << std::endl;
        cout << "2) Exercise 2.2" << endl;
        cout << "3) Exercise 2.3/4" << endl;
        cout << "4) Exercise 2.5" << endl;
        cout << "5) Exercise 2.6" << endl;
        cout << "6) Exercise 2.7" << endl;
        cout << "7) Exercise 2.8" << endl;
        cout << "8) Exercise 2.9" << endl;
        cout << "9) Exercise 2.10" << endl;
        std::cout << "Press any other integer to quit." << std::endl;

        std::cin >> choice;
        switch(choice) {
            case 1:
                exercise21();
                break;
            case 2:
                exercise22();
                break;
            case 3:
                exercise23();
                break;
            case 4:
                exercise25();
                break;
            case 5:
                exercise26();
                break;
            case 6:
                exercise27();
                break;
            case 7:
                exercise28();
                break;
            case 8:
                exercise29();
                break;
            case 9:
                exercise210();
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

//Exercise 2.2:
void exercise22() {
    cout << "\n**EXERCISE 2.2**" << endl;
    cout << "To calculate a mortgage payment, what types would you use for the rate, principal, and payment?" << endl;
    cout << "Rate: Float, because decimals are required but not the precision of a double." << endl;
    cout << "Principal: Float, see above reason." << endl;
    cout << "Payment: Float, see above reason." << endl;
}

//Exercise 2.3/4
void exercise23() {
    cout << "\n**EXERCISE 2.3/4**" << endl;
    unsigned u = 10, u2 = 42;
    int i = 10, i2 = 42;
    cout << "My answers: 32, 4294967264" << endl;
    cout << "Program Answer: " << u2 - u << ", " << u - u2 << endl;
    cout << "My answers: 32, -32, 0, 0" << endl;
    cout << "Program answers: " << i2 - i << ", " << i - i2 << ", " << i - u << ", " << u - i << endl;
}

//Exercise 2.5
void exercise25() {
    cout << "\n**EXERCISE 2.5**" << endl;
    cout << "char, wchar_t, string, wchar_t" << endl;
    cout << "int, unsigned int, long, unsigned long, octal int, hexadecimal int" << endl;
    cout << "double, float, long double" << endl;
    cout << "int, unsigned int, double, double" << endl;
}

//Exercise 2.6
void exercise26() {
    cout << "\n**EXERCISE 2.6**" << endl;
    cout << "int month = 9, day = 7; stores the integers in decimal format." << endl;
    cout << "int month = 09, day = 07; stores the integers in octal format." << endl;
}

//Exercise 2.7
void exercise27() {
    cout << "\n**EXERCISE 2.7**" << endl;
    cout << "(a) = \"Who goes with Fergus?\\n\" and is a string, (b) = 31.4 and is a long double,"
    "(c) = 1024 and is a float, and (d) = 3.14 and is a long double." << endl;
}

//Exercise 2.8
void exercise28() {
    cout << "\n**EXERCISE 2.8**" << endl;
    cout << "\062\x4D" << endl;
    cout << "\062\t\x4D\n" << endl;
}

//Exercise 2.9
void exercise29() {
    cout << "\n**EXERCISE 2.9**" << endl;
    cout << "cin >> int input_value; is not allowed, as input_value must be declared first." << endl;
    cout << "int i = {3.14}; is allowed." << endl;
    cout << "double salary = wage = 9999.99; is not allowed as the syntax is incorrect. " 
    "Correct syntax would be double salary, wage = 9999.99;."<< endl;
    cout << "int i = 3.14 is allowed." << endl;
}

//Exercise 2.10
void exercise210() {
    cout << "global_int has a value of 0, global_string has a value of \"\", local_int is uninitialized, and local_str has a value of \"\"" << endl;
}