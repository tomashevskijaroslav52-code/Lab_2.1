#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double b;  
    double z1; 
    double z2; 

    cout << "b = ";
    cin >> b;

    z1 = sqrt(2 * b + 2 * sqrt(b * b - 4)) / (sqrt(b * b - 4) + b + 2);

    z2 = 1 / sqrt(b + 2);
    cout << endl;
    cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl;

    return 0;
}