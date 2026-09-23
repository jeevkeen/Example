#include "pch.h"
#include "triangle.h"
#include <stdexcept>

Triangle::Triangle() {
    _width = 1;
    _height = 1;
}

Triangle::Triangle(double width, double height) {
    if (width > 0 && height > 0) {
        _width = width;
        _height = height;
    }
    else {
        throw std::invalid_argument(std::string("Error: param(s) must be >0"));
    }
}

double Triangle::getWidth() const noexcept {
    return _width;
}

double Triangle::getHeight() const noexcept {
    return _height;
}

void Triangle::setWidth(double width) {
    if (width > 0) {
        _width = width;
    }
    else {
        throw std::invalid_argument(std::string("Error: width must be >0"));
    }
}

void Triangle::setHeight(double height) {
    if (height > 0) {
        _height = height;
    }
    else {
        throw std::invalid_argument(std::string("Error: height must be >0"));
    }
}

double Triangle::getArea() const noexcept {
    return (0.5 * _width * _height);
}
