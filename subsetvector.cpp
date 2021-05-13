#include <iostream>
#include <vector>
#include <set>
using namespace std;

void generateubsets(char * inp,char *out,int i,int j,vector<string> & v){
	if(inp[i]=='\0'){
		out[j]='\0';
		v.push_back(out);
		
		// cout<<out<<endl;
		return;
	}
	// 

	// add the i th charachter to the subset [out]
	out[j]=inp[i];
	generateubsets(inp,out,i+1,j+1,v);

	// doonot add ith charachter to the subset [out]
	generateubsets(inp,out,i+1,j,v);

	return;

}


int main(){


	char inp[10];
	cin>>inp;

	char out[10];
	vector<string> v;

	generateubsets(inp,out,0,0,v);
	sort(v.begin(),v.end());

	// now this is known as for each loop this work as if i have v as array then it will take first string to the str and print out and then it will take next string and 
	// goes on
	for(string str:v){
		cout<<str<<endl;
	}

	return 0;

}