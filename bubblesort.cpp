//bubble sorting
#include <iostream>

using namespace std;

void bubbleSorting(int arr[] , int n){

for (int i = 1; i<n ; i++){
    // for round 1 to n-1


    for(int j = 0; j< n-i; j++){
        // for each round, compare the first n-i elements

        if(arr[j]>arr[j+1]){
            swap(arr[j], arr[j+1]);
            // if the first element is greater than the second, swap them
        }

    }

}

}

int main() {
    int arr[] = {5, 1, 4, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    bubbleSorting(arr, n);

    cout << "Sorted array: \n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}