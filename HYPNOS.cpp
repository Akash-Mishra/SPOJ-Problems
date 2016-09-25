// break and check whether a number is happy
#include <iostream>
using namespace std;
long long int breakThatDown(long long int test){
	int sum = 0;
	while(test>0){
		sum += (test%10)*(test%10);
		test = test/10;
	}
	return sum;
}
int main(){
	long long int num, counter = 0;
	bool test = true;
	while(test){
		num = breakThatDown(num);
		counter++;
		if(num == 1){
			test = false;
		}
	}
	cout<<counter<<
}