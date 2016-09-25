// c++ Sieve of Atkins implementation
// Akash M. Mishra
// 20/9/16
// The algorithm:

// 1) Create a results list, filled with 2, 3, and 5.
// 2) Create a sieve list with an entry for each positive integer; all entries of this list should initially be marked non prime.
// 3) For each entry number n in the sieve list, with modulo-sixty remainder r:
//   a) If r is 1, 13, 17, 29, 37, 41, 49, or 53, flip the entry for each possible solution to 4x2 + y2 = n.
//   b) If r is 7, 19, 31, or 43, flip the entry for each possible solution to 3x2 + y2 = n. 
//   c) If r is 11, 23, 47, or 59, flip the entry for each possible solution to 3x2 – y2 = n when x > y.
//   d) If r is something else, ignore it completely..
// 4) Start with the lowest number in the sieve list.
// 5) Take the next number in the sieve list still marked prime.
// 6) Include the number in the results list.
// 7) Square the number and mark all multiples of that square as non prime. Note that the multiples that can be factored by 2, 3, or 5 need not be marked, as these will be ignored in the final enumeration of primes.
// 8) Repeat steps four through seven.

// Time complexity O(N/loglog(N))

#include <bits/stdc++.h>
using namespace std;

long long int sieveOfAtkins(long long int limit){
	// 2 qnd 3 are known to be prime
	if(limit > 2) cout<< 2 <<" ";
	if(limit > 3) cout<< 3 <<" ";

	// Intialize the sieve array with false values
	bool sieve[limit];
	for (long long int i = 0; i < limit; i++)
	    sieve[i] = false;


	// Mark sieve[n] as true if one of the following is true
    // a) n = 4*x*x + y*y has odd number of solution ie. there exist odd number of distinct pairs (x,y) that satisfy the equation
    //  and n%12 = 1 or n%12 = 5
    // b) n = 3*x*x + y*y has odd number of solutions and n % 12 = 7
    // c) n = 3*x*x -y*y has odd number of solutions, x>y and n%12 = 11
    for(long long int x = 1; x*x < limit; x++) {
    	for(long long int y = 1; y*y < limit; y++){
    		// Main component of sieve
    		long long int n = 4*x*x + y*y;
    		if( n <= limit && (n%12 == 1 || n%12 == 5))
    			sieve[n] ^=true;

            n = 3*x*x + y*y;
            if( n <= limit && n%12 == 7)
                sieve[n] ^= true;

            n = 3*x*x - y*y;
            if( x > y && n <= limit && n % 12 == 11)
                sieve[n] ^= true;
    	}
    }

    // Mark all multiples of squares as non prime
    for (long long int r = 5; r*r < limit; r++)
    {
        /* code */
        if (sieve[r])
        {
            /* code */
            for (long long int i = r*r; i < limit; i+=r*r)
            {
                /* code */
                sieve[i] = false;
            }
        }


    }

    // int counter = 2;
    // long long int sum=5;
    // print primes using sieve
    for (long long int i = 5; i < limit; i++)
    {
        /* code */
        if (sieve[i])
        {
            /* code */
            cout<< i << " ";
            // sum = sum + i;
            // counter++;
        }
        // if(counter == 10001)
            // cout<<i<<" \n";
    }
    // cout<<"\n"<<sum;

    // sum upto 2 million
    // int sum=5;
    // for(int i=2; i<limit; i++){
    //     if (sieve[i] && i<2000000)
    //     {
    //         /* code */
    //         sum+=i;
    //     }
    // }
    // cout<<"\n"<<sum;
}

// Driver programs
int main(void){
    int limit;
    cin>>limit;
    sieveOfAtkins(limit);
    return 0; 
}