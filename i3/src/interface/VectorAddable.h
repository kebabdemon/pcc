template <class T>
class VectorAddable
{
    virtual T operator+(const T &other) const = 0;
};