#include "pch.h"
#include <triangle.h>
#include <stdexcept>


TEST(TriangleConstructorTest, DefaultConstructorInitializesToOne) {
    Triangle t;
    EXPECT_DOUBLE_EQ(t.getWidth(), 1.0);
    EXPECT_DOUBLE_EQ(t.getHeight(), 1.0);
}


TEST(TriangleConstructorTest, ParameterizedConstructorValidDimensions) {
    Triangle t(10.5, 4.0);
    EXPECT_DOUBLE_EQ(t.getWidth(), 10.5);
    EXPECT_DOUBLE_EQ(t.getHeight(), 4.0);
}


TEST(TriangleConstructorTest, ParameterizedConstructorThrowsOnInvalidWidth) {
    EXPECT_THROW(Triangle(0.0, 5.0), std::invalid_argument);
    EXPECT_THROW(Triangle(-2.5, 5.0), std::invalid_argument);
}


TEST(TriangleConstructorTest, ParameterizedConstructorThrowsOnInvalidHeight) {
    EXPECT_THROW(Triangle(5.0, 0.0), std::invalid_argument);
    EXPECT_THROW(Triangle(5.0, -3.14), std::invalid_argument);
}


TEST(TriangleConstructorTest, ParameterizedConstructorThrowsWhenBothInvalid) {
    EXPECT_THROW(Triangle(-1.0, -1.0), std::invalid_argument);
    EXPECT_THROW(Triangle(0.0, 0.0), std::invalid_argument);
}


TEST(TriangleSetterGetterTest, SettersAcceptValidValues) {
    Triangle t;

    t.setWidth(8.25);
    EXPECT_DOUBLE_EQ(t.getWidth(), 8.25);

    t.setHeight(14.0);
    EXPECT_DOUBLE_EQ(t.getHeight(), 14.0);
}


TEST(TriangleSetterGetterTest, SetWidthThrowsOnInvalidValueAndPreservesState) {
    Triangle t(6.0, 9.0);

    EXPECT_THROW(t.setWidth(0.0), std::invalid_argument);
    EXPECT_THROW(t.setWidth(-5.0), std::invalid_argument);

    EXPECT_DOUBLE_EQ(t.getWidth(), 6.0);
}


TEST(TriangleSetterGetterTest, SetHeightThrowsOnInvalidValueAndPreservesState) {
    Triangle t(6.0, 9.0);

    EXPECT_THROW(t.setHeight(0.0), std::invalid_argument);
    EXPECT_THROW(t.setHeight(-1.2), std::invalid_argument);

    EXPECT_DOUBLE_EQ(t.getHeight(), 9.0);
}


TEST(TriangleAreaTest, DefaultTriangleArea) {
    Triangle t;
    EXPECT_DOUBLE_EQ(t.getArea(), 0.5);
}


TEST(TriangleAreaTest, ComputesCorrectArea) {
    Triangle t(10.0, 5.0);
    EXPECT_DOUBLE_EQ(t.getArea(), 25.0);

    t.setWidth(3.5);
    t.setHeight(2.0);
    EXPECT_DOUBLE_EQ(t.getArea(), 3.5);
}