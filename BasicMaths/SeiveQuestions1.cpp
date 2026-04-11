#include<iostream>
using namespace std;
vector<bool> Sieve1(int n)
{
    // create a sieve array telling isPrime till 'n'
    vector<bool> sieve(n + 1, true);
    sieve[0] = sieve[1] = false;
    // without optimaization in loop 
    for (int i = 2; i <= n; i++)
    
    {
        if (sieve[i] == true)
        {
            // means, sieve[i] is Prime and mark its multiples
            //  as non-prime.
            int j = i * 2; // without optimization
            
            while (j <= n)
            {
                sieve[j] = false;
                j += i;
            }
        }
    }
    return sieve;
}
vector<bool> Sieve(int n)
{
    // create a sieve array telling isPrime till 'n'
    vector<bool> sieve(n + 1, true);
    sieve[0] = sieve[1] = false;

    /*for (int i = 2; i <= n; i++)*/
    for (int i = 2; i * i <= n; i++) // Optimisation 2: (Outer loop):
                                     // if i becomes > sqrt(N), then the
                                     // inner loop does not work.
    {
        if (sieve[i] == true)
        {
            // means, sieve[i] is Prime and mark its multiples
            //  as non-prime.
            /*int j = i * 2;*/
            int j = i * i; // Optimisation 1 (inner loop):
                           // first unmarked number would be i*i
                           // as, other have been marked by 2 to (i - 1).
            while (j <= n)
            {
                sieve[j] = false;
                j += i;
            }
        }
    }
    return sieve;
}
int main(){
    int n = 11;
    vector<bool> sieve = Sieve(n);
    // print all primes
    for (int i = 0; i <= n; ++i)
    {
        if (sieve[i])
            cout << i << " ";
    }
    cout << endl;
    return 0;
}