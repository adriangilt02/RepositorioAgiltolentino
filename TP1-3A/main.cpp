#include <iostream>

using namespace std;

int main()
{
    float KH , MS ;
    cout << "Ingrese los KM/H" << endl;
    cin >> KH;
    MS= (KH*1000/3600);
    cout << MS << "M/S" << endl;
}
