#include <iostream>


int main(){

    // int elephant_count{};

    // int lion_count{};

    // int dog_count{10};

    // int cat_count{15};

    // int domesticalted_animals{dog_count + cat_count};

    // std::cout << "Elephant count: " << elephant_count << std::endl;
    // std::cout << "lion count: " << lion_count << std::endl;
    // std::cout << "Dog count: " << dog_count << std::endl;
    // std::cout<< "Cat count: " << cat_count << std::endl;
    // std::cout<< "Domesticalted count: " << domesticalted_animals<< std::endl;

    // // int new_number{doesnt_exist};

    // // int narrowing_conversion{static_cast<int>(2.9)};  
    // std::cout<< ""<<std::endl;

    //Functional Intialization
    // int apple_count(5);
    // int orange_count(10);
    // int fruit_count(apple_count + orange_count);

    // std::cout<< "Apple count : "<<apple_count<<std::endl;
    // std::cout<< "Orange count : "<<orange_count<<std::endl;
    // std::cout<< "Fruit count : "<<fruit_count<<std::endl;

    //Assignment notations

    int bike_count = 2;
    int truck_count = 7;
    int vehicle_count = bike_count + truck_count;
    // int narrowing_conversion = 2.9;

    std::cout<< "Bike count : "<<bike_count<<std::endl;
    std::cout<< "Vehicle count : "<<vehicle_count<<std::endl;
    std::cout<<"Truck count : "<< truck_count<<std::endl;
    // std::cout<< "Narrow conversion : "<< narrowing_conversion<<std::endl;

    //checking the size with sizeof

    std::cout<<"size of int"<<sizeof(int)<<std::endl;
    std::cout<<"size of truck count"<<sizeof(truck_count)<<std::endl;
    

    return 0;
}