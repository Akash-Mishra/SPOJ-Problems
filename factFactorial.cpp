// No of zeros at the end of a factorial
// Akash M. Mishra
#include <iostream>
using namespace std;
int main(){
	int testcase;
	cin>>testcase;
	while(testcase>0){
		int num = 0, div=5, result = 0;
		cin>>num;
		if(num<5){
			result = 0;
			// cout<<
		}
		else {
		while(div<=num){
			result += num/div;
			div *= 5;
		} 
	}
		cout<<result<<endl;
		testcase--;
	}
	return 0;
}