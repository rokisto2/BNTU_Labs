#define ll long long
#define str string
#include<bits/stdc++.h>

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


int main() {
    cout << "Введите x y" << endl;
    ll x, y;
    str s;
    try{
        cin >> s;
        x = chek(s);
        cin >> s;
        y = chek(s);
    }
    catch(const char* e)
    {
        cout << "Ошибка" << endl;
        return 0;
    }
    ll z = pow(pow(x,4)+y,3 );
    if (x > 0 && y > 0)
    {
         z = log(pow(x,2))+pow(pow(x,2),1.0/3);
    }
    if (x < 0 || y < 0)
    {
        z = log(pow(x,2))+pow(pow(x,2),1.0/3);
    }
    cout << "Вот ответ на задачу: " << z << endl;
    return 0;
}