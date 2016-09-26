// HAngover problem on SPOJ
// Akash M. Mishra
#include <iostream>
using namespace std;
float hangover(int n){
	float result;
	if(n == 1){
		result = 1;
	}
	else
	{
		do
		{
		   result = ((1)/(n + 1)) + hangover(n-1)
	    } while(result >= 0.01 && result <= 5.2)
	}
	return result;
}
int main(){
	float test, input;
	bool testCase = true;
	while(testCase){
		cin>>input;
		if (input == 0)
		{
			testCase = false;
		}
		test = input;
		
	}
}