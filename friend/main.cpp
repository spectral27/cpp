#include <iostream>
#include "MyClass.h"
#include "FriendClass.h"

int main() {
    MyClass myClass;
    FriendClass friendClass;
    friendClass.printMyClassValue(myClass);

    return 0;
}
