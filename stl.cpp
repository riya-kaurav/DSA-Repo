// #include<iostream>
// #include<list>
// using namespace std;

// int main() {
//     list<int> l;//list

//     l.push_back(1);
//     l.push_front(2);

//     for(int i :l){
//         cout<<i <<"" ;
//     }
// }
   

// #include<iostream>
// #include<stack> 

// using namespace std;
// int main() {
//     stack<string> s;


//     s.push("riya");
//     s.push("hello");

//     cout<<s.top();



// }

// #include<iostream>
// #include<queue>
// using namespace std;
// int main() {
//     queue<int> q;

//     q.push(1);
//     q.push(2);
//     q.push(3);

//     cout<<q.front()<<endl;
//     cout<<q.back()<<endl;
//     cout<<q.size()<<endl;
//     cout<<q.empty()<<endl;

//     q.pop();
//     cout<<q.front()<<endl;
// }

// #include<iostream>
// #include<queue>

// using namespace std;

// int main(){
//     priority_queue<int> pq; // max heap

//     priority_queue<int ,vector<int> ,greater<int>> mini; // min heap

// pq.push(1);
// pq.push(3);
// pq.push(3);

// int n = pq.size();
// for(int i = 0; i<n; i++){

//     cout<<pq.top();
//     pq.pop();

// }

// mini.push(1);
// mini.push(2);
// mini.push(3);

// int n = mini.size();
// for(int i = 0; i<n; i++){

//     cout<<mini.top();
//     mini.pop();

// }



// }

// #include<iostream>
// #include<set>

// using namespace std;

// int main() {
//     set<int> s;
//      s.insert(1);
//      s.insert(2);
//      s.insert(3);


//      for(auto i : s){
        

//          cout<<i<<endl;
//      }
//     }


#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    cout << binary_search(v.begin(),v.end() , 3);
    cout << lower_bound(v.begin(),v.end() , 3) - v.begin() << endl;
int a = 3;
int b = 4;

cout << max(a,b) << endl;
cout << min(a,b);

string abcd = "abcd";
reverse(abcd.begin(), abcd.end());


}