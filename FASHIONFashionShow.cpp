#include <iostream>
// #include <cstream>
using namespace std;
int main(){
	int testcase;
	int prod = 0;
	int him[1000], her[1000];
	cin>>testcase;
	while(testcase>0){
		int number;
		cin>>number;
		// int numbers[1001];
 //        for(int p = 0; p <= 1000; p++)
 //             {
	// 	him[p]=0;
	// 	her[p]=0;
	// }
		for(int i =0 ;i<number; i++){
			cin>>him[i];
		}
		for(int j=0;j<number; j++){
			cin>>her[j];
		}
		prod=0;
		for (int k = 0; k < number; k++)
		{
			/* code */
			// cout<<him[k]<<endl;
			// cout<<her[k]<<endl;
			// cout<<him[k]<<endl;
			// cout<<her[k]<<endl;
			// cout<<prod<<endl;
			prod += him[k]*her[k];
			him[k]=0;
			her[k]=0;
		}
		cout<<prod<<endl;
		prod = 0;
		testcase--;
	}
}