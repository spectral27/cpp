#ifndef FRIENDCLASS_H
#define FRIENDCLASS_H

#include <iostream>
#include "MyClass.h"

class MyClass;

class FriendClass {
public:
    void printMyClassValue(const MyClass &myClass);
};

#endif
