template <class T>
class ComplexMulti
{
protected:
    virtual T operator*(const T &other  ) const = 0;
};