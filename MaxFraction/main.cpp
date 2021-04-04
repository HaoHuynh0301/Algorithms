#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

int maxFraction(vector<int> numerators, vector<int> denominators)
{
    int Res = 0;
    double Val = 0;
    for(int i=0;i<numerators.size();i++) {
        if(numerators[i]/denominators[i] >= Val) Res = i;
    }
    return Res;
}

int main()
{

    cout << maxFraction([5, 2, 5],[6, 3, 4]);
    return 0;
}
