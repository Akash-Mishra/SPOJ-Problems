// Euler Toitent function
// Akash M. Mishra
#include <iostream>
using namespace std;
long long int ETF(long long int num){
	long long int result=0;
	if (num == 1)
	{
		result = 1;
	}
	for(long long int i = 1; i< num; i++){
		long long int B = i, A = num;
		while(B!=0){
			int temp = B;
			B = A%temp;
			A = temp;
		}
		if(A == 1)
			result++;
	}
	return result;
}
int main(){
	long long int testCase, num;
	cin>>testCase;
	while(testCase>0){
		cin>>num;
		cout<<ETF(num)<<endl;
		testCase--;
	}
	return 0;
}