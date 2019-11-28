#include<iostream>
#include<string>
#include"3.15(1).cpp"
using namespace std;
main(){
	
	heartrate hr("muhammad","osama",14,8,2001);
	hr.print();
	cout<<"\n";
	hr.setfirstname("muhammad");
	hr.getfirstname();
}
