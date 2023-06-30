#ifndef MYCLASS_H
#define MYCLASS_H

#include "FriendClass.h"

class FriendClass;

class MyClass {
private:
    int value;

public:
    MyClass();

    friend class FriendClass;
};

#endif
