//var 2
#define ll long long
#define str string
#include <bits/stdc++.h>

using namespace std;

ll product(vector<ll> arr, ll size) {
    if (size == 0)
        return 1;
    return arr[size-1] * product(arr, size-1);
}
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
    cout << "Введите размео массива" << endl;
    ll n;
    str s;
    cin >> s;
    n = chek(s);
    if(n<=0)
    {
        cout << "Ошибка" << endl;
        return 0;
    }
    vector<ll> a(n);
    cout <<"Введите элементы массива через пробел" << endl;
    for(ll i = 0; i<n; i++)
    {
        cin >> s;
        a[i] = chek(s);
    }
    try
    {
        ll ans1 = 1;
        for(ll i = 0; i<n; i++)
        {
            ans1*=a[i];
        }
        cout << "Рассчет при цикле " << ans1 << endl;
        ll ans2 = 1;
        ans2 = product(a,a.size());
        cout << "Рассчет при рекурсии " << ans2;
    }
    catch(const char* e)
    {
        cout << "Ошибка" << endl;
        return 0;
    }
    return 0;
}