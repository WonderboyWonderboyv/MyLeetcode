#include<iostream>
using namespace std;

int maxDiffBrute(int arr[], int n){
    int max_diff = 0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i] < arr[j]){
                int curr_diff = arr[j] - arr[i];
                if(max_diff < curr_diff){
                    max_diff = curr_diff;
                 }
            }
        }
    }
    return max_diff;
}

int maxDiff1(int arr[], int n){
    int max_diff = 0;
    int min_elem = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i] < min_elem){
            min_elem = arr[i];
        }
        if(arr[i] - min_elem > max_diff){
            max_diff = arr[i] - min_elem;
        }
    }
    return max_diff;
}

int maxDiff2(int arr[], int n){
    int max_diff = 0;
    int aux[n-1];
    for(int i=0;i<n-1;i++){
        aux[i] = arr[i+1] - arr[i];
    }
    for(int i=0;i<n-1;i++){
        if(aux[i-1] > 0){
            aux[i] += aux[i-1];
        }
        if(max_diff < aux[i]){
            max_diff = aux[i];
        }
    }
    return max_diff;
}


int main(){
    int arr[] = {1, 2, 90, 10, 110};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Maximum difference is " << maxDiff1(arr, n);
    return 0;
}

