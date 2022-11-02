#include <iostream>
using namespace std;
void swap(int &i ,int & j)
{
    int temp=i;
    i=j;
    j=temp;
}
void takeInput(int input[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }
}
void print(int input[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << input[i] << " ";
    }
}
void selectionSort(int input[], int n)
{
    if (n == 0 || n == 1)
    {
        return;
    }
    else
    {
        for (int i = 0; i < n - 1; i++)
        {
            int min_index=i;
            for (int j = i + 1; j < n; j++)
            {
                if(input[j]< input[min_index])
                {
                    min_index=j;
                }
            }
            swap(input[i],input[min_index]);  
        }
    }
}
int main()
{
    int n;
    cout << "enter the size of the array : " << endl;
    cin >> n;
    cout << "enter the array : " << endl;
    int *input = new int[n];
    takeInput(input, n);
    selectionSort(input, n);
    cout << "the sorted array is : " << endl;
    print(input, n);
    return 0;
}
    