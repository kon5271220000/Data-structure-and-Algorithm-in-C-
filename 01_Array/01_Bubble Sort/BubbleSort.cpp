/*
Bubble Sort:
1.Start at first element of the array
2.If current element is greater than the next element, swap them
3.Move to next pair of elements and repeat the comparision and swap if needed
4.After each complete pass through the array, the largest unsorted element is placed at its correct position at the end of the array.
5.Reapeat the above process of a pass for the remaining unsorted elements until the entire array is sorted

EX: 5 6 1 3 -> 5 1 6 3 (swap 6 1) -> 5 1 3 6 (swap 6 3)
    5 1 3 6 -> 1 5 3 6 (swap 1 5) -> 1 3 5 6 (swap 5 3) -> finish

Time Complexity = O(n^2)
Space Complexity = O(1)

*/

#include<iostream>
#include<vector>

using namespace std;

void bublesort(vector<int>& arr){
    int n = arr.size();
    bool hasSwapped = false;

    for(int i = 0; i < n -1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                hasSwapped = true;
            }
        }
        if(hasSwapped == false){
            break;
        }
    }
}

int main(){
    vector<int> arr = {5,6,1,3};
    bublesort(arr);
    cout << "Sorted arr: \n";
    for(size_t i = 0; i <= arr.size() - 1; i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}