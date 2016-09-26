// Given an array of coins with different denomination, find a sum using minimum numbers of coins
// Akash M. Mishra

#include <iostream>
using namespace std;
#define MAX 999;
int main(){
	int coins[10];
	int noOfDeno;
	cin>>noOfDeno;
	for (int i = 0; i < noOfDeno; i++)
	{
		/* code */
		cin>>coins[i];
	}
	int sum;
	cin>>sum;
	int min[100];
	for (int i = 0; i < sum; i++)
	{
		/* code */
		min[i] = MAX;
	}
	min[0] = 0;
	cout<<"DP Starts"<<endl;
	for (int i = 1; i < sum; i++)
	{
		/* code */
		for (int j = 0; j < noOfDeno; j++)
		{
			/* code */
			// int temp = coins[j];
			int temp1 =  i - coins[j];
			if (coins[j]<=i && (min[temp1] + 1 <= min[i]))
			{
				/* code */

				min[i] = min[temp1] + 1;
				// cout<<i<<endl;
				// cout<<min[i]<<endl;
			}
		}
	}
	int temp3 = sum-1;
	cout<<min[temp3]<<endl;
	// cout<<min[sum-1]<<endl;
	// for (int i = 0; i < sum; i++)
	// {
	// 	/* code */
	// 	cout<<min[i]<<endl;
	// }
}