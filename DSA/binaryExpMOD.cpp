#include <bits/stdc++.h>
using namespace std;

//for calculating a^b  where b is very large number using binary exponentional...
// Here power(a,b) won't work coz pow() returns double which upon doing % with mod may give errors or TLE.
#define mod 1000000007
int binExp(int a, int b){
    int ans = 1;
    while(b>0){
        if(b&1){
            ans=(ans*a) % mod;
        }
        a=(a*a)%mod;
        b>>=1;
    }
    return ans;
}


// Count No. of Bits set in an integer's binary representation. 
// {
int countBinarySetBit(int n){
    int count=0;
    while(n){
        if(n&1){
            count++;
        }
        n>>=1;
    }
    return count;
}

// 2. Brian Kernighan’s Algorithm: 
// Subtracting 1 from a decimal number flips all the bits after the rightmost set bit(which is 1) 
// including the rightmost set bit. 
int countBinarySetBit2(int n){
    //Brian Kernighan’s Algorithm
    int count=0;
    while(n){
        n&=(n-1);
        count++;
    }
    return count;
}
// }




























// Main function.

int main(){
    int n=7;
    cout<< countBinarySetBit2(n) <<endl;
    return 0;
}