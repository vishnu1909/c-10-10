#include<iostream>
using namespace std;
int main(){
	int n,i=1,sum=0;
	cout<<"enter the number";
	cin>>n;
	while(i<=n){
		sum+=i;
		i++;
	}
	cout<<sum;
}
