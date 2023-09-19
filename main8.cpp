//var 2
#define ll long long
#define str string
#include <bits/stdc++.h>

using namespace std;

bool comp(pair<str, ll> a, pair<str,ll> b)
{
    return a.second<b.second;
}

int main()
{
    cout << "Введите группу" << endl;
    str s;
    getline(cin,s);
    vector<pair<str,ll> >a;
    str s1 = "";
    for(auto i : s)
    {
        if(i != ' ')
        {
            s1+=i;
        }
        else
        {
            if(s1.size()!=0)
                a.push_back({s1, s1.size()});
            s1 = "";
        }
    }
    sort(a.begin(), a.end(), comp);
    cout << "Саммая короткая строка " << a[0].first << " Длинной " << a[0].second << endl;
    return 0;
}