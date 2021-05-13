#include <iostream>
using namespace std;

void generateubsets(char * inp,char *out,int i,int j){
	if(inp[i]=='\0'){
		out[j]='\0';
		cout<<out<<endl;
		return;
	}
	// 

	// add the i th charachter to the subset [out]
	out[j]=inp[i];
	generateubsets(inp,out,i+1,j+1);

	// doonot add ith charachter to the subset [out]
	generateubsets(inp,out,i+1,j);

	return;

}


int main(){


	char inp[10];
	cin>>inp;

	char out[10];

	generateubsets(inp,out,0,0);

	return 0;

}