// Problem : minimum steps to 1
// Problem Statement: On a positive integer, you can perform any one of the following 3 steps.
// 1.) Subtract 1 from it. ( n = n - 1 )  , 2.) If its divisible by 2, divide by 
// 2. ( if n % 2 == 0 , then n = n / 2  )  , 3.) If its divisible by 3, divide by 3. ( if n % 3 == 0 , then n = n / 3  ).
// Now the question is, given a positive integer n, find the minimum number of steps that takes n to 1
// DP
// Akash M. Mishra
// Top-down approach Memoization
// F(1) = 0; F(4) = 2; F(7) = 3 
// F(n) = 1 + min{ F(n-1), F(n/2), F(n/3) } if( n > 1) else 0 ie. F(1) = 0 

#include <iostream>
using namespace std;
// int memo[n+1]; // we will initialize the elements to -1 (-1 means, not solved it yet)
int min(int x, int y){
	if (x<y)
	{
		return x;
	}
	else
		return y;
}
int getMinSteps( int n){
	int memo[n+1]; // we will initialize the elements to -1 (-1 means, not solved it yet)
	for (int i = 0; i < n+1 ; i++)
	{
		/* code */
		memo[i] = -1;
	}

	if ( n == 1)
	{
		return 0;
	}
	if (memo[n] != -1) // we have solved it already
	{
		return memo[n];
	}
	int r = 1 + getMinSteps(n-1); // '-1' step. r will contain the optimum answer finally
	if(n%2 == 0) r = min(r, 1+ getMinSteps(n/2)); // '/2' step
	if(n%3 == 0) r = min(r, 1+ getMinSteps(n/3)); // '/3' step
	memo[n] = r; // save the result. if you forget this step then it is same as recursion 
	return r;
}
int main(){
	int testCase;
	cin>>testCase;
	while(testCase){
		int number;
		cin>>number;
		cout<<getMinSteps(number)<<endl;
		testCase--;
	}
	return 0;
}