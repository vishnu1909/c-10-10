#include<iostream>
using namespace std;
void getperson(){
	int n;
	cout<<"enter the age";
	cin>>n;
	if(n>=18)
	{
		cout<<"eligible to vote"<<endl;
	}
	else
	{
	cout<<"not eligible to vote , wait for "<<n-18<<"years";
}
	
};
int main(){
	getperson();
	return 0;
}

