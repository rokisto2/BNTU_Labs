#define ll long long
#define str string
#include <bits/stdc++.h>

using namespace std;

struct Date {
    ll day;
    ll month;
    ll year;
};

struct Group {
    ll number;
    str surname;
    Date admission_date;
};

int main() {
    Group group1 = {1, "Ivanov", {10, 9, 2021}};
    Group group2 = {2, "Petrov", {15, 9, 2021}};
    cout << "Group " << group1.number << ": " << group1.surname << ", admission date: "
              << group1.admission_date.day << "." << group1.admission_date.month << "." << group1.admission_date.year << endl;
    cout << "Group " << group2.number << ": " << group2.surname << ", admission date: "
              << group2.admission_date.day << "." << group2.admission_date.month << "." << group2.admission_date.year << endl;
    return 0;
}