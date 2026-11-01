#include<bits/stdc++.h>
using namespace std;


class Queue{
    int* arr;
    int size;
    int capacity;

    public:
        Queue(int c){
            arr = new int[capacity];
            capacity = c;
            size = 0;
        }

        bool isempty(){
            return size == 0;
        }
        
        bool isfull(){
            return size == capacity;
        }

        void Enqueue(int x){
            if(isfull()){
                cout << "Queue is full!" << endl;
                return;
            }

            arr[size] = x;
            size++;
        }

        void Dequeue(){
            if(isempty()){
                cout <<"Queue is empty!" << endl;
                return;
            }

            for(int i = 1; i<=size; i++){
                arr[i-1] = arr[i];
            }
            size--;
        }

        void display(){
            for(int i = 1; i<=size; i++){
                cout << i << " ";
            }
        }
};

int main(){
    Queue q(5);
    q.Enqueue(10);
    q.Enqueue(20);
    q.Enqueue(30);
    return 0;
}