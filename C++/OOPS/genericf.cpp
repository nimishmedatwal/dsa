#include <iostream>
using namespace std;
template <class T> void compact(T *a,int b, int start , int end){
    int s = end-start+1;
    for (int i =end+1; i<b;i++ ){
        a[i-s]=a[i];
    }  
    for (int i=0)
}


// 0 1 2 3 4 5 6 7 8 9 10
//start = 4    end =6