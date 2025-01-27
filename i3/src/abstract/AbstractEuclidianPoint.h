#include "../interface/PointAddable.h"
#include "../interface/Subtractable.h"
#include "Vector.h"
#include <cmath>
template <class U,class T>

class AbstractEuclidianPoint : public Subtractable<U, T>, PointAddable<U, T>
{
public:
    
    static U addToPoint(const U &point, const T &vect)
    {
        return point.pointAdd(vect);
    }
    static float distance(const U &first, const U &second)
    {
        return AbstractVector<T>::norm(first.subtract(second));
    }
};