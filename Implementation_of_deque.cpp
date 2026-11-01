#include<bits/stdc++.h>
using namespace std;

int main(){
    deque<int> dq;
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    cout << dq.front() << endl;
    dq.push_front(40);
    cout << dq.front();
    return 0;
}