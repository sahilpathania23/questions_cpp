#include <iostream>
using namespace std;

int countcoinchange(int n,int * coins,int m,int i){
	if (n==0){
		// i have found a change
		return 1;
	}if (n<0){
		return 0;

	}
	if(n>0 && i==m){
		return 0;

	}
	// i am standing at the ith position
	int x=countcoinchange(n-coins[i],coins ,m,i);

	int y=countcoinchange(n,coins,m,i+1);

	return x+y;
}



int main(){
	// read amount from the user
	int n;
	cin>>n;
	int m;
	cin>>m;

	int * coins=new int [m];
	for (int i = 0; i < m; ++i)
	{
		cin>>coins[i];
	}

	cout<<countcoinchange(n,coins,m,0);
	return 0;
}