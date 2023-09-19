//var 10
#define ll long long
#define str string
#include <bits/stdc++.h>

using namespace std;

ll chek(str s)
{
    str s1 = "";
    for(auto i : s)
    {
        if(i == '-')
        {
            s1+=i;
            continue;
        }
        if(i>='0' && i <='9' )
        {
            s1+=i;
        }
        else
            break;
    }
    ll num;
    try {
        if(s1.size() <= 0)
        {
            cout << "Ошибка" << endl;
            exit(0);
        }
        num = stoi(s1);
    }
    catch(const char* e)
    {
        cout << "Ошибка" << endl;
        exit(0);
    }
    if(s1.size() != s.size())
    {
        cout << "Мы не момеж разобрать строку поэтому оставили только " << s1 << endl;
    }

    return num;
}



int main()
{
    ll n;
    str s;
    cout << "Введите размер массивы" << endl;
    cin >> s;
    n = chek(s);
    if(n <= 0)
    {
        cout << "Ошибка";
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
        cout << "Не симметричен";
    }
    else
    {
        cout <<"симметричен";
    }
    return 0;
}