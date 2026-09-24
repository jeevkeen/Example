#include <iostream>
#include <stdexcept>
#include <clocale>
#include <triangle.h>


int main() {
    
    setlocale(LC_ALL, "Russian");

    int a, h;
    Triangle t;

    std::cout << "Enter triangle width: ";
    std::cin >> a;
    t.setWidth(a);

    std::cout << "Enter triangle height: ";
    std::cin >> h;
    t.setHeight(h);

    std::cout << "\n-----TESTS-----\n";

    try {
        std::cout << "Width: " << t.getWidth() << "\n";
        std::cout << "Heigth: " << t.getHeight() << "\n";
        std::cout << "Area: " << t.getArea() << "\n\n";

        t.setWidth(12);
        std::cout << "New area after setWidth(12): " << t.getArea() << "\n\n";
    }
    catch (const std::exception& e) {
        std::cerr << "Catch exception: " << e.what() << "\n";
    }

    try {
        std::cout << "Try to create triangle with height < 0:\n";
        Triangle invalidTriangle(8, -3);
    }
    catch (const std::invalid_argument& e) {
        std::cerr << "Catch std::invalid_argument: " << e.what() << "\n\n";
    }

    try {
        Triangle t(4, 6);
        std::cout << "Try to create width = 0:\n";
        t.setWidth(0);
    }
    catch (const std::invalid_argument& e) {
        std::cerr << "Catch std::invalid_argument: " << e.what() << "\n";
    }

    return 0;
}