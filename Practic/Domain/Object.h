//
// Created by raulm on 6/2/2024.
//

#ifndef PRACTIC_OBJECT_H
#define PRACTIC_OBJECT_H
#include <iostream>
#include <string>

using namespace std;

// obiect: masa
    class Object {
    private:
        std::string name;
        double price;
        std::string type;
        std::string restaurant;
    public:
        Object();

        Object(const string &name, double price, const string &type, const string &restaurant);

        const string &getName() const;

        void setName(const string &name);

        double getPrice() const;

        void setPrice(double price);

        const string &getType() const;

        void setType(const string &type);

        const string &getRestaurant() const;

        void setRestaurant(const string &restaurant);


    };

#endif //PRACTIC_OBJECT_H
