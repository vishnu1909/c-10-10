#include<iostream>
using namespace std;
void roi(){
	int p,r,ra,t;
	cout<<"enter the principle amount"<<endl;
	cin>>p;
	cout<<"enter the time "<<endl;
	cin>>t;
		r=(p*t*12)/100;
		cout<<"the amount for senior citizens is "<<r<<endl;
		ra=(p*t*10)/100;
		cout<<"the amount for others is "<<ra<<endl;
};
int main(){
	roi();
	return 0;
}
