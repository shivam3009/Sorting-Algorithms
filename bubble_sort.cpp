#include "codeblock.h"

void bubbleSort (vector <int> &arr){
    int n = arr.size();
    for(int i =0; i < n-1; i++){
        for(int j = 0; j < n-1-i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

    // Time complexity : O(n^2)
    // Space Complexity : O(1)
}


int main(){
    vector <int> arr = input();
    bubbleSort(arr);
    printAfterSorting(arr);
}