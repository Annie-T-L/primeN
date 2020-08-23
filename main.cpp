#define _USE_MATH_DEFINES
#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <iomanip>
#include "person.h"

using namespace std;
//1 m	3.281 ft	39.37 in    0.000621371192 мили

int arra(int n1)
{
    int ar1[n1];
    int j1=0,
            si1=10000000;

    for(int i1=0;i1<si1;i1++)
    {
        int k1=0;
        for(int i2=1;i2<si1;i2++)
        {   if(i1%i2==0) {  k1++;   }}
        if(k1==2)
        {   ar1[j1] = i1;
            cout << ar1[j1] << setw(7); j1++;
            if(j1 == n1) {break;    }
        }
    }
    cout << endl;

}

int main()
{
    srand(time(NULL));

    arra(130);

    return 0;
}



