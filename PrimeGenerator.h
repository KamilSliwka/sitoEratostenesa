//
// Created by kamil on 26.07.2023.
//

#ifndef SITOERATOSTENESA_PRIMEGENERATOR_H
#define SITOERATOSTENESA_PRIMEGENERATOR_H
#define MinPrimeNumber 2

class PrimeGenerator {
private:
    bool * crossedOut;
    int * result;
    int MaxValue;
public:
    PrimeGenerator(int MaxValue);

    void generatePrimes();

    void uncrossedIntegersUpTo();

    void crossOutMultiples();

    bool notCrossed(int i);

    void crossOutMultiplesOf(int i);

    void putUncrossedIntegersIntoResult();

    int numbersOfUncrossedIntegers();

    void showPrimes();
};


#endif //SITOERATOSTENESA_PRIMEGENERATOR_H
