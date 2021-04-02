#include <iostream>
#include <math.h>

using namespace std;

#define Maxlenght 100

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

int digitsProduct(int product)
{
    if(isPrime(product)) return -1;
    else if(product == 0) return 10;
    else {
        int arr[100] = {};
        int pos = 0;
        for(int i=2; i<=product; i++) {
            if(isPrime(i) && product%i==0) {
                arr[pos]
            }
        }
    }
}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
