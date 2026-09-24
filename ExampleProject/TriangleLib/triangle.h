#pragma once
#include <stdexcept>


class Triangle {
private:
    double _width;
    double _height;

public:
    Triangle();
    Triangle(double width, double height);

    double getWidth() const noexcept;
    double getHeight() const noexcept;

    void setWidth(double width);
    void setHeight(double height);

    double getArea() const noexcept;
};
