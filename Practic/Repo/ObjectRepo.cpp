//
// Created by raulm on 6/2/2024.
//

#include "ObjectRepo.h"

void ObjectRepo::addMeal(const Object& meal) {
    objects.push_back(meal);
}

const std::vector<Object>& ObjectRepo::get_all() const {
    return objects;
}
