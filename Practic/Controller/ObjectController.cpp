// ObjectController.cpp
#include "ObjectController.h"
#include <algorithm>

std::vector<Object> ObjectController::getSpecialsDay1() const {
    std::vector<Object> meals = repo->get_all();
    std::vector<Object> burgers;

    for (Object& meal : meals) {
        if (meal.getType() == "burger" && meal.getRestaurant() == "Marty") {
            meal.setPrice(meal.getPrice() * 0.85);
            burgers.push_back(meal);
        }
    }

    std::sort(burgers.begin(), burgers.end(), [](const Object& a, const Object& b) {
        return a.getPrice() < b.getPrice();
    });

    return burgers;
}

std::vector<Object> ObjectController::getSpecialsDay2() const {
    std::vector<Object> meals = repo->get_all();
    std::vector<Object> pizzas;

    for (Object& meal : meals) {
        if (meal.getType() == "pizza" && meal.getRestaurant() == "Marty") {
            meal.setPrice(meal.getPrice() * 0.80);
            pizzas.push_back(meal);
        }
    }

    std::sort(pizzas.begin(), pizzas.end(), [](const Object& a, const Object& b) {
        return a.getRestaurant() < b.getRestaurant();
    });

    return pizzas;
}

void ObjectController::add(const Object& obj) {
    repo->addMeal(obj);
}

