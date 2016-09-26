// Problem : minimum steps to 1
// Problem Statement: On a positive integer, you can perform any one of the following 3 steps.
// 1.) Subtract 1 from it. ( n = n - 1 )  , 2.) If its divisible by 2, divide by 
// 2. ( if n % 2 == 0 , then n = n / 2  )  , 3.) If its divisible by 3, divide by 3. ( if n % 3 == 0 , then n = n / 3  ).
// Now the question is, given a positive integer n, find the minimum number of steps that takes n to 1
// DP
// Akash M. Mishra
// Bottom-up approach
// F(1) = 0; F(4) = 2; F(7) = 3 
// F(n) = 1 + min{ F(n-1), F(n/2), F(n/3) } if( n > 1) else 0 ie. F(1) = 0 
#include <iostream>
using namespace std;
int min(int x, int y){
	return x<y?x:y;
}
int getMinSteps(int n){
	int dp[n+1],i;
	dp[1] = 0; // trivial case
	for (int i = 2; i <= n; i++)
	{
		/* code */
		dp[i] = 1 + dp[i-1];
		if (i%2==0)
		{
			/* code */
			dp[i] = min(dp[i], 1 + dp[i/2]);
		}
		if (i%3 == 0)
		{
			/* code */
			dp[i] = min(dp[i], 1 + dp[i/3]);
		}
	}
	return dp[n];
}
int main()
{
	/* code */
	int testCases;
	cin>>testCases;
	while(testCases){
		int num;
		cin>>num;
		cout<<getMinSteps(num)<<endl;
		testCases--;
	}
	return 0;
}