#include <iostream>
#include <string>
using namespace std;
int main(){
	string str;
	cin>>str;

	int n=str.length();
	int max_len=0;
	int left =0;
	int right=0;
	for (int i = 0; i < n; ++i)
	{
		int visited[256];
		for (int k = 0; k < 256; ++k)
		{
			visited[k]=0;
		}
		for (int j=i;j<n;j++){
			if (visited[str[j]]){
				break;
			}
			else{
				int length=j-i+1;
				if (length>max_len){
					max_len=length;
					left=i;
					right=j;
				}
				visited[str[j]]=1;

			}
		}
	}
	cout<<max_len<<endl;
	cout<<"sahil";

	return 0;
}