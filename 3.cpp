#include<iostream>
using namespace std;
void main()
{
int y;
cin>>y;
if(y%400==0 && y%100==0 || y%4==0)
cout<<"������"<<endl;
else
cout<<"��������"<<endl;

}