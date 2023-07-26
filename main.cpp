#include <iostream>
#include <cmath>
#include "cmake-build-debug/PrimeGenerator.h"

using namespace std;

int main() {
    cout<<"Give a number: "<<endl;
    int upperLimit ;
    cin>>upperLimit;

    PrimeGenerator generator(upperLimit);
    generator.generatePrimes();
    generator.showPrimes();

    return 0;
}