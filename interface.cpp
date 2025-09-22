#include <iostream>
using std::string;

class AbstractCar
{
public:
    virtual void ApplyDiscount() = 0;
};
class Car
{
private:
    // string brand;    commented to make it protected
    string owner;
    int price;

protected:
    string brand;

public:
    void setBrand(string Brand)
    {
        brand = Brand;
    }

    void setOwner(string Owner)
    {
        owner = Owner;
    }

    void setPrice(int Price)
    {
        price = Price;
    }

    string getBrand()
    {
        return brand;
    }

    string getOwner()
    {
        return owner;
    }

    int getPrice()
    {
        return price; // we can add validation like, price > 0, so that negative price is not set(which is illogical)
    }

    void displayDetails()
    {
        std ::cout << "brand: " << brand << std::endl;
        std ::cout << "owner: " << owner << std::endl;
        std ::cout << "price: " << price << std::endl;
    }

    // constructor
    Car(string Brand, string Owner, int Price)
    {
        brand = Brand;
        owner = Owner;
        price = Price;
    }
};

// inheritance
class RoboticCar : public Car
{ // if it is not public here then all properties of super class/ base class will be private by default and become inaccessible
public:
    string fuelType;
    string robotCarName;
    RoboticCar(string Brand, string Owner, int Price, string FuelType, string robotCarName)
        : Car(Brand, Owner, Price), robotCarName(robotCarName) // calling base class(super class) constructor, 
        
    { // calling base class(super class) constructor
        fuelType = FuelType;
        //robotCarName = robotCarName; //can be added here or above
    }

    void carDetails()
    {
        std::cout << brand << " is not a robotic car" << std::endl; //to achieve this make brand protected in base class
        std:: cout << robotCarName << " is a robotic car" << std::endl; 
        std::cout << fuelType << std::endl;
    }
};

int main()
{
    RoboticCar rcar1 = RoboticCar("Bughatti", "Elon Musk", 3000000, "Electric", "Cybercab");
    rcar1.displayDetails();
    rcar1.carDetails();
    return 0;
};



/*
Inheritance:
it allows a class to inherit properties and behavior(methods) from super class/base class

why inheritance?
code reusability
extensibility(can be used to extend the functionality of base class)
Inheritance forms an “is-a” relationship
*/