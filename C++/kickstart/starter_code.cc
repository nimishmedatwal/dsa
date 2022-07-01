#include <bits/stdc++.h>

using namespace std;

int getMaximumBalancedSubstrings(int L, int R)
{
  // TODO: Complete this function to compute the maximum possible number of non-empty substrings that form a balanced parenthesis.

  int count = 0;
  int MIN = min(L, R);
  // cout<<MIN<<endl;
  for (int i = 0; i <= MIN; i++)
  {

    count = count + i;
  }

  return count;
}

int main()
{
  int T;
  // Get number of test cases
  cin >> T;
  for (int tc = 1; tc <= T; tc++)
  {
    int L, R;
    cin >> L >> R;
    cout << "Case #" << tc << ": " << getMaximumBalancedSubstrings(L, R)
         << endl;
  }
  return 0;
}
