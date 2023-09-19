//var 8
#define ll long long
#define str string
#include <bits/stdc++.h>

using namespace std;

bool comp(vector<ll> a, vector<ll> b)
{
    return a[a.size()-1] < b[b.size()-1];
}

int main()
{
    ll n,m;
    try {
        cout << "Введите размеры массива NxM" << endl;
        cin >> n >> m;
        cout << n << m;
        if(n<0 || m < 0)
        {
            cout << "Вы вели неправельные данные" << endl;
            return 0;
        }
        vector<vector<ll> > a;
        cout << "Введите элементы массива"<< endl;
        for (ll i = 0; i < n; i++)
        {
            vector<ll> b(m+1);
            b[m] = 0;
            for(ll j = 0; j<m; j++)
            {
                cin >> b[j];
                b[m]+=b[j];
            }
            a.push_back(b);
        }
        sort(a.begin(), a.end(), comp);
        cout << "Ввот отсортированый список"<< endl;
        for(ll i = 0; i<n; i++)
        {
            for(ll j = 0; j<m; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
    catch (const char* e)
    {
        cout << "Вы вели неправельные данные" << endl;
        return 0;
    }

    return 0;
}