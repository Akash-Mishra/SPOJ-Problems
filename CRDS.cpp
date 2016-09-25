// Cards problem on SPOJ
// Akash M. Mishra
#include <iostream>
using namespace std;
long long int cardsReq(long long int num){
	long long int result;
	if(num == 1)
		result = 2;
	else
		result = 2*num + num-1 + cardsReq(num-1);

	return result;
}
int main()
{
	int testCase;
	cin>>testCase;
	while(testCase>0){
		long long int input, output;
		cin>>input;
		output = (cardsReq(input))%1000007;
		cout<<output<<endl;
		testCase--;
	}
	return 0;
}