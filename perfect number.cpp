#include<iostream>
using namespace std;
int main(){
	int n,i,s=0;
	cout<<"enter the number";
	cin>>n;
	for(i=1;i<n;i++){
		if(n%i==0)
			s=s+i;
	}
	if(n==s){
		cout<<"it is perfect number";
	}
	else{
		cout<<"it is not a perfect number";
	}
}
