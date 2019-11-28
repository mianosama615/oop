#include <iostream>
#include<string>
using namespace std;


    class hbl{
    private:
        string account,name,bank;
        int added,witdraw;

    public:
        hbl(string m,string f,string c){
            account=m;
            name=f;
            bank=c;
            }
        
        void getpart(){
            cout<<"account_type:"<<account<<endl<<"Account_name:"<<name<<endl<<"HBL:"<<bank<<endl<<"Added_amount:"<<"5000"<<endl<<"witdrwa_amount:"<<"1000"<<endl;
            }
        void setpart(string a){
            account=a;
            }
        void display(){
            getpart();
        }
            };
    
int main()
{
   hbl a("current","osama","HBL");
    a.display();
    //a.getpart();
    return 0;
}
