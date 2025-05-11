#include<iostream>
using namespace std;

void print(int*p){

    cout << *p << endl; 
}

void update(int *p){
    
    *p =*p +1; // value of p is updated
}


int main() {
int value =5;
int *p = &value;

print(p); // prints  value

update(p); // no updation whyy refer to notes 
 return 0;

}