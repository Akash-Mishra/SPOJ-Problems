// Counting triangles
// Akash M. Mishra
#include <iostream>
using namespace std;
long long int countTri(long long int num){
	long long int result;
	if (num == 1)
	{
		/* code */
		result = 1;
	}
	else
	result = 4*(num-1) + countTri(num-1);
return result;



}
int main(){
	int testcases;
	cin>>testcases;
	while(testcases){
		long long int input;
		cin>>input;
		cout<<countTri(input)<<endl;
		testcases--;
	}
	return 0;
}