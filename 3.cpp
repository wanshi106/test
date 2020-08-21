#include<iostream>
using namespace std;
void main()
{
int y;
cin>>y;
if(y%400==0 && y%100==0 || y%4==0)
cout<<"是闰年"<<endl;
else
cout<<"不是闰年"<<endl;

}