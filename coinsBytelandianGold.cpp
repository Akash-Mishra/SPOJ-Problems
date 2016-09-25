// change a bytelandian gold coins into $
// if coin < 2 return 2
// if coin < 3 return 3
// Akash M. Mishra
#include <iostream>
using namespace std;
long long int maxCoins(long long int num){
	long long int sum = 0;
	if(num <= 3 ){
		sum = num;
		// return num;
	}
	else{
		sum += maxCoins(num/2) + maxCoins(num/3) + maxCoins(num/4);
	}
	return sum;
}
int main()
{
	/* code */
	int testCase;
	cin>>testCase;
	while(testCase>0){
		long long int number=0;
		cin>>number;
		int result = 0;
		result = maxCoins(number);
		cout<<result<<endl;
		testCase--;
	}
	return 0;
}