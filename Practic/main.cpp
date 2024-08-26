#include <iostream>
#include "UI/ObjectUI.h"
#include <memory>
#include <cassert>

using namespace std;
int main() {
//    shared_ptr< ObjectRepo> repository= make_shared<ObjectRepo>();
//    shared_ptr< ObjectController> controller= make_shared<ObjectController>(repository.get());
//    shared_ptr< ObjectUI> ui= make_shared< ObjectUI>(controller.get());
//    std::cout << "Hello, World!" << std::endl;
//    return 0;
    ObjectRepo repo;
    repo.addMeal(Object("Meniu1",20.00,"burger","Marty"));
    repo.addMeal(Object("Meniu2",32.00,"pizza","Marty"));

    assert(repo.get_all()[0].getName() == "Meniu1");
    assert(repo.get_all()[1].getName() == "Meniu2");
    std::vector<Object> all_objects = repo.get_all();
    assert(all_objects.size() == 2);

    repo.addMeal(Object("Meniu3",20.00,"sushi","FoodRacoon"));
    repo.addMeal(Object("Meniu4",50.00,"pizza","FoodRacoon"));
    repo.addMeal(Object("Meniu5",70.00,"cartofi","Marty"));
    repo.addMeal(Object("Meniu6",60.00,"sandvici","Marty"));



    repo.addMeal(Object("Meniu7",80.00,"burger","Marty"));
    repo.addMeal(Object("Meniu7-elev",20.00,"burger","FoodRacoon"));
    repo.addMeal(Object("Meniu8",30.00,"burger","Marty"));
    repo.addMeal(Object("Meniu9",60.00,"pizza","Marty"));
    repo.addMeal(Object("Meniu10",75.30,"burger","Marty"));
    repo.addMeal(Object("Meniu11",20.10,"pizza","Marty"));

    ObjectController controller(&repo);
    ObjectUI ui(&controller);

    cout<< "------------------------------------------------------------------------\n";
    ui.run(1);
    cout<< "------------------------------------------------------------------------\n";
    ui.run(2);
    cout<< "------------------------------------------------------------------------\n";

    const std::vector<Object>& allObjects = repo.get_all();

    std::cout << "All objects:" << std::endl;
    for (const auto& obj : allObjects) {
        std::cout << obj.getName() <<" " <<obj.getPrice()<<" "<<obj.getType()<<' '<< obj.getRestaurant()<< std::endl;
    }

}
