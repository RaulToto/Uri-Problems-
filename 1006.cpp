#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    float a,b,c;
    cin >> a >> b >> c;
    cout.unsetf ( std::ios::floatfield );
    cout.precision(2);
    //cout << "MEDIA = " << ((a*2+b*3+c*5)/(2+3+5)) << endl;
    printf("MEDIA = %.1f\n", (a*2 + b*3 + c*5)/(2+3+5));
    return 0;
}