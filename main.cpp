#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;
long long power(int x)
{
    long long mult=1;
    for (int i=0;i<x;i++)
        mult *= 3;
    return mult;
}

int main()
{
    ofstream fout("output.txt");
    for (int a=1; a<=100;a++)
    {
        for (int x=1; x<=30;x++)
        {
            for (long long z=1; z<=14349000;z++)
            {
                if ( power(x)+a==z*z )
                    fout << "a= "<< a << "  x= " << x << "  y=" << z << endl;

            }
        }
    }
    /*int k;
    cin >> k;
    long long p = power(k);
    cout << p << endl;*/
    return 0;
}
