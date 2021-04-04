#include <iostream>
#include <stdio.h>
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

long long numberZeroDigits(long long n)
{
    if(n == 1) return 0;
    else {
        long int Res = 0;
        while(n>=5) {
            n /= 5;
            Res += n;
        }
        return Res;
    }
}

int lastDigitDiffZero(int n)
{

}

int main()
{
    cout << numberZeroDigits(100);
    return 0;
}
