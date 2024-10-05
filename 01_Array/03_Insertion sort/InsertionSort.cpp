/*
Insertion sort:
1.Take the first value from the unsorted part of the array
2.Move the value into the correct place in the sorted part of the array
3.Go through the unsorted part of the array again as many time as there are values
*/

#include<iostream>
#include<vector>

using namespace std;

void insertionsort(vector<int>& arr){
    int n = arr.size();
    
    for(int i = 1; i <= n; i++){
        int j = i - 1;
        while (j > 0 && arr[j-1] > arr[j])
        {
            swap(arr[j], arr[j-1]);
            j--;
        }
    }
}

int main(){
    vector<int> arr = {7, 12, 9, 11, 3}; 
    insertionsort(arr);
    cout << "sorted array: " << endl;
    for(size_t i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
}