// will it ever stop from SPOJ
// Akash M. Mishra
#include <iostream>
using namespace std;
int main(){
	long long int num;
	cin>>num;
	while(num > 1){
		// while n > 1
        // if (num % 2 ==0)
        //     num=num/2;
        // else
        //     num=3*num+3;

        // Help him finding it out !
		if(num%3 == 0){
			cout<<"NIE"<<endl;
			break;
		}
		
	}
	if(num == 1){
		cout<<"TAK"<<endl;
	}
	return 0;
}