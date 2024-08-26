//
// Created by raulm on 6/2/2024.
//

#ifndef PRACTIC_OBJECTREPO_H
#define PRACTIC_OBJECTREPO_H
#include "../Domain/Object.h"
#include <vector>

    class ObjectRepo {
    private:
        vector<Object> objects;
    public:
        void addMeal(const Object& meal);
        const std::vector<Object>& get_all() const;
    };


#endif //PRACTIC_OBJECTREPO_H
