#include<iostream>
using namespace std;

class circular{
    int* queue;
    int front;
    int rear, size;

    public:

        circular(int s){
            size = s;
            queue = new int[size];
            front = rear = -1;
        }

        void Enqueue(int x){
            if((rear + 1) % size == front){
                cout << "Queue is overflow!" << endl;
                return;
            }
            if(front == -1){
                front == 0;
            }
            rear = (rear + 1)%size;
            queue[rear] = x;
        }

        void Dequeue(){
            if(front == -1){
                cout << "Queue is underflow!" << endl;
                return;
            }

            cout << "Deleted: " << queue[front] << endl;
            if(front == rear){
                front = rear = -1;
            }
            else{
                front = (rear + 1)%size;
            }
        }

        void display(){
            if(front == -1){
                cout << "Queue is empty!" << endl;
                return;
            }

            int i = front;
            while(true){
                cout << queue[i] <<"i";
                if(i == rear){
                    break;
                }
                i = (i+1)%size;
            }
            cout << endl;
        }
    };



int main(){
    circular c(5);
    c.Enqueue(10);
    c.Enqueue(20);
    c.Dequeue();
    return 0;
}

