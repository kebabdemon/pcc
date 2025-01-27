#include <iostream>
#include <math.h>

int main() {


    EVektor<float> eV1(1.0, 2.0);
    EVektor<float> eV2 = EVektor<float>::mul(eV1, 2.0);

    std::cout << "EVektor V1: ";
    eV1.printMe();

    std::cout << "EVektor Scalar Product: ";
    eV2.printMe();
    std::cout << std::endl;

    LLVektor<float> llV1(1.0, 2.0);
    LLVektor<float> llV2(3.0, 4.0);
    LLVektor<float> llSum = llV1 + llV2;

    std::cout << "LLVektor V1: ";
    llV1.printMe();

    std::cout << "LLVektor V2: ";
    llV2.printMe();

    std::cout << "LLVektor Sum: ";
    llSum.printAndMultiplyByTwo();
    std::cout << std::endl;


    Vector<float>* baseV1 = new LLVektor<float>(1.0, 2.0);
    Vector<float>* baseV2 = new LLVektor<float>(3.0, 4.0);

    LLVektor<float> upcastedSum = dynamic_cast<LLVektor<float>&>(*baseV1) + dynamic_cast<LLVektor<float>&>(*baseV2);

    std::cout << "Upcasted LLVektor Sum: ";
    upcastedSum.printAndMultiplyByTwo();

    return 0;



}
