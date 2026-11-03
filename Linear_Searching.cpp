//Linear Searching
#include<iostream>
#include<vector>
using namespace std;

int linear(vector<int>& num, int size, int x){
    for(int i = 0; i<size; i++){
        if(x == num[i]){
            return i;
        }
    }
    return -1;
}

int main(){
    vector<int> num;
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    for(int i = 0; i<n; i++){
        int x;
        cout << "Element " << i+1 << ": ";
        cin>>x;
        num.push_back(x);
    }
    int x;
    int size = num.size();
    cout << "Enter element to search down: ";
    cin >> x;

    int result = linear(num, size, x);

    if(result == -1){
        cout << "Element not founded!" << endl;
    }
    else{
        cout << "Element founded at " << result <<endl;
    }

    return 0;
}