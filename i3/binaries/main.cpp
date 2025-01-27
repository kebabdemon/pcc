#include <iostream>
#include <cmath>
#include <Point.h>

using namespace std;

int main()
{

    auto ev = EVector(5, 5) + EVector(4, 4);

    auto res = AbstractVector<EVector>::norm(EVector(3, 3));

    cout << EVector(3, 4).scalar(EVector(3, 3)) << endl;

    auto angle = AbstractVector<EVector>::angle(EVector(3, 4), EVector(3, 3));

    cout << res << endl;

    cout << angle << endl;

    auto vec = EPoint(2,2).pointAdd(EVector(3, 3));

    cout << vec << endl;

    auto dist = AbstractEuclidianPoint<EPoint, EVector>::distance(EPoint(5, 5),EPoint(2, 2));

    cout << dist << endl;

    auto sub = EPoint(1,1).subtract(EPoint(5, 7));
    
    cout << sub;
    return 0;
}
