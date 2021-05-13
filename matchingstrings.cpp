#include <iostream>
using namespace std;
int main(){
	string str;
	cin>>str;
	string txt;
	cin>>txt;

	int n=str.length();
	int m=txt.length();

	int freq=0;


	for (int j=0;j<n-m;j++){
		int i;
		for (int i = 0; i < m; i++)
		{
			if(str[j+i]!=txt[i]){
				break;
			}
		}
		if(i==m){
			// pattern found
			freq++;
		}
	}
	cout<<freq;

	return 0;

}