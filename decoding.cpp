#include <iostream>
using namespace std;

void generatedecoding(char * inp,char *out,int i,int j){

	// have i reached the base case means have i reached the end of teh inp character
	if(inp[i]=='\0'){
		// terminate and print output
		out[j]=='\0';
		cout<<out<<endl;
		return ;

	}



	//  i am standing on the ith digit i have to make a decision weather 

	// decode the only ith digit 

	// to ectract the ith digit 

	int digit=inp[i]-'0';

	// maping for the decoding part
	char ch=digit+'A'-1;  //this is same like 1+65-1 "a"
						  // or it can be 2+65-1 which will return us "b"


	out[j]=ch;

	// recursive part
	generatedecoding(inp,out,i+1,j+1);


	// or to form a number using ith and i+1 digit and decode it
	if(inp[i+1]!='\0'){
	// extract he ith+1 digit 
	int next_digit=inp[i+1]-'0';

	// form a number using e ith and i+1 the digit
	int n=digit *10 +next_digit;
	if(n<=26){

	// map the nnuber to its character 
	ch= n+'A'-1;

	// update the jth index of out
	out[j]=ch;

	generatedecoding(inp,out,i+2,j+1);
}
}


}
int main(){
	char inp[100];
	cin>>inp;

	char out[100];
	generatedecoding(inp,out,0,0);

	return 0;

}