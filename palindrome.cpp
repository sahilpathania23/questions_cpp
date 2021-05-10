// check weather the binary repesentation of a number is palindrome or not
#include <iostream>
using namespace std;

bool iskthbitset(unsigned int x,unsigned int k){
	return x & 1<<k;
	// this 1<<k means left shift 1 k times means the value of k is the value for left like 31 and for right is 0 so shift it k times 
	// and this x is the given binary representation which when multiply with k if it give 1 means it is set or true else it will be 0 means false

}

// this is palindrome function

bool ispalindrome(unsigned int x){
	unsigned int left =sizeof(unsigned int)* 8 - 1; //this will return me 31
	unsigned int right =0;

	while(left>right){
		if (iskthbitset(x,left)!=iskthbitset(x,right)){
			return false;
			// here when i get he value of 0
		}
		left--;
		right++;
	}
	return true;
}

int main(){
	unsigned int x=1<<31;  
	cout<<ispalindrome(x)<<endl;
	// yes i am getting 0 because the number is not palindrome


	//now  if i add 1 to the x
	x+=1; //2^31 +1   10000......1
	cout<<ispalindrome(x);
	// i will get 1 means it is a palindrome 



	return 0;
}
