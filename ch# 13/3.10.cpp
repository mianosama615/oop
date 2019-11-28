#include<iostream>
#include<string>
using namespace std;

class invoice{
  
public:
    string part,description;
    int quantity,price;
    double VAT,Discount;
    
public:

    
    invoice(string b,string D,int Q,int P,double f,double x){
        
        part=b;
        description=D;
        quantity=Q;
        price=P;
        VAT=f;
        Discount=x;
        
        cout<<"|numer|\t"<<"|Description|\t"<<"|items|\t"<<"|Price|\t"<<"|VAT|\t"<<"|Discount|\t"<<endl;
    }
    public:
    getparts ()
    {
        cout<<"\t"<<part<< "\t\t\t" <<description<< "\t\t\t" <<quantity<<"\t\t\t\t"<< price<<"\t\t"<<VAT<<"\t\t\t"<<Discount<<"\t"<<endl<<endl;
    }
    setpart(string a){
        
        part = a;
    }
    };

int main()
{
  
    invoice a("Bulb","Light",5,550,0.2,0);

    a.getparts();
    return 0;
}
