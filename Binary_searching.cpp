#include<iostream>
#include<vector>
using namespace std;

int binary(vector<int>& num, int size, int x){
    int low = 0;
    int high = size-1;

    while(low<=high){
        int mid = (low + high)/2;

        if(num[mid] == x){
            return mid;
        }
        else if(num[mid] > x){
            high = mid -1;
        }
        else{
            low = mid + 1;
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
        cin >> x;
        num.push_back(x);
    }
    int size = num.size();
    int x;
    cout << "Enter x: ";
    cin >> x;

    int result = binary(num, size, x);

    if(result == -1){
        cout << "Element not founded!" << endl;
    }
    else{
        cout << "Element founded at: " << result <<endl;
    }
    return 0;
}