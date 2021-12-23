#include <iostream>
using namespace std;
int main()
{
int net_amount,pur;
cout<<"enter the purcase amount"<<endl;
cin>>pur;
if(pur>1000)
{net_amount=pur-100;
    cout<<"net amount after detecting discount"<<endl<<net_amount<<endl;
}
else{
    cout<<"net amount is"<<pur<<endl;
}
    return 0;
}