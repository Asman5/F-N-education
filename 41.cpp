#include <iostream>

using namespace std;

long long gcd(long long n, long long m){
    while (n > 0 && m > 0)
    {
        if(n > m){
            n = n % m;
        }
        else  m = m % n;
    }
    //32 24 ------ n = 8 m = 0
    //24 32 ------ n = 0 m = 8;
    // if(n == 0){
    //     return m;
    // }
    // else(m == 0){
    //     return n;
    // }
    return m + n;


    
}

int main(){
    long long n, m; cin >> n >> m;
    cout << gcd(n, m);
    

    return 0;
}