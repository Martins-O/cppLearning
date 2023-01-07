#include <iostream>
#include <string>


int main(){
    /*
    std::cout << "hello c++20 "<<std::endl;

    int age {21};
    std:: cout << "Age : "<<age << std::endl;

    std:: cerr<<"error message : somethings is wrong"<< std::endl;
    std::clog <<"log message : something happened "<< std:: endl;

    int age1;
    std::string name;

    std::cout << "please input your name and age : "<< std::endl;

    std::cin >>name;
    std::cin >>age1;

    std::cin >> name >> age1; 

    std::cout<<"Hello "<< name << " you are "<< age1 << "years old"<< std::endl;
    
*/
    std::string full_name;
    int age2;

    std::cout << "please type in your full name and your age "<< std::endl;
    std::getline(std::cin,full_name);
    std::cin >> age2;

    std::cout<< "Hello "<<full_name
             <<" your are "<<age2<<" years old"<<std::endl;
    return 0;

}