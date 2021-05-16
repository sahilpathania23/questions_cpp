#include <iostream>
using namespace std;

void ndigitnumbergenerator(int n,char * out,int j,int x){
	f (n==0){
		out[j]='\0';
		cout<<out<<endl;
		return ;

	}
	for (int i = x; i < =9; ++i)
	{
		out[j]=i+'\0';
		ndigitnumbergenerator(n-1,out,j+!,i+1);
	}

}

int main(){
	int n;
	cin>>n;
	char out[n];





	ndigitnumbergenerator(n,out,0,0);
	return 0;
}