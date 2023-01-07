/*(Comparing Integers) Write an application that asks the user to enter one integer, obtains
it from the user and displays whether the number and its square are greater than, equal to, not equal
to, or less than the number 100. Use the techniques shown in Fig. 2.15.*/

#include <iostream>


int main(){

    int number;

    std::cout << "Enter a number: "<<std::endl;
    std::cin >> number;

    if(number > 100){
        std::cout << number <<" is greater than 100"<<std::endl;
    }

    if (number < 100){
        std::cout << number <<" is less than 100"<<std::endl;
    }

    if (number == 100) {
        std::cout << number <<" is equal to 100"<<std::endl;
    }
    if (number != 100) {
        std::cout<< number<< " is not equal to 100"<<std::endl;
    }

    int square = number * number;

     if(square > 100){
        std::cout << square <<" is greater than 100"<<std::endl;
    }

    if (square < 100){
        std::cout << square <<" is less than 100"<<std::endl;
    }

    if (square == 100) {
        std::cout << square <<" is equal to 100"<<std::endl;
    }
    if (square != 100) {
        std::cout<< square<< " is not equal to 100"<<std::endl;
    }
}