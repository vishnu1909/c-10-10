#include<iostream>
using namespace std;
int main(){
	int n,tmp,r,a=0;
	cout<<"enter the number";
	cin>>n;
	tmp=n;
	while(n!=0){
		r=n%10;
		a=a*10+r;
		n=n/10;
	}
	n=tmp;
	if(a==n)
	{
		cout<<"palindrome";
	}
	else
	{
		cout<<"not a palindrome";
		
	}
}
