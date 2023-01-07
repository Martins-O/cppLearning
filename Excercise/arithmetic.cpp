/*(Arithmetic) Write an application that asks the user to enter two integers, obtains them from
the user and prints the square of each, the sum of their squares, and the difference of the squares (first
number squared minus the second number squared). Use the techniques shown in Fig. 2.7.*/

#include <iostream>

int main(void){

    int number;
    int number2;

    std::cout <<"Enter number: " <<std::endl;
    std::cin >> number;
    std::cout <<"Enter number2: " <<std::endl;
    std::cin >> number2;

    int square = number * number;
    int square2 = number2 * number2;

    std::cout<< "The square for first number is : " << square << std::endl;
    std:: cout <<"the square for second number is : " << square2 << std::endl;

    std::cout<< "The total of the square is : " << square + square2<< std::endl;
    std:: cout <<"the subtract of the square is : " << square - square2<< std::endl;

    
}