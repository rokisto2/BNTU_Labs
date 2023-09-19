//var 10
#define ll long long
#define str string
#include <bits/stdc++.h>

using namespace std;

int main()
{

    try
    {

        ll n;
        cout << "Введите размер массивы" << endl;
        cin >> n;
        if(n<=0)
        {
            cout << "Вы вели неправельные данные" << endl;
            return 0;
        }
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
    }
    catch (const char* e)
    {
        cout << "Вы вели неправельные данные" << endl;
        return 0;
    }
    return 0;
}