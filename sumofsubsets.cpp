#include <iostream>
using namespace std;

void generatesumsubset(int * inp,int n,int i ,int sum){

	if(i==n){
		cout<<sum<<endl;
		return; 
	}

	generatesumsubset(inp,n,i+1,sum+inp[i]);

	generatesumsubset(inp ,n,i+1,sum);

	return ;

}



int main(){
	int n;
	cin>>n;
	int* inp=new int[n];
	// this is dynamic memory


	for (int i = 0; i < n; ++i)
	{
		cin>>inp[i];
	}
	generatesumsubset(inp,n,0,0);


	return 0;

}