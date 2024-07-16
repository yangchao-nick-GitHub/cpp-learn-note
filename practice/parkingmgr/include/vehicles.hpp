#ifndef __VEHICLES_HPP__
#define __VEHICLES_HPP__

#include <string>

namespace vehicles {

    class Vehicle {
    public:
        Vehicle(const char* name, const char* num):brand_name(name), license_num(num) 
        {
            price = 0;
        }
        virtual ~Vehicle() {};
        virtual void drive() = 0;

    private:
        std::string brand_name;
        std::string license_num;
        int price;
    };

    class Car : public Vehicle {
    public:
        Car(const char* name, const char* num, int door, int seat)
            :Vehicle(name, num), num_of_doors(door), num_of_seats(seat){}
        void drive();
    private:
        int num_of_doors;
        int num_of_seats;
    };
}

#endif