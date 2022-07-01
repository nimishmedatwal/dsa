#include <bits/stdc++.h>
using namespace std;
#define NO_OF_CHARS 256

bool canFormPalindrome(string str)
{
    int count[NO_OF_CHARS] = { 0 };
    for (int i = 0; str[i]; i++)
        count[str[i]]++;
    int odd = 0;
    for (int i = 0; i < NO_OF_CHARS; i++) {
        if (count[i] & 1)
            odd++;
 
        if (odd > 1)
            return false;
    }
    return true;
}
int positiveAnswersCount(int N, int Q, string blockCharacters, vector<int> L, vector<int> R)
{
  int count=0;
  for (int i = 0; i < Q; i++)
  {
    string s = blockCharacters.substr(L[i] - 1, R[i] - L[i] + 1);
     bool o=canFormPalindrome(s);
     if (o==true) count++;  
     
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
    int N, Q;
    // Get number of blocks and number of questions
    cin >> N >> Q;

    string blockCharacters;
    // Get the string representing the characters on the blocks
    cin >> blockCharacters;

    vector<int> L(Q), R(Q);
    for (int i = 0; i < Q; i++)
    {
      cin >> L[i] >> R[i];
    }

    cout << "Case #" << tc << ": "
         << positiveAnswersCount(N, Q, blockCharacters, L, R) << endl;
  }
  return 0;
}
