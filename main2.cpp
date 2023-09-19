#include <bits/stdc++.h>
#define ll long long
#define str string
using namespace std;

int main() {
    double x;
    x = 14.26;
    double y = -1.22;
    double z = 3.5* pow(10,-2);
    x=x-(2.0/3);
    double s = 2* cos(x);
    s/=(1.0/2+pow(sin(y),2));
    s*=(1+pow(z,2)/(3-pow(z,2)/5));
    cout << "Ответ на заданные данные:" << s;
}
