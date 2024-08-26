// ObjectController.h
#ifndef PRACTIC_OBJECTCONTROLLER_H
#define PRACTIC_OBJECTCONTROLLER_H

#include "../Repo/ObjectRepo.h"
#include <vector>
#include <string>

class ObjectController {
private:
    ObjectRepo* repo = nullptr;

public:
    explicit ObjectController(ObjectRepo* repository) : repo(repository) {}

    std::vector<Object> getSpecialsDay1() const;
    std::vector<Object> getSpecialsDay2() const;

    void add(const Object& obj);

};

#endif // PRACTIC_OBJECTCONTROLLER_H
