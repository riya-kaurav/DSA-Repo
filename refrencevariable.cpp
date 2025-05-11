#include<iostream>
using namespace std;

void update(int n){
    n++; // value of n is updated
    

}

int main() {

int i =5;
 int& j =i; // j is a reference variable to i
 cout << i << endl; // prints 5
 j++;
 cout<< i << endl; // prints 6
 int n = 5;
    update(n); // no updation whyy kyuki copy create huyi hai



}