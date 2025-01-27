#include <iostream>
#include <cmath>

// Forward declaration of Vector class to resolve circular dependency
class Vector;

// Interfaces
template <class T>
class Scalarable {
public:
    virtual float scalar() const = 0;
};

template <class T>
class Addable {
public:
    virtual T add(const T& other) const = 0;
};

template <class T, class U>
class PointAddable {
public:
    virtual T add(const U& vector) const = 0;
};

template <class T>
class Subtractable {
public:
    virtual T subtract(const T& other) const = 0;
};

// Abstraktní třída pro body v euklidovském prostoru
template <class T, class U>
class AbstractEuclideanPoint : public PointAddable<T, U>, public Subtractable<T>  {
public:
    // Obecná definice vzdálenosti mezi body
    float distance(const T& other) const {
        return sqrt(scalar() + other.scalar() - 2 * this->scalar(other));
    }

    // Implementace skalární metody pro Scalarable interface
    float scalar() const override {
        // Provide your implementation here
        return 0.0f;
    }
};

// Třída reprezentující vektor v euklidovském prostoru
class Vector : public AbstractEuclideanPoint<Vector, Vector> {
protected:
    float x, y;

public:
    Vector(float x, float y) : x(x), y(y) {}

    // Implementace sčítání vektoru s vektorem
    Vector add(const Vector& other) const override {
        return Vector(x + other.x, y + other.y);
    }

    // Implementace odčítání vektoru od vektoru
    Vector subtract(const Vector& other) const override {
        return Vector(x - other.x, y - other.y);
    }

    // Implementace skalární metody pro Scalarable interface
    float scalar() const override {
        return x * x + y * y;
    }

    // Implementace skalárního součinu vektoru s vektorem
    float scalar(const Vector& other) const  {
        return x * other.x + y * other.y;
    }
};

// Třída reprezentující bod v euklidovském prostoru
class Point : public AbstractEuclideanPoint<Point, Vector> {
    float x, y;

public:
    Point(float x, float y) : x(x), y(y) {}

    // Implementace sčítání vektoru s bodem
    Point add(const Vector& vector) const override {
        return Point(x + vector.x, y + vector.y);
    }

    // Implementace odčítání bodů
    Point subtract(const Point& other) const override {
        return Point(x - other.x, y - other.y);
    }

    // Implementace skalární metody pro Scalarable interface
    float scalar() const  {
        return x * x + y * y;
    }
};

int main() {
    // Vytvoření bodu (2,2)
    Point point1(2, 2);

    // Vytvoření vektoru (3,3)
    Vector vector(3, 3);

    // Sčítání vektoru s bodem
    Point result = point1.add(vector);

    // Výpis nového bodu (5,5)
    std::cout << "Result of adding vector to point: ";
    result.print();

    // Vzdálenost od bodu (2,2)
    float distance1 = result.distance(Point(2, 2));
    std::cout << "Distance from point (2,2): " << distance1 << std::endl;

    // Odečtení bodů (5,7) - (1,1)
    Point point2(1, 1);
    Point result2 = Point(5, 7).subtract(point2);

    // Výpis nového bodu (4,6)
    std::cout << "Result of subtracting points: ";
    result2.print();

    // Vzdálenost od bodu (1,1)
    float distance2 = result2.distance(point2);
    std::cout << "Distance from point (1,1): " << distance2 << std::endl;

    return 0;
}
