#include<iostream>
using namespace std;

class Queue{
    int* arr;
    int* priority;
    int n;
    int capacity;

    public:
        Queue(int c){
            capacity = c;
            arr = new int[c];
            priority = new int[c];
            n=0;
        }

        void enqueue(int x, int pri){
            arr[n] = x;
            priority[n] = pri;
            n++;
        }

        void dequeue(){
            int highest = 0;
            for(int i = 0; i<n; i++){
                if(priority[i]>priority[highest]){
                    highest = i;
                }
            }
            cout << "Deleted element: " << arr[highest] <<endl;

            for(int i = 0; i<n; i++){
                arr[i] = arr[i+1];
                priority[i] = priority[i+1];
            }
            n--;
        }

        void display(){
            for(int i =0; i<n; i++){
                cout << arr[i] << " at priority (" << priority[i] <<")";
                cout << endl;
            }
        }
};

int main(){
    Queue q(5);
    q.enqueue(10, 5);
    q.enqueue(20, 2);
    q.enqueue(30, 1);
    q.enqueue(40, 6);
    q.display();
    q.dequeue();
    q.display();
}