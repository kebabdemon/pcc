#include <iostream>
#include <AbstractEuclidianPoint.h>


class EPoint : public AbstractEuclidianPoint<EPoint, EVector>
{
    float _x, _y;

public:
    EPoint(float x, float y)
    {
        _x = x;
        _y = y;
    }

    EPoint pointAdd(const EVector &vect) const 
    {
        return EPoint(_x + vect._x, _y + vect._y);
    }

    EVector subtract(const EPoint &other) const
    {
        return EVector(_x - other._x, _y - other._y);
    }



    friend std::ostream &operator<<(std::ostream &os, const EPoint &other)
    {
        os << other._x << other._y;
        return os;
    }
};