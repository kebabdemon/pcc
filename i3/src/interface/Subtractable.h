template <class U, class T>
class Subtractable
{
    virtual T subtract(const U &other) const = 0;
};