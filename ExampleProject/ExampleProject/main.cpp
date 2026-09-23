#include <iostream>
#include <stdexcept>
#include <clocale>


class Triangle {
private:
    double _width;
    double _height;

public:
    Triangle() {
        _width = 1;
        _height = 1;
    }

    Triangle(double width, double height) {
        if (width > 0 && height > 0) {
            _width = width;
            _height = height;
        }
        else {
            throw std::invalid_argument(std::string("Error: param(s) must be >0"));
        }
    }

    double getWidth() const noexcept {
        return _width;
    }

    double getHeight() const noexcept {
        return _height;
    }

    void setWidth(double width) {
        if (width > 0) {
            _width = width;
        }
        else {
            throw std::invalid_argument(std::string("Error: width must be >0"));
        }
    }

    void setHeight(double height) {
        if (height > 0) {
            _height = height;
        }
        else {
            throw std::invalid_argument(std::string("Error: height must be >0"));
        }
    }

    double getArea() const noexcept {
        return (0.5 * _width * _height);
    }
};


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