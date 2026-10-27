#include<iostream>
using namespace std;

class Stack{
    private:
        int capacity;
        int arr[100];
        int top;
        
    public:
        Stack(int cap){
            capacity = cap;
            top = -1;
        }

        void push(int x){
            if(top == capacity){
                cout << "Stack is overflow.\n";
                return;
            }
            top = top + 1;
            arr[top] = x;
            cout << x <<" pushed into the stack.\n";
        }

        void pop(){
            if(top == -1){
                cout << "Stack is underflow.\n";
                return;
            }
            cout << "Deleted Data: " << arr[top];
            top = top - 1;
        }

        void peek(){
            if(top == -1){
                cout << "Stack is empty.\n";
                return;
            }
            cout << "Top Element: " << arr[top] <<endl;
        }

        bool is_empty(){
            return(top == -1);
        }

        bool is_full(){
            return(top == capacity -1);
        }

        int size(){
            return top +1;
        }

        void display(){
            if(top == -1){
                cout << "Stack is empty.\n";
                return;
            }
            int i;
            for(i=top; i>=0; i--){
                cout << "Element: " << i <<" : " << arr[i] << endl;
            }
        }
};

int main(){
    Stack s(5);
    s.push(10);
    s.push(15);
    s.push(20);
    s.display();
    s.peek();
    s.pop();
    s.pop();
    s.push(40);
    cout << "Stack's Size: " << s.size() <<endl;
    s.display();

}