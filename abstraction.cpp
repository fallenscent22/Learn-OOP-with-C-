#include <iostream>
using std::string;

class AbstractCar
{
public:
    virtual void ApplyDiscount() = 0; // pure virutal function(one way of achieving abstraction)
};
class Car : AbstractCar
{
private:
    string brand;
    string owner;
    int price;

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

    Car(string Brand, string Owner, int Price)
    {
        brand = Brand;
        owner = Owner;
        price = Price;
    }

    void displayDetails()
    {
        std::cout << brand << std::endl;
        std::cout << owner << std::endl;
        std::cout << price << std::endl;
    }

    void ApplyDiscount()
    {
        if (price > 1000000)
        {
            std::cout << "Sorry, no discount available for luxury cars" << std::endl;
        }

        else
        {
            std::cout << "You get a discount of 5%" << std::endl;
            price = price - (price * 0.05);
            std::cout << " New price after discount: " << price << std::endl;
        }
    }
};

int main()
{
    Car car1 = Car("Bughatti", "Elon Musk", 1000000);
    car1.displayDetails();
    car1.ApplyDiscount();

    Car car2 = Car("Jaguar XJl", "Sir William Lyans", 2000000);
    car2.displayDetails();
    car2.ApplyDiscount();

    Car car3 = Car("Nano", "Ratan Tata", 50000);
    car3.displayDetails();
    car3.ApplyDiscount();
}

/*
Abstraction is hiding the internal implementation details of a class or function and showing only the necessary features to the user
It helps in reducing complexity and increasing efficiency in code design.
Abstraction : you care about "what" an object does, not "how" it does it

Achieveing Abstraction in c++:
1. using interface(pure abstract class)
2. using abstract classes(classes with at least one pure virtual function)

*** Abstraction focuses on interface over implementation ***

Abstract class: A class that cannot be instantiated and has at least one pure virtual function.


virtual:
Means that the function is polymorphic.
It tells the compiler: “Hey, this function can be overridden in derived classes.”

void ApplyDiscount():
This is the function declaration.
ApplyDiscount() is the name of the function, and void means it doesn’t return anything.

= 0:   //I promise this function exists, but I’m not telling you how. You must implement it(in derived classes).
It makes the function a pure virtual function.
Meaning:
The function has no body in the base class.
Any derived class must implement this function to be instantiable.
Makes the class an abstract class, so you cannot create objects of it.
It is like:
“Every car must know whether to apply discount or not itself, but I don’t care exactly how here.”
*/