/*
Selection sort:
1.Go through the array to find the lowest value.
2.Move the lowest value to the front of the unsorted part of the array.
3.Go through the array again as many times as there are values in the array.

Ex: 7 12 9 11 3 (lowest value = 3) -> 3 7 12 9 11 (start at 7, lowest value = 7) -> 3 7 12 9 11 (start at 12, lowest value = 9)
    ->3 7 9 12 11 (start at 12, lowest value = 11) -> 3 7 9 11 12

Time complexity: O(n^2)
Space complexity: O(1)
*/
#include<iostream>
#include<vector>

using namespace std;

template <typename t>

void Swap(t& x, t& y){
    t temp = x;
    x = y;
    y = temp;
}

void selectionsort(vector<int>& arr){
    int n = arr.size();

    for(int i = 0; i <= n-1; i++){
        int minIndex = i;

        for(int j = i+1; j < n; j++){
            if(arr[minIndex] > arr[j]){
                minIndex = j;
            }
        }
        
        if (minIndex != i) {
            Swap(arr[i], arr[minIndex]);
        }
    }
}

int main(){
    vector<int> arr = {7, 12, 9, 11, 3};
    selectionsort(arr);
    for(size_t i = 0; i <= arr.size() - 1; i++){
        cout << arr[i] << " ";
    }
    return 0;
}