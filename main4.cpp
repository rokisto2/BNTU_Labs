#define ll long long
#define str string
#include<bits/stdc++.h>

using namespace std;

int main() {
    double a = 0.1;
    double b = 1;
    cout << "значений функции Y(x)" << endl;
    for(double i = a; i<b; i+=(b-a)/10)
    {
        cout << "при x = " << i << " Значение функции Y(x) = " << (exp(i) + exp(-i))/2 << endl;
    }
    ll n = 100;
    for(double i = a; i<b; i+=(b-a)/10)
    {
        cout << "при x = " << i << " Значение функции S(x) = ";
        double z = 1;
        for(ll j = 0; j<n; j++)
        {
            ll res = 2;
            for (ll k = 1; k <= j; k++) {
                res *= k;
            }
            z+=pow(i,2*j)/res;
        }
        cout << z << endl;
    }
    return 0;
}