#include <iostream>


int addNumbers(int param, int parem){ 
    int result = param + parem;
    return result;
}
int multiplyTwoNUmbers(int param, int parem){
    int result = param * parem;
    return result;
}

int main(){

    int first_number {3};
    int second_number {7};

    std::cout << "first number: " << first_number << std::endl;
    std::cout << "second number : " << second_number << std::endl;

    int sum = first_number + second_number;
    std::cout << "the sum is : "<<sum<< std::endl;

    sum = addNumbers(6, 2);  
    std::cout << "the sum is: " << sum << std::endl;

    std::cout << "the sum of the two numbers are :"<<addNumbers(34, 535)<<std::endl;

    int total = multiplyTwoNUmbers(43, 55);
    std::cout<< "The total is : "<< total<< std::endl;
    return 0;
}