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