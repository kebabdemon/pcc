#include "../interface/ComplexMulti.h"
#include "../interface/Invert.h"

template <class T>
class AbstractComplex : public ComplexMulti<T>, Invert<T>
{
public:
    T operator/(const T &other) const
    {
        return *this * other.Inv();
    }

    T pow(int index) const
    {
        if (index == 0) {
            return T(1, 0);
        } else {
            return *this * pow(index - 1);
        }
    }

};