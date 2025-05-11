#include<iostream>
using namespace std;
int main() {
    int arr[10] ={23, 122, 41, 67};
   
    cout << "address of first element: " << arr << endl; // address of first element

cout<< *arr << endl; // value of first element
cout << *arr + 1 << endl; // value of first element + 1
cout << *(arr + 1) << endl; // value of second element
int i =3;
cout <<i[arr] << endl; // value of third element


int temp[10] ;
cout << sizeof(temp) << endl; // size = 40
int *p =&temp[0]; 
cout << sizeof(p); // size = 8
cout << sizeof(*p); // size = 4
cout << sizeof(&p); // size = 8

cout << sizeof(*temp); // size =4

cout << sizeof(&temp); // size = 8

int a[20] = {1, 2, 3, 4, 5};
cout << &a[0] << endl; 
cout << a << endl; 
cout << &a << endl;

int *p1 = &a[0];
cout << p1 << endl;
cout << &p1 << endl;

} 