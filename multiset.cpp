#include <iostream>
#include <set>

using namespace std;

void generatesumsubset(int * inp,int n,int i ,int sum,multiset<int>& s){

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

	s.erase(s.lower_bound(inp[i]));
	// this is what is importatnat to delete the first element of the array so that repeating integer can be used
	// in case of set we are going to delete all the index value for example 1 1 1 then using this we will going to delete the 1 in the array 
	generatesumsubset(inp ,n,i+1,sum,s);

	return  ;

}



int main(){
	int n;
	cin>>n;
	int* inp=new int[n];
	// this is dynamic memory
	multiset<int> s;


	for (int i = 0; i < n; ++i)
	{
		cin>>inp[i];
	}
	generatesumsubset(inp,n,0,0,s);


	return 0;

}