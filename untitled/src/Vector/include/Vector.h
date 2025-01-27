// Vector.h
#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>

template<class T>
class Vector {
protected:
    float _x;
    float _y;

public:
    Vector(float x, float y);

    float getX();
    float getY();

    void printMe();

    static Vector add(Vector a, Vector b);

    static Vector mul(Vector a, float b);

    virtual ~Vector() {} // Add virtual destructor for polymorphism
};

template<class T>
Vector<T>::Vector(float x, float y) : _x(x), _y(y) {}

template<class T>
float Vector<T>::getX() {
    return _x;
}

template<class T>
float Vector<T>::getY() {
    return _y;
}

template<class T>
void Vector<T>::printMe() {
    std::cout << "(" << _x << ", " << _y << ")" << std::endl;
}

template<class T>
Vector<T> Vector<T>::add(Vector<T> a, Vector<T> b) {
    return Vector<T>(a.getX() + b.getX(), a.getY() + b.getY());
}

template<class T>
Vector<T> Vector<T>::mul(Vector<T> a, float b) {
    return Vector<T>(a.getX() * b, a.getY() * b);
}

template<class T>
class EVektor : public Vector<T> {
public:
    using Vector<T>::Vector; // Inherit constructors

    // Additional functionality
    static EVektor mul(EVektor a, float b);
};

template<class T>
EVektor<T> EVektor<T>::mul(EVektor<T> a, float b) {
    return EVektor<T>(a.getX() * b, a.getY() * b);
}

template<class T>
class LLVektor : public Vector<T> {
public:
    using Vector<T>::Vector; // Inherit constructors

    // Overloaded addition operator
    LLVektor operator+(const LLVektor& other) const;

    // Additional functionality
    void printAndMultiplyByTwo();
};

template<class T>
LLVektor<T> LLVektor<T>::operator+(const LLVektor& other) const {
    LLVektor<T> result = LLVektor<T>(this->_x + other._x, this->_y + other._y);
    // Multiply the result by two
    result._x *= 2;
    result._y *= 2;
    return result;
}

template<class T>
void LLVektor<T>::printAndMultiplyByTwo() {
    this->printMe();
    std::cout << "(" << this->_x * 2 << ", " << this->_y * 2 << ")" << std::endl;
}

#endif