// program to calculate the factorial of large numbers
// Akash M. Mishra
#include <iostream>
using namespace std;
int main(){
	int testCases;
	int a[200]; // array to save the factorial 
	int n, i, j, temp = 0, m, x;  // m to save the number of digits in array and temp to save the carry
	cin>>testCases;
	while(testCases--){

		cin>>n;
		a[0] = 1; // initializes array with only 1 digit, the digit 1
		m = 1;   // initializes digit counter
		for ( i = 1; i <= n; i++)
		{
			/* code */
			for (j = 0; j < m; j++)
			{
				/* code */
				x = a[j]*i + temp; // x contains digit by digit product
				a[j] = x%10;   // contains the digit to store in j
				temp = x/10; // contains the carry value that will be stored in later indexes
			}
			while(temp>0) //while loop that will store the carry value in array 
			{
				a[m] = temp%10;
				temp = temp/10;
				m++; //increment counter
			} 
		}
		for (int i = m-1; i>=0; i--)
		{
			/* code */
			cout<<a[i];
		}
		cout<<endl;
	}
	return 0;
}