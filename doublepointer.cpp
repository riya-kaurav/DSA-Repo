#include<iostream>
using namespace std;


void update(int **q){
    // *p = *p +1; // value of p is updated
    **q = **q + 1; // value of i is updated
    
}

int main() {

    int i = 5;
    int *p =&i;
    int **q = &p; // q is a pointer to a pointer
cout << **q ; // prints 5

    cout << *p ; // prints 5

    cout << p ; // prints address of i

    cout << &i ; // prints address of i

    cout << q ; // prints address of p

    cout << &p ; // prints address of p

    cout << *q ; // prints address of i

    cout << &q ; // prints address of q

    return 0;
     

}
