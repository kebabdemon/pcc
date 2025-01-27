#include <iostream>
#include <complex>
#include "../lib/complex/include/complex.h"

using namespace std;

int main() {

    cout << Complex(5,6) << endl; // [5.0,6.0]

    cout << Complex(1,60).Inv() << endl; //[1.0,300.0]

    cout << Complex(1,60) * Complex(3,30) << endl; //[3.0,90.0]

    cout << Complex(1,60)/ Complex(5,90) << endl; // [0.2, 330.0]



// pro A:

    cout << Complex(1,60).pow(5) << endl; // [1.0, 300.0]

    cout << Complex(2,45).pow(6) << endl; // [64.0, 270.0]

    cout << Complex(2,135).pow(6) << endl; // [64.0, 90.0]

    return 0;




}