#include <iostream>
#include <iomanip>
#include <string>

class Car {
private:
    std::string make;
    std::string model;
    int year;

public:
    Car(std::string mk, std::string mdl, int yr) : make(mk), model(mdl), year(yr) {}

    void display() const {
        std::cout << std::setw(10) << year 
                  << std::setw(15) << make
                  << std::setw(15) << model 
                  << std::endl;
    }
};

int main() {
    Car car1("Toyota", "Fortuner", 2020);
    Car car2("Hyundai", "Altroz", 2019);
    Car car3("Maruti", "Swift", 2020);
    Car car4("Mahindra", "Scorpio", 2017);
    Car car5("kia", "seltos", 2019);

    std::cout << std::setw(10) << "Year" 
              << std::setw(15) << "make" 
              << std::setw(15) << "Model" 
              << std::endl;

    car1.display();
    car2.display();
    car3.display();
    car4.display();
    car5.display();

    return 0;
}