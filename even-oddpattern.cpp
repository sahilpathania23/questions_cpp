#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;






int main(){
	int n;
	cin>>n;
	int * arr=new int [n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];

	}
	sort(arr,arr+n);
	// this above is the sorting used to sort the array so we sort the array arr with arr+n means to count the iteration
	vector <int> even;
	vector <int> odd;
	for (int i = 0; i < n; ++i)
	{
		if (arr[i]%2==0){
			even.push_back(arr[i]);
		}else{
			odd.push_back(arr[i]);
		}
	}
	bool flag=false;
	if(arr[0]%2==0){
		flag=true;

	}else{

	}

	int i=0;
	int j=0;
	for (int k = 0; k< n; ++k)
	{
		if(flag){
			arr[k]=even[i];
			i++;
			flag=false;

		}
		else{
			arr[k]=odd[j];
			j++;
			flag=true;

		}
	}
	for(int k=0;k<n;k++){
		cout<<arr[k]<<" ";

	}
	return 0;

}