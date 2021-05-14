#include <iostream>
#include <set>
using namespace std;

void generatesumsubset(int * inp,int n,int i ,int sum,set<int>& s){

	if(i==n){
		for(auto it=s.begin();it!=s.end();it++){
			cout<<*it<<" ";
		}
		cout<<endl;
		cout<<sum<<endl;
		return; 
	}
	s.insert(inp[i]);
	generatesumsubset(inp,n,i+1,sum+inp[i],s);

	s.erase(inp[i]);
	generatesumsubset(inp ,n,i+1,sum,s);

	return  ;

}



int main(){
	int n;
	cin>>n;
	int* inp=new int[n];
	// this is dynamic memory
	set<int> s;


	for (int i = 0; i < n; ++i)
	{
		cin>>inp[i];
	}
	generatesumsubset(inp,n,0,0,s);


	return 0;

}