#include <iostream>
using std::string;

class Car
{
private:
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
        return price;
    }

    // constructor
    Car(string Brand, string Owner, int Price)
    {
        brand = Brand;
        owner = Owner;
        price = Price;
    }

    virtual void drive() {
        std::cout << brand << " is a standard car/ conventional car and requires a steering" << std::endl;
    }
};


// inheritance
class RoboticCar : public Car
{ 
public:
    string fuelType;
    string robotCarName;
    RoboticCar(string Brand, string Owner, int Price, string FuelType, string robotCarName)
        : Car(Brand, Owner, Price), robotCarName(robotCarName) 
    { 
        fuelType = FuelType;
       
    }

    void carDetails()
    {
        std::cout << brand << " is not a robotic car" << std::endl; 
        std::cout << robotCarName << " is a robotic car" << std::endl;
        std::cout << fuelType << std::endl;
    }

    //polymorphism
    void drive() {
        std::cout << robotCarName << " is a self driving car and steering is not mandatory" << std::endl;
    }
};

int main()
{
    Car car1 = Car("Toyota", "Ratan Tata", 2000000);
    car1.drive();
    RoboticCar rcar1 = RoboticCar("Auto-pilot", "Elon Musk", 3000000, "Electric", "Cybercab");
    //rcar1.drive();    commented this to show polymorphism using base class pointer
    
    Car* car2 = &rcar1; //base class pointer pointing to derived class object
    car2->drive(); //it will call base class drive(), if drive is not virtual in base class

    return 0;
};

/*
polymorphism:
A function/method  that can take many forms
here drive() method behaves differently, i.e, a normal car requires a steerinf but a robotic car doesn't(in this drive() works differently."Assume it like, a human doesn't drive it")

types:
compile time polymorphism: function overloading, operator overloading
runtime polymorphism : achieved using virtual functions


*/