#include<iostream>
#include<vector>

using namespace std;

vector<int> countingsort(vector<int>& arr){
    int n = arr.size();

    //find max value
    int max_val = arr[0];

    for(size_t i = 0; i < n; i++){
        if(max_val < arr[i]){
            max_val = arr[i];
        }
    }

    vector<int> counting_arr(max_val + 1, 0);

    for(size_t i = 0; i < n; i++){
        counting_arr[arr[i]]++;
    }

    vector<int> output_arr;

    for(size_t i = 0; i < counting_arr.size(); i++){
        while(counting_arr[i] > 0){
            output_arr.push_back(i);
            counting_arr[i]--;
        }
    }
    return output_arr;
}

int main(){
    vector<int> arr = {2,5,3,0,2,3,0,3};
    vector<int> output_arr = countingsort(arr);
    cout << "sorted arr: " << endl;

    for(size_t i = 0; i < output_arr.size(); i++){
        cout << output_arr[i] << " ";
    }    

    return 0;
}