// complete the ap series
#include <iostream>
// #include <cstdint>
using namespace std;
int main(){
	int testCase;
	cin>>testCase;
	while(testCase>0){
		long long int p, q, r;
		cin>>p>>q>>r;
		long long int noTerms;
		noTerms = 2*r/(p+q);
		cout<<noTerms<<endl;
		for (int i = 0; i <noTerms; i++)
		{
			/* code */
			long long int firstTerm, difference;
			difference = ((q-p)/(((2*r)/(p+q)) - 5));
			firstTerm = p-2*((q-p)/(((2*r)/(p+q)) - 5));
			cout<<firstTerm + difference*i<<" ";

		}
		cout<<endl;
		testCase--;
	}
	return 0;
}