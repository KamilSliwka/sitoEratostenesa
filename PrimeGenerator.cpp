//
// Created by kamil on 26.07.2023.
//

#include <iostream>
#include "PrimeGenerator.h"
#include "math.h"

using namespace std;

PrimeGenerator::PrimeGenerator(int MaxValue) {
    this->MaxValue = MaxValue;
}

void PrimeGenerator::generatePrimes() {
    if(MaxValue < MinPrimeNumber){
        result = new int[0];
    }
    else{
        uncrossedIntegersUpTo();
        crossOutMultiples();
        putUncrossedIntegersIntoResult();
    }
}

void PrimeGenerator::uncrossedIntegersUpTo() {
    crossedOut = new bool[MaxValue + 1];
    for(int i = 0 ; i <= MaxValue ; i++)
        crossedOut[i] = true;
    crossedOut[0]=false;
    crossedOut[1]=false;
}

void PrimeGenerator::crossOutMultiples() {
    for(int i = MinPrimeNumber;i<sqrt(MaxValue);i++){
        if(notCrossed(i)){
            crossOutMultiplesOf(i);
        }
    }
}

bool PrimeGenerator::notCrossed(int i) {
    return crossedOut[i];
}

void PrimeGenerator::crossOutMultiplesOf(int i ) {
    for(int j = i+1 ; j <= MaxValue ; j++){
        if(j % i == 0){
            crossedOut[j] = false;
        }
    }
}

void PrimeGenerator::putUncrossedIntegersIntoResult() {
    result = new int[numbersOfUncrossedIntegers()];
    int j = 0;
    for( int i = MinPrimeNumber; i <= MaxValue ;i++){
        if(notCrossed(i)){
            result[j++] = i;
        }
    }
}

int PrimeGenerator::numbersOfUncrossedIntegers() {
    int counter = 0;
    for(int i = 0 ; i <= MaxValue ; i++){
        if(notCrossed(i)){
            counter++;
        }
    }
    return counter;
}

void PrimeGenerator::showPrimes() {
    for(int i = 0 ; i < numbersOfUncrossedIntegers(); i++){
        cout<< result[i] <<" ";
    }
}
