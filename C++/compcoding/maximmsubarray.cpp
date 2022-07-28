#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n = 7;
    int maxsum = INT_MIN;

    int arr[n] = {1, 5, -10, 2, 5, 3, -1};
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k < j; k++)
            {
                sum += arr[k];
            }
            maxsum = max(maxsum, sum);
        }
    }
}