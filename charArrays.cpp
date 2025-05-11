#include<iostream>
using namespace std;


int main(){
    char ch[6] = "abcde";
    cout << ch << endl; // prints the string
    cout << &ch << endl; // prints the address of the array
    cout << &ch[0] << endl; // prints the address of the first element
    cout << ch[0] << endl; // prints the first character
    cout << *ch << endl; // prints the first character
    cout << *(ch + 1) << endl; // prints the second character
    cout << *(ch + 2) << endl; // prints the third character
    cout << *(ch + 3) << endl; // prints the fourth character
    cout << *(ch + 4) << endl; // prints the fifth character
    cout << *(ch + 5) << endl; // prints the null terminator
}
