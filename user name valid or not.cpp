#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char a[100],b[100],v;
	cout<<"enter the username "<<endl;
	cin>>a;
	cout<<"re enter the username";
	cin>>b;
	v=strcmp(a,b);
	if(v==0)
	{
		cout<<"valid";
	}
	else
	{
		cout<<"invalid";
	}
}
