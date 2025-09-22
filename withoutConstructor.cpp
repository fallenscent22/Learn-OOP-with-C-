#include <iostream>
using std::string;
class Car
{
public: // access modifier, if this is not wrutten then by default it is private, then these members cannot be accessed outside of the class
    string brand;
    string owner;
    int price;

    // function to display the car details within the class
    void displayDetails()
    {
        std ::cout << "brand: " << brand << std::endl;
        std ::cout << "owner: " << owner << std::endl;
        std ::cout << "price: " << price << std::endl; // these are within the class, so no need of an object to access them
    }

}; // class must be ended with a semicolon

int main()
{                            // execution starts from here
    Car car1;                // object of class is created, this is like (int number, but as we are using class as datatype so Car is datatype and car1 is just some varname)
    car1.brand = "Bughatti"; // object car is used to access the memebrs of the class
    car1.owner = "Elon Musk";
    car1.price = 1000000;
    std ::cout << "brand: " << car1.brand << std::endl; // outside the class, so object is required.
    std ::cout << "owner: " << car1.owner << std::endl;
    std ::cout << "price: " << car1.price << std::endl;
    car1.displayDetails(); // this function should be created and invoked to display the details of the car(when above 3 lines are commented)
    return 0;
}

// notes
/*
We have 1 car here(car1) but what if we have to add more cars, see the next code(withConstructor.cpp)
*/


// compiling c++ code
// g++ filename.cpp -o outputfile(any name) : -o represents output file
//         ./outputfile(above given name) is used to run the file
