// Akash M. Mishra
// SPOJ LASTDig_The last digit
#include <iostream>
// #include <std/bits.cpp>
using namespace std;
int functionLength (int num){
	int a[4];
	// memset(a,-1,sizeof(a));
	for (int i = 0; i < 4; i++)
	{
		/* code */
		a[i] = -1;
	}
	int lastDig = num%10,counter=0;
	while(true){
		for (int i = 0; i < 4; ++i)
		{
			/* code */
			cout<<a[i]<<",";
		}
		
		bool found = false;
		lastDig = (lastDig*num)%10;
		for (int i = 0; i < 4; i++)
		{			/* code */
			if(a[i] == lastDig)
			{
				counter = i;
				found = true;
				break;
			}
		}

		if(found){
			break;
		}
		else{
			a[counter] = lastDig;
		}
	}
	int actualLength = 0;
	for (int i = 0; i < 4; i++)
	{
		/* code */
		if (a[i] == -1)
		{
			/* code */
			break;
		}
		else{
			actualLength++;
		}
	}
	return actualLength;

}
int main(){
	int testcase;
	cin>>testcase;
	while(testcase>0){
		int a,b,result;
		cin>>a>>b;
		result = functionLength(a);
		cout<<result<<endl;
		// int rem = a%10;
		// if(rem == 5){
		// 	cout<<5<<endl;
		// }
		// else if(rem == 6){
		// 	cout<<6<<endl;
		// }
		// else if(rem == 1){
		// 	cout<<1<<endl;
		// }
		// else if(rem == 2){
		// 	int dev = b%4;

		// 	if(dev == 1){
		// 		cout<<2<<endl;
		// 	}
		// 	else if(dev == 2){
		// 		cout<<4<<endl;
		// 	}
		// 	else if(dev == 3){
		// 		cout<<8<<endl;
		// 	}
		// 	else{
		// 		cout<<6<<endl;
		// 	}
		// }
		// else if(rem == 3){
		// 	int dev = b%4;

		// 	if(dev == 1){
		// 		cout<<3<<endl;
		// 	}
		// 	else if(dev == 2){
		// 		cout<<9<<endl;
		// 	}
		// 	else if(dev == 3){
		// 		cout<<7<<endl;
		// 	}
		// 	else{
		// 		cout<<1<<endl;
		// 	}
		// }
		// else if(rem == 8){
		// 	int dev = b%4;

		// 	if(dev == 1){
		// 		cout<<8<<endl;
		// 	}
		// 	else if(dev == 2){
		// 		cout<<4<<endl;
		// 	}
		// 	else if(dev == 3){
		// 		cout<<2<<endl;
		// 	}
		// 	else{
		// 		cout<<6<<endl;
		// 	}
		// }
		// else if(rem == 7){
		// 	int dev = b%4;

		// 	if(dev == 1){
		// 		cout<<7<<endl;
		// 	}
		// 	else if(dev == 2){
		// 		cout<<9<<endl;
		// 	}
		// 	else if(dev == 3){
		// 		cout<<3<<endl;
		// 	}
		// 	else{
		// 		cout<<1<<endl;
		// 	}
		// }
		// else if(rem == 4){
		// 	int dev = b%2;

		// 	if(dev == 1){
		// 		cout<<4<<endl;
		// 	}
		// 	else{
		// 		cout<<6<<endl;
		// 	}
		// }
		// else if(rem == 9){
		// 	int dev = b%2;

		// 	if(dev == 1){
		// 		cout<<9<<endl;
		// 	}
		// 	else{
		// 		cout<<1<<endl;
		// 	}
		// }
		testcase--;
	}
}