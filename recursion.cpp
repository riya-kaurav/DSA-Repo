#include<iostream>
using namespace std;

bool binarSearch (int arr[] , int s, int e, int key) {
// base case
if (s>e){
    return false;

}

int mid = s + (e-s)/2;
if(arr[mid] < key){
    return binarSearch(arr, mid+1, e, key);
}
else if (arr[mid] > key){
    return binarSearch(arr, s, mid-1, key);
}
else{
    return true;
}
}
int main() 
{
    int arr[6] = {2, 4, 6, 10, 14 ,16};
    int size = 6;
    int key = 11;

    int ans = binarSearch(arr, 0, size-1, key);
    if (ans){
        cout << "Key is present in the array" << endl;
    }
    else{
        cout << "Key is not present in the array" << endl;
    }
    





    return 0;
}