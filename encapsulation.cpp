#include <iostream>
using std::string;
class Car
{
private:
    string brand;
    string owner;
    int price;

public:
    // use getters and setters to access the private variables
    void setBrand(string Brand){
        brand = Brand;
    }

    void setOwner(string Owner){
        owner = Owner;
    }

    void setPrice(int Price){
        price = Price;
    }

    string getBrand(){
        return brand;
    }
     
    string getOwner(){
        return owner;
    }
    
    int getPrice(){
        return price;               //we can add validation like, price > 0, so that negative price is not set(which is illogical)
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
Encapsulation means wrapping data (variables/properties) and methods (functions/behaviors) into a single unit (class) while restricting direct access to some parts of the object.
Why Encapsulation?
Data Protection – Prevents accidental modification of critical data.
Security – Restricts unauthorized access (e.g., hiding internal implementation details).
Maintainability – If you need to change internal logic, you don’t break external code.
Control – You can define rules for accessing and updating values.

How to achieve Encapsulation ?
using access specifiers(public, private, protected)

Implementation:
Data members are kept private.
Member functions (getters/setters) are kept public to provide controlled access.
*/
