// Feynman SPOJ
// AKASH M. Mishra
#include <iostream>
using namespace std;
long long int feynmansPuzzle(long long int num){
	long long int result = 0;
	if(num == 1)
		result = 1;
	else 
		result = num*num + feynmansPuzzle(num-1);
	return result;
}
int main(){
	bool testCase = true;
	long long int puzz;
	while(testCase){
		cin>>puzz;
		if (puzz == 0)
		{
			testCase = false;
			break;
		}
		cout<<feynmansPuzzle(puzz)<<endl;
	}
	return 0;
}