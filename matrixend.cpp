// given matrix count the path to reach at the bottom of the matrix
#include <iostream>
#include <set>
using namespace std;

int count(int i,int j,int n,int m){

	if(i==n-1 && j==m-1){
		return 1;

	}
	if(i==n or j==m){
		return 0;
	}


	// go roght
	int x=count(i,j+1,n,m);


	// go down
	int y=count(i+1,j,n,m);
	return x+y;

}


int main(){

	int n,m;
	cin>>n>>m;
	int c= count(0,0,n,m);
	cout<<c;

	return 0;
}