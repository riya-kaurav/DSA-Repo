#include<iostream>
using namespace std;


void merge(int *arr, int s, int e){
    int mid = (s+e)/2;

    int len1 = mid - s+1;

    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // copy values
    int mainArrayIndex= s;
    for(int i =0; i<len1; i++){
        first[i] = arr[mainArrayIndex++];
    }
   

    // copy values
    int mainArrayIndex = mid + 1;
    for(int i =0; i<len2; i++){
        second[i] = arr[mainArrayIndex++];
    }

    // merged two sorted array
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;

    while(index1 < len1 && index2 < len2){
    if(first[index1] < second[index2] ) {
    arr[mainArrayIndex++] = first[index1++];
    }

    else {
    arr[mainArrayIndex++] =second[index2++];
    }

}


while(index1 < len1 ){
    arr[mainArrayIndex++] = first[index1++];
    

}

while( index2 < len2) {
    arr[mainArrayIndex++] = first[index1++];
    
}
}

void mergeSort(int *arr, int s, int e){
    // base case 
    if(s>=e){
        return ;
    }

    int mid = (s+e)/2;

// left part sort karna hai
mergeSort(arr, s, mid);

// right part ko sort karna hai
mergeSort(arr, mid+1 , e);

// merge both the array
merge(arr , s , e);



}

int main() {
    int arr[5] = {2, 5, 1, 6, 9};
    int n = 5;

    mergeSort(arr , 0, n-1);

    for(int i =0; i<n ; i++){
        cout << arr[i];
    }
}
