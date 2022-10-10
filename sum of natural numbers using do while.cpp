#include<iostream>
using namespace std;
int main(){
	int n,i=1,sum=0;
	cout<<"enter the number";
	cin>>n;
	do{
		sum+=i;
		i++;
	}
	while(i<=n);
	cout<<sum;
}
