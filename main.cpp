#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cout<<"podaj liczbe: "<<endl;
    int upperLimit ;
    cin>>upperLimit;

    bool *isPrimeNumber;
    isPrimeNumber = new bool[upperLimit];
    for(int i = 0;i<upperLimit;i++){
        isPrimeNumber[i]=true;
    }
    isPrimeNumber[0]=false;
    isPrimeNumber[1]=false;
    for(int i = 2;i<sqrt(upperLimit);i++){
        if(isPrimeNumber[i]==true){
            for(int j = i+1;j < upperLimit;j++){
                if(j%i==0){
                    isPrimeNumber[j]=false;
                }
            }
        }
    }
    for(int i = 0;i<upperLimit;i++){
        if(isPrimeNumber[i]==true){
            cout<< i <<" ";
        }
    }
    return 0;
}