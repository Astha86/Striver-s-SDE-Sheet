// Hint: Concept of merge sort

#include <bits/stdc++.h>
using namespace std;

int merge(vector<int> &arr, int low, int mid, int high) {
    vector<int> v; 
    int left = low;      
    int right = mid + 1; 

    int cnt = 0;
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            v.push_back(arr[left]);
            left++;
        }
        else {
            v.push_back(arr[right]);
            cnt += (mid - left + 1); 
            right++;
        }
    }

    // if left half elements still left 
    while (left <= mid) {
        v.push_back(arr[left]);
        left++;
    }

    //  if right half elements are still left 
    while (right <= high) {
        v.push_back(arr[right]);
        right++;
    }

    // transfering all elements from temporary to arr 
    for (int i = low; i <= high; i++) {
        arr[i] = v[i - low];
    }

    return cnt; // updated
}

int mergeSort(vector<int> &arr, int low, int high) {
    int cnt = 0;
    if (low >= high) return cnt;
    int mid = (low + high) / 2 ;
    cnt += mergeSort(arr, low, mid);  // left half
    cnt += mergeSort(arr, mid + 1, high); // right half
    cnt += merge(arr, low, mid, high);  // merging sorted halves
    return cnt;
}

int numberOfInversions(vector<int>&a, int n) {
    return mergeSort(a, 0, n - 1);
}

int main(){
    vector<int> a = {5, 4, 3, 2, 1};
    int n = 5;
    cout<<"Answer: "<<numberOfInversions(a, n)<<endl;
    return 0;
}


