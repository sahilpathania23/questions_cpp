
//find wether the given integer is the power of 3 or not 
// 
#include <iostream>
using namespace std;
int main(){
	int b;
	cin>>b;
	float floatvalue=log(b)/log(3);
	if (floatvalue==int(floatvalue)){
		cout<<b<<" is the power of 3;"<<endl;


	}else{
		cout<<b<<" is not the power of 3";
	}

	return 0;

}