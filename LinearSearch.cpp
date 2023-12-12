/*5. Given an array of n integers, find the given element. Return true if element is present in the array else return false.
bool search(int nums[], int n, int element);*/

#include<iostream>
using namespace std;

bool search(int arr[], int num, int x){
    bool sw=0;
    for(int i=0; i<x; i++){
        arr[i]==num ? sw=1 : sw=0;
        if(sw==1){
            break;
        }
    }
    return sw;
}

int main(){
    int x, num;
    int *arr = new int[x];
    cout << "Enter number of input integers : ";
    cin >> x;
    cout << "Enter elements ";
    for(int i=0; i<x; i++){
        cin >> arr[i];
    }
    cout << "Enter a number to find check if it is in array : ";
    cin >> num;
    0==search(arr, num, x) ? cout << "Entered number is not present in array" : cout << "Entered number is present in array";
    cout << endl;
}