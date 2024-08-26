//
// Created by raulm on 6/2/2024.
//

#include "Object.h"

Object::Object(const string &name, double price, const string &type, const string &restaurant) : name(name),
                                                                                                      price(price),
                                                                                                      type(type),
                                                                                                      restaurant(
                                                                                                              restaurant) {}

const string &Object::getName() const {
    return name;
}

void Object::setName(const string &name) {
    Object::name = name;
}

double Object::getPrice() const {
    return price;
}

void Object::setPrice(double price) {
    Object::price = price;
}

const string &Object::getType() const {
    return type;
}

void Object::setType(const string &type) {
    Object::type = type;
}

const string &Object::getRestaurant() const {
    return restaurant;
}

void Object::setRestaurant(const string &restaurant) {
    Object::restaurant = restaurant;
}
