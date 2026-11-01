#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    cout << "Front element: " << q.front() << endl;
    q.pop();
    q.pop();
    if(q.empty()){
        cout << "Qeue is empty!";
    }
    else{
        cout <<"Queue is not empty!";
    }
    return 0;
}

