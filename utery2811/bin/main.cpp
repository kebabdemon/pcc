#include <iostream>

template <typename T>
class Vektor
{
public:
    T X, Y;

    Vektor(T x, T y) : X(x), Y(y) {}

    Vektor<T> add(const Vektor<T> &other) const
    {
        return Vektor<T>(X + other.X, Y + other.Y);
    }

    void print() const
    {
        std::cout << "(" << X << ", " << Y << ")";
    }
};

template <class T>
class AbstractVector;

template <class T>
class EVector;

template <class T>
class LLVector;

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

template <class T>
class EVector : public AbstractVector<EVector<T>>, public Vektor<T>
{
public:
    EVector(T x, T y) : Vektor<T>(x, y) {}

    EVector operator+(const EVector &other) const
    {
        return EVector(this->X + other.X, this->Y + other.Y);
    }

    T scalar(const EVector &other) const
    {
        return this->X * other.X + this->Y * other.Y;
    }

    friend std::ostream &operator<<(std::ostream &os, const EVector &v)
    {
        os << "(" << v.X << ", " << v.Y << ")";
        return os;
    }
};

template <class T>
class LLVector : public AbstractVector<LLVector<T>>, public Vektor<T>
{
public:
    LLVector(T x, T y) : Vektor<T>(x, y) {}

    LLVector operator+(const LLVector &other) const
    {
        return LLVector(this->X + other.X, this->Y + other.Y);
    }

    T scalar(const LLVector &other) const
    {
        return this->X * other.X + this->Y * other.Y;
    }

    friend std::ostream &operator<<(std::ostream &os, const LLVector &v)
    {
        os << "(" << v.X << ", " << v.Y << ")";
        return os;
    }
};

int main()
{
    using FloatVektor = Vektor<float>;

    FloatVektor ev1(1.0f, 2.0f);
    FloatVektor ev2(3.0f, 4.0f);

    std::cout << "EVector 1: ";
    ev1.print();
    std::cout << std::endl;

    std::cout << "EVector 2: ";
    ev2.print();
    std::cout << std::endl;

    std::cout << "Scalar product: " << AbstractVector<FloatVektor>::add(ev1, ev2).scalar(ev2) << std::endl;

    FloatVektor llv1(5.0f, 6.0f);
    FloatVektor llv2(7.0f, 8.0f);

    std::cout << "LLVector 1: ";
    llv1.print();
    std::cout << std::endl;

    std::cout << "LLVector 2: ";
    llv2.print();
    std::cout << std::endl;

    FloatVektor llvSum = AbstractVector<FloatVektor>::add(llv1, llv2);
    std::cout << "LLVector sum: ";
    llvSum.print();
    std::cout << std::endl;

    return 0;
}
