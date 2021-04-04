#include <iostream>
#include <stdio.h>

using namespace std;

int commonCharacterCount(string s1, string s2)
{
    char arr[100] = {};
    int index = 0;
    long int Res = 0;
    for(int i=0;i<s1.length();i++) {
        char tmpVal = s1.at(i);
        for(int j=0;j<s2.length();j++) {
            int tmpCount = 0;
            if(s2.at(j) == tmpVal){
                Res ++;
                tmpCount ++;
            }
            if(index == 0) arr[index] = s2.at(j);
            else {
                for(int k=0;k<=index;k++) {
                    if(arr[k] == s2.at(j)) break;
                }
                if(tmpCount != 1) arr[index] = s2
            }
        }

    }
    return Res;
}

int main()
{

    cout << commonCharacterCount("aabcc","adcaa");
    return 0;
}
