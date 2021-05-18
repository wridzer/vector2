#include <iostream>
#include "Vector2.h"

int main() {
    Vector2* v = new Vector2(3, 4);
    Vector2* testVec = new Vector2(1, 2);

    std::cout << "[" << v->GetX() << ", " << v->GetY() << "]" << std::endl;
    *v = *v * 2;
    std::cout << "[" << v->GetX() << ", " << v->GetY() << "]" << std::endl;
    *v = *v + *testVec;
    std::cout << "[" << v->GetX() << ", " << v->GetY() << "]" << std::endl;
    std::cout << "Magnitude is: " << v->Magnitude() << std::endl;
    std::cout << "Angle is: " << v->Angle() << std::endl;
    v->Normalize();
    std::cout << "[" << v->GetX() << ", " << v->GetY() << "]" << std::endl;

    return 0;
}
