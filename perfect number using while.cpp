#include<iostream>
using namespace std;
int main(){
	int n,s=0,i=1;
	cout<<"enter the number";
	cin>>n;
	while(i<n){
		if(n%i==0)
			s=s+i;
			i++;
	}
	if(n==s){
		cout<<"it is perfect number";
	}
	else{
		cout<<"it is not a perfect number";
	}
}
