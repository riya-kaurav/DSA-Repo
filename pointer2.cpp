#include<iostream>
using namespace std;

int main () {
     int i = 5;
     int *q = &i;
     cout << q ;
     cout << *q ;

     // same output as above
      int *p = 0;

      p =&i;
      cout << p;
      cout << *p;


      int num = 5;
      int a = num ;
      a++;

      cout << num ; // nothing happen nums = 5


      int *p1 = &num;
        (*p1)++;
        cout << num; // now nums = 6

        //coping a pointer
        int *p2 = p1; // p2 points to the same address as p1
        cout << *p2; // 6
        cout << p2; // address of nums
int b = 3;
        int *t = &b;
        cout << ( *t) + 1; // 4




}