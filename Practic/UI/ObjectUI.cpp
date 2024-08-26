// ObjectUI.cpp
#include "ObjectUI.h"

void ObjectUI::run(int day) {
    std::vector<Object> specials;
    if (day == 1) {
        specials = controller->getSpecialsDay1();
    } else if (day == 2) {
        specials = controller->getSpecialsDay2();
    } else {
        std::cout << "Invalid day selected!" << std::endl;
        return;
    }
    for (const Object& meal : specials) {
        std::cout << "Nume: " << meal.getName()
                  << ", Pret: " << meal.getPrice()
                  << ", Tip: " << meal.getType()
                  << ", Restaurant: " << meal.getRestaurant() << std::endl;
    }
}
