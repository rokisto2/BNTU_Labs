#define ll long long
#define str string
#include <bits/stdc++.h>

using namespace std;

class User
{
public:
    void setUser(str l, str p)
    {
        login = l;
        password = p;
    }

    void printUser()
    {
        cout << "Логин: " << login << " " << "Пароль: " << password << endl;
    }
    str        login;
    str        password;
};


int main()
{
    vector<User> users;
    User Admin;
    Admin.setUser("admin", "1111");
    users.push_back(Admin);

    while(true)
    {
        cout << "Введите логин"<< endl;
        str s;
        cin >> s;
        bool find = false;
        User chose;
        for(auto i : users)
        {
            if (i.login == s)
            {
                find = true;
                chose = i;
                break;
            }
        }
        if(!find)
        {
            continue;
        }
        find = false;
        ll count = 0;
        while(!find &&  count < 3)
        {
            cout << "Введите пароль"<< endl;
            cin >> s;
            if(s == chose.password)
            {
                find = true;
                break;
            }
            count++;
        }
        if(!find)
        {
            cout << "Несанкцтонированый вход выход из программы";
            return 0;
        }
        bool exit = false;
        if(chose.login == "admin")
        {
            while(true)
            {
                cout << "Добро подаловть админ выбретеи действия" << endl;
                cout << "0 - чтобы выйти из аккаунта"<< endl;
                cout << "1 - чтобы получить список пользователей"<< endl;
                cout << "2 - чтобы изменить пароль пользователя"<< endl;
                cout << "3 - чтобы добавить пользователя"<< endl;
                ll data;
                cin >> data;
                if(data == 0)
                {
                    exit = true;
                    break;
                }
                if(data == 1)
                {
                    for(auto  i : users)
                    {
                        i.printUser();
                    }
                }
                if(data == 2)
                {

                    cout << "Введите логин"<< endl;
                    str s1;
                    cin >> s1;
                    bool find1 = false;
                    User chose1;
                    auto position = users.end();
                    for(ll i = 0; i<users.size(); i++)
                    {
                        auto i1 = users[i];
                        if (i1.login == s1)
                        {
                            find1 = true;
                            chose1 = i1;
                            position= users.begin()+i;
                            break;
                        }
                    }
                    if(!find1)
                    {
                        cout << "Пользователь не найден"<< endl;
                        continue;
                    }
                    cout << "Старый пароль пользоваетля " << chose.password << endl;
                    cout << "Введите новый пороль пользователя";
                    cin >> s1;
                    chose.setUser(chose1.login, s1);
                    users.erase(position);
                    users.push_back(chose1);
                    cout << "Изменения сохранены" << endl;
                }
                if(data == 3)
                {
                    cout << "Введите логин для пользователя"<< endl;
                    str s1;
                    cin >> s1;
                    bool find1 = false;
                    User chose1;
                    auto position = users.end();
                    for(ll i = 0; i<users.size(); i++)
                    {
                        auto i1 = users[i];
                        if (i1.login == s1)
                        {
                            find1 = true;
                            chose1 = i1;
                            position= users.begin()+i;
                            break;
                        }
                    }
                    if(find1)
                    {
                        cout << "Пользователь уже сушествует"<< endl;
                        continue;
                    }
                    cout << "Введите пароль для пользователя"<< endl;
                    str s2;
                    cin >> s2;
                    chose1.setUser(s1,s2);
                    users.push_back(chose1);
                    cout << "Пользователь создан";
                }
                if(data < 0 || data > 3)
                {
                    cout << "Данной команды нет";
                }
            }
            if(exit)
                continue;


        }
        else
        {
            while (true)
            {
                cout << "Добро пожаловать " << chose.login << endl;
                cout << "0 - выйти из акаунта" << endl;
                cout << "1 - изменить пароль" << endl;
                ll data;
                cin >> data;
                if(data == 0)
                {
                    cout << "Вы вышли из системы " << chose.login << endl;
                    break;
                }
                if(data == 1)
                {
                    cout << "Ваш старый пароль " << chose.password << endl;
                    cout << "Введите новый пароль" << endl;
                    str s4;
                    cin >> s4;
                    for(auto i : users)
                    {
                        if(i.login == chose.login)
                        {
                            i.password = chose.password;
                            break;
                        }
                    }
                    cout << "Изменения созранены" << endl;
                }


            }

        }

    }

    return 0;
}