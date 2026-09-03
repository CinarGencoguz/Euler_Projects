#include <iostream>
using namespace std;

typedef long long int  ll;
typedef unsigned long long int ull;
ll mod,result,coefficient,sub,tenpow,invmod,num1;
ull fibo[91],digit,remain;

ll modpow(ll base, ull pow) // power simplify function
{
   ll res = 1;
   base %= mod; 
   while (pow > 0) 
   {
      if (pow % 2 == 1)          
      res = (res * base) % mod; 
      base = (base * base) % mod;   
      pow = pow / 2;              
   }
   return res;
}

//formula if  remain is a and digit is d then formula is ((a^2+3a+12)/2)*10^d - ((d%mod * 9) + 6 + a)%mod

// addition information if we want to apply modulus something divided we must find inverse modulus and multiply with numerator 
// and apply modulus .
// inverse modulus is which smallest x does give result 1 when we are multiply denominator
int main() 
{
   fibo[0] = 0;  fibo[1] = 1;   result = 0; 
   mod = 1000000007;  // mod 
   invmod = (mod + 1) / 2; //inverse modulus
   for (int i = 2; i <= 90; ++i)   fibo[i] = fibo[i - 1] + fibo[i - 2]; // fibonacci sequence
   for (int i = 2; i <= 90; ++i) 
   {
      digit= fibo[i]/9;  //how many 9 in number
      remain = fibo[i]%9;  // what is the starting digit if it is equal 0 ,starting digit will be 9
      tenpow = modpow(10, digit); 
      coefficient = ((remain * remain) + 3 * remain + 12);
      sub = (((digit % mod) * 9) % mod + remain + 6) % mod;  
      num1 = (((coefficient * invmod) % mod)*tenpow)%mod-sub;
      cout << (num1+mod)%mod << "      "<< i  <<endl;
      result = (result+num1+mod)%mod;
    }
    cout << result<< endl;
}