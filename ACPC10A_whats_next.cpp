// Whether a seq is an AP or Gp and the next term of the sequence
#include <iostream>
using namespace std;
int main(){
	bool testcase = true;
	// cin>>testcase;
	while(testcase){
		int a, b, c, next;
		cin>>a>>b>>c;
		if(a==0 && b==0 && c==0){
			testcase = false;
			break;
		}
		else if(2*b - a - c == 0){
			next = c + b - a;
			cout<<"AP "<<next<<endl;
		}
		else {
			next = c*b/a;
			cout<<"GP "<<next<<endl;
		}
		// testcase--;
	}
	return 0;
}
