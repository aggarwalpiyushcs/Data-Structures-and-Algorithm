#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int val){
            data = val;
            next = nullptr;
        }
};

class Queue{
    Node* head;
    Node* tail;

    public:
        Queue(){
            head = tail = nullptr;
        }

        void push(int x){
            Node* newNode = new Node(x);
            if(empty()){
                head = tail = newNode;
            }
            else{
                tail -> next = newNode;
                tail = newNode;
            }
        }

        void pop(){
            if(empty()){
                cout << "Linked List is empty!";
                return;
            }
            Node* temp = head;
            head= head -> next;
            delete temp;

            if(head == nullptr){
                tail == nullptr;
            }
        }
        

        int front(){
            if(empty()){
                cout << "Lined List is empty!";
                return -1;
            }
            return head -> data;
        }

        bool empty(){
            return head == nullptr;
        }
};

int main(){
    Queue q;
    q.push(10);
    q.push(20);
    cout << "Front element: " <<q.front() << endl;;
    return 0;
}