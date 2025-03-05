#include <iostream>
#include "Sales_item.h"

int main() {
    //Exercise 1.1
    //done!

    //Exercise 1.2
    //return -1;
    //Apparently nothing different on macos

    //Exercise 1.3
    //std::cout << "\nExercise 1.3:" << std::endl;
    //std::cout << "Hello World!" << std::endl;
    
    //Exercise 1.4 & 1.5
    /*
    std::cout << "\nExercise 1.4 & 1.5:" << std::endl;
    int a, b;
    std::cin >> a >> b;
    std::cout << "The product of ";
    std::cout << a;
    std::cout << " and ";
    std::cout << b;
    std::cout << " is ";
    std::cout << a * b;
    std::cout << std::endl;
    */
    

    //Exercise 1.6
    /*
    * The given program fragment is not legal because of the semicolons at each line end.
    * To make the program legal, remove the semicolons from the ends of the first two lines.
    */

   //Exercise 1.7
   //Incorrectly nested comments sure do not compile yup

   //Exercise 1.8
   
   //std::cout << "\nExercise 1.7:" << std::endl;
   //std::cout << "/*" << std::endl; //compiles
   //std::cout << "*/" << std::endl; //compiles
   //std::cout << /* "*/" " /* */ << std::endl; //compiles
   //std::cout << /* "*/" /* "/*" */ << std::endl; //compiles
   

   //Exercise 1.9: Write a program that uses a while to sum the numbers from 50 to 100
   /*
   std::cout << "\nExercise 1.9:" << std::endl;
   int x = 50;
    while (x <= 100) {
        std::cout << x << std::endl;
        x++;
    }
    */

   //Exercise 1.10: Use the decrement operator to write a while that prints the numbers from 10 down to 0
   /*
    std::cout << "\nExercise 1.10:" << std::endl;
    int y = 10;
    while (y >= 0) {
        std::cout << y << std::endl;
        y--;
    }
    */

   //Exercise 1.11: Write a program that prompts the user for two integers. Print each number in the range specified by those two integers.
   /*
    std::cout << "\nExercise 1.11:" << std::endl;
    int first, second;

    std::cout << "Enter two integers: ";
    std::cin >> first >> second;
    while (first <= second) {
        std::cout << first << std::endl;
        first++;
    }
    */

    //Exercise 1.12
    //The given for loop adds the numbers between -100 and 100 to sum. The final value of sum will be 0.

    //Exercise 1.13: Rewrite the first two exercises from p. 13 using for loops.
    /*
    std::cout << "\nExercise 1.13:" << std::endl;
    for (int i = 50; i <= 100; i++) {
        std::cout << i << std::endl;
    }
    for (int i = 10; i >= 0; i--) {
        std::cout << i << std::endl;
    }
    */

    //Exercise 1.14: Compare for loops and while loops.
    //For loops contain a localized variable that allows them to specialize in repeating for n amount of times.
    //While loops are better for repeating until a certain condition is met.

    //Exercise 1.15: Write programs that contain the errors discussed on pg. 16.
    //int oops = 5:
    //int temp = 1;
    //char t = temp;
    //std::cout << undeclared;

    //Exercise 1.16: Write your own version of a program that prints the sum of a set of integers read from cin
    /*
    std::cout << "\nExercise 1.16:" << std::endl;
    int sum = 0, value = 0;
    while (std::cin >> value) {
        sum += value;
    }
    std::cout << sum << std::endl;
    return 0;
    */

   //Exercise 1.17 & 1.18:
   //If the input values are the same, then the count for that number is incremented
   //If there are no duplicate values, then each number will be said to occur only one time
   /*
   std::cout << "\nExercise 1.17 & 1.18:" << std::endl;
   int currVal = 0, val = 0;
   if (std::cin >> currVal) {
        int cnt = 1;
        while (std::cin >> val) {
            if (val == currVal) {
                cnt++;
            } else {
                std::cout << currVal << " occurs "
                << cnt << " times" << std::endl;
                currVal = val;
                cnt = 1;
            }
        }
        std::cout << currVal << " occurs "
        << cnt << " times" << std::endl;
   }
   */

    //Exercise 1.19: Rewrite 1.11 so it works no matter the order of the inputs
    /*
    std::cout << "\nExercise 1.19:" << std::endl;
    int first, second;
    std::cout << "Enter two integers: ";
    std::cin >> first >> second;

    if (first > second) {
        int temp = first;
        first = second;
        second = temp;
    }

    while (first <= second) {
        std::cout << first << std::endl;
        first++;
    }
    */

   //Exercise 1.20: Use Sales_item.h to write a program that reads a set of book sales transactions and prints them out
   /*
   std::cout << "\nExercise 1.20:" << std::endl;
    Sales_item item1;
    while (std::cin >> item1) {
        std::cout << item1 << std::endl;
    }
    //std::cout << item1 << std::endl;
    */

   //Exercise 1.21: Write a program that reads two Sales_item objects that have the same ISBN and produces their sum.
   /*
   std::cout << "\nExercise 1.21:" << std::endl;
   Sales_item item1, item2, sum;
   std::cout << "Please enter two sale data groups with the same ISBN: ";
   std::cin >> item1 >> item2;
   if (item1.isbn() == item2.isbn()) {
       sum = item1 + item2;
       std::cout << sum << std::endl;
   } else {
        std::cout << "Inputted ISBNs did not match. Please try again!" << std::endl;
   }
   */

  //Exercise 1.22: Write a program that reads several transactions for the same ISBN and writes their sum.
   std::cout << "\nExercise 1.22:" << std::endl;
   Sales_item item1, sum;
   //int count = 0;
   std::cout << "Please enter sale data groups with the same ISBN: ";
   std::cin >> sum;
   while (std::cin >> item1) {
        sum = sum + item1;
   }
   std::cout << sum << std::endl;



  return 0;
}