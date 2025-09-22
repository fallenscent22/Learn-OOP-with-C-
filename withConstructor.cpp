#include <iostream>
using std::string;
class Car
{
public:
    string brand;
    string owner;
    int price;

    // function to display the car details within the class
    void displayDetails()
    {
        std ::cout << "brand: " << brand << std::endl;
        std ::cout << "owner: " << owner << std::endl;
        std ::cout << "price: " << price << std::endl; // these are within the class
    }

    // constructor
    Car(string Brand, string Owner, int Price)
    {
        brand = Brand;
        owner = Owner;
        price = Price;
    }
};

int main()
{
    Car car1 = Car("Bughatti", "Elon Musk", 1000000);
    car1.displayDetails(); // this function should be created and invoked to display the details of the car

    Car car2 = Car("Jaguar XJL", "Sir William Lyons", 2000000);
    car2.displayDetails();

    return 0;
}

// notes
/*
how to add more cars? like 100 or more . We can't go and create 100 displayDetails function as we did in prev code (which would be very dumb right?)
This is where constructos come into the picture(zuuuumm like a lamborghini, fastest car in India). Does  this mean there is no constructor, if we dont create? the answer is no.
(compilers create a deafult constructor, even if we dont create)
A constructor is a special member function with the same name as the class. It is used to initialize objects of that class.
A constructor has no return type, not even void.
For each object a constructor is called automaticlally when the obj is created.
*/
