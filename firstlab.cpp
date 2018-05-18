#include<cstdio>
#include<cmath>
#include <iostream>

using namespace std;

int main() {
    cout<<"ПЕРВАЯ ЧАСТЬ Л/Р:"<<endl;
    int a,b,c;
    a=rand();
    b=rand();
    c=rand();
    cout<<"Полученные случайным образом числa:"<<endl;
    cout<<"a="<<a<<endl
        <<"b="<<b<<endl
        <<"c="<<c<<endl;
    cout<<"Медиана данных чисел:"<<endl;
    if((a>b & a<c) || (a<b & a>c))
        cout<<"a="<<a;
    if((b>a & b<c) || (b<a & b>c))
        cout<<"b="<<b;
    if((c>a & c<b) || (c<a & c>b))
        cout<<"c="<<c;
    cout<<"\n\nВТРАЯ ЧАСТЬ Л/Д:"<<endl;
    int n;
    cout<<"Введите значение для возведения в степень:";
    cin>>n;
    cout<<"\nВведите значние степени:";
    int m;
    cin>>m;
    cout<<"\nРезультат:"<<pow(n,m);
    return 0;
}
