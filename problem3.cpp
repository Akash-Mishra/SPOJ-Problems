// PRIME1 - Prime Generator
// #number-theory
// Peter wants to generate some prime numbers for his cryptosystem. Help him! 
// Your task is to generate all prime numbers between two given numbers!

// Input
// The input begins with the number t of test cases in a single line (t<=10). 
// In each of the next t lines there are two numbers m and n (1 <= m <= n <= 1000000000, n-m<=100000) separated by a space.

// Output
// For every test case print all prime numbers p such that m <= p <= n, 
// one number per line, test cases separated by an empty line.

// Example
// Input:
// 2
// 1 10
// 3 5

// Output:
// 2
// 3
// 5
// 7

// 3
// 5
// Warning: large Input/Output data, be careful with certain languages 
// (though most should be OK if the algorithm is well designed)
// Information
// After cluster change, please consider PRINT as a more challenging problem.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void sieveOfEratosthenes(int n){
	bool prime[n+1];
	memset(prime, true, sizeof(prime));

	for(int p = 2; p*p < n ; p++){
		// if prime[p] is not changed, then it is a prime
		if(prime[p] == true){
			// update all multiples of p
			for(int i = p*2;i<=n;i=i+p)
				prime[i] = false;
		}
	}
	// print all the primes
	for(int i =2 ;i<=n;i++){
		if(prime[i] == true)
			cout<<i<<endl;
	}
}

int main(){
	int n;
	cin>>n;
	sieveOfEratosthenes(n);
}