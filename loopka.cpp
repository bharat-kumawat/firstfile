#include<iostream>
using namespace std;
int main(){
	int sum=0;
	int pro=1;
	int n,r;
	cin>>n;
	for(int i=1;i<=3;i++){
		r=n%10;
		sum=sum+r;
		pro=pro*r;
		n=n/10;
	}
	
	cout<<sum<<endl;
	cout<<pro<<endl;
	int def=pro-sum;
	cout<<def;
}
