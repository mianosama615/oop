#include<iostream>
using namespace std;
class Bank{
  
private:
    int a,b,c;
public:
    
    deposit(){
    cout<<"Enter the Deposite Amount:";
    cin>>a;
    }
    witdraw(){
        cout<<"Enter the Withdraw Account:";
        cin>>b;
    }
    condition(){
    if(b>a)
    {
        cout<<">Error"<<endl<<endl;
        cout<<"Withdrawal amount exceeded the limit"<<endl<<endl;
        cout<<"You Enter the Correct Amount"<<endl<<endl;
        cout<<"Your Remaining Amount is:"<<a<<endl<<endl<<endl;
    }
    else
        c=a-b;
       
        cout<<"Thanks for using Our Bank"<<endl<<endl;
        }
};
int main()
{
    cout<<"Welcome the Student Bank!"<<endl<<endl;
    Bank a;
    a.deposit();
    a.witdraw();
    a.condition();
    
    return 0;
}
