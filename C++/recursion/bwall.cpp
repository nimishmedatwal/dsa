#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool bit(int mask, int x) {
     mask = mask & (1 << x);
     return (mask > 0);
}

long long n, k, t, ans, weight[33], cost[33];

int main(){
    //Read t
    cin >> t;
    while (t--) {
          //Read Input
          cin >> n >> k;
          for (int i = 0; i < n; ++i) cin >> weight[i] >> cost[i];
          ans = 0;
          //Bruteforce all bitmasks
          for (int mask = 0; mask < (1 << n); ++mask) {
              long long w = 0, c = 0;
              //check every bitmask
              for (int i = 0; i < n; ++i) 
                  if (bit(mask, i)) {
                     w += weight[i];
                     c += cost[i];
                  }
              if (w <= k && ans < c) ans = c;
          }      
          //output answer
          cout << ans << endl;
    }    
}