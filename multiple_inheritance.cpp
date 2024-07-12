// To compile and run, at the terminal type:
//
//     g++ multiple_inheritance.cpp -o multiple_inheritance
//     ./multiple_inheritance

#include <iostream>

class Base {
public:
    void method() {
        std::cout << "Method in Base\n";
    }
};

class Left: virtual public Base {
public:
    void method() {
        Base::method();
        std::cout << "Method in Left\n";
    }
};

class Right: virtual public Base {
public:
    void method() {
        Base::method();
        std::cout << "Method in Right\n";
    }
};

class Derived: public Left, public Right {
public:
    void method() {
        Left::method();
        Right::method();
        std::cout << "Method in Derived\n";
    }
};

int main() {
    Derived d;
    d.method();
    return 0;
}
