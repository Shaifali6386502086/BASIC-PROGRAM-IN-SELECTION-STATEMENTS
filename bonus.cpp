#include <iostream>
using namespace std;
int main()
{
float s,y,bonus;
cout<<"enter your years of service and salary"<<endl;
cin>>y>>s;
bonus=y>5?(0.05*s):0;
cout<<"bonus amount is:"<<endl<<bonus;
return 0;

}