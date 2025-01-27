#include <iostream>
#include <cmath>
#include "../../abstract/AbstractComplex.h"

class Complex : public AbstractComplex<Complex>
{
    float _size, _angle;

public:
    Complex(float x, float y)
    {
        _size = x;
        _angle = y;
    }

    float getSize() const
    {
        return _size;
    }

    float getAngle() const
    {
        return _angle;
    }

    Complex operator*(const Complex &other) const
    {
        float angleresult = _angle + other._angle;
        if(angleresult >= 360){
            angleresult = angleresult - 360;
        }

        return Complex(_size * other._size, angleresult);
    }

    Complex Inv() const override {
        float resultAngle = _angle;
        if (resultAngle >= 360) {
            resultAngle -= 360;
        }
        return Complex(1 / _size, 360 - resultAngle);
    }



    friend std::ostream &operator<<(std::ostream &os, const Complex &other)
    {
        std::cout << " size: " << other._size << "   " << "Angle: " << other._angle << std::endl;
        return os;
    }
};
