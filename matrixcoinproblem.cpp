// given matrix count the path to reach at the bottom of the matrix
// bottom right to top left
#include <iostream>
#include <set>
using namespace std;

int countcoin(int ** matrix,int n,int m,int k ){

	if(n==0 && m==0){
		if (k-matrix[n][m]==0){
			return 1;

		}
		else{
			return 0;
		}
	}
	if(n<0 or m<0){
		return 0;
	}
	// what we can write is that if return k==matrix[n][m] then if this function is true then it will return 1 else it will return 0


	// go roght
	
	int x=countcoin(matrix ,n,m-1,k-matrix[n][m]);

	
	// go down
	int y=countcoin(matrix,n-1,m,k-matrix[n][m]); 
	return x+y;

}


int main(){

	int n,m;
	cin>>n>>m;
	// declaration of 2 d matrix
	int ** matrix =new int *[n];
	for (int i=0;i<n;i++){
		matrix[i]=new int[m];

	}
	for (int i = 0; i < n; ++i)
	{
		for(int j=0;j<m;j++){
			cin>>matrix[i][j];
		}
	}
	int k;
	cin>>k;



	int c= countcoin(matrix,n-1,m-1,k);
	cout<<c;

	return 0;
}