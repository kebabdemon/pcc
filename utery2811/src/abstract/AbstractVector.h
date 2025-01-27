#include "../interface/Addable.h"
#include "../interface/Scalarable.h"


template <class T>
class AbstractVector
{
public:
    static float norm(const T &other)
    {
        return sqrt(other.scalar(other));
    }

    static float angle(const T &first, const T &second)
    {
        return acos(first.scalar(second) / (norm(first) * norm(second)));
    }

    static T add(const T &v1, const T &v2)
    {
        return v1 + v2;
    }
};