//
// Created by raulm on 6/2/2024.
//

#ifndef PRACTIC_OBJECTUI_H
#define PRACTIC_OBJECTUI_H
#include "../Controller/ObjectController.h"
using namespace std;

    class ObjectUI {
    private:
        ObjectController* controller= nullptr;
    public:
        ObjectUI(ObjectController* ct): controller(ct){};
        void run(int day);
    };

#endif //PRACTIC_OBJECTUI_H
