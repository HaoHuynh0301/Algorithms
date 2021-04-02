#include <iostream>
#include <math.h>

using namespace std;

bool isPrime(int n)
{
        if(n <= 1) {
            return false;
        } else {
            for(int i=2; i<=sqrt(n); i++) {
                if(n%i == 0) return false;
            }
            return true;
        }
}

int compareNumbers(int a, int b) {
    if(a>b) return a;
    else return b;
}

int greatestCommonPrimeDivisor(int a, int b)
{
   if(isPrime(a) || isPrime(b) || isPrime(a) && isPrime(b)) return -1;
   else {
        int tmpVal = compareNumbers(a, b);
        int Res = 0;
        for(int i=2;i<tmpVal;i++) {
            if(isPrime(i) && a%i==0 && b%i==0) Res = i;
        }
        return Res;
   }
}

int main()
{
    cout << greatestCommonPrimeDivisor(12,13);
    return 0;
}
