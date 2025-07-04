#include<iostream>
using namespace std;

class Stack {
 // properties
    public :
    int *arr ;
    int top ;
    int size ;

    
    // behaviour
    Stack(int size) {
        this -> size = size;
        arr = new int[size];
        top = -1;
    }
 void push(int element){
    if(size - top > 1) {
        top++;
        arr[top] = element;
    }
    else {
        cout << "Stack OverFlow" << endl;
    }

 }
 void pop() {
    if(top >=0){
        top--;
    }
    else {
        cout << "Stack UnderFlow" << endl;
    }

 }
  int peek() {
    if(top >= 0)
    return arr[top];

    else{
        cout << "Stack is Empty" << endl;
        return -1;
    }

  }
 bool isEmpty() {

    if(top == -1){
        return true;
    }
    else{
        return true;
    }

 }

};


int main() {   

    Stack st(5);

    st.push(22);
    st.pop();
    st.peek();
    st.isEmpty();

    return 0;
        
}