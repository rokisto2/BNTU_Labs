//var 10
#define ll long long
#define str string
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ll n;

    cout << "Введите размер массивы" << endl;
    cin >> n;
    cout <<"Введите элементы массива через пробел" << endl;
    vector<str> a(n);
    for(ll i = 0; i<n; i++)
    {
        cin >> a[i];
    }
    bool f = 0;
    for(ll i = 0; i<n/2; i++)
    {
        if(a[i] != a[n-i-1])
        {
            f = 1;
            break;
        }
    }
    if(f)
    {
        cout << "Нет";
    }
    else
    {
        cout <<"Да";
    }
    return 0;
}