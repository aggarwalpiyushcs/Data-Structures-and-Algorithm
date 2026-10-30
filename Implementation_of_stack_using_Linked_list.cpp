#include<bits/stdc++.h>
using namespace std;

class Stack{
    list<int> ll;

    public:
        void push(int val){
            ll.push_front(val);
            cout << val << " added to the stack!\n";
        }

        void pop(){
            cout << "Element deleted from stack: " << ll.front() <<"\n";
            ll.pop_front();
        }

        int top(){
            return ll.front();
        }

        bool empty(){
            return ll.size() == 0;
        }

};

int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    cout << "Top Element: " << s.top() <<"\n";
    s.pop();
    s.pop();
    cout << "Top Element: " << s.top() <<"\n";

}
