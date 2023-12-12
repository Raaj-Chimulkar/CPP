/*2. Given an array of n integers, find the smallest element and return if from function.
int findMin(int nums[], int n);*/

#include<iostream>
using namespace std;

int findMin(int arr[], int x){
    int min;
    for(int i=0; i<x; i++){
        if(i==0){
            min=arr[i];
        }
        else{
            min>arr[i] ? min=arr[i] : min;
        }
    }
    return min;
}

int main(){
    int x;
    int *arr = new int[x];
    cout << "Enter number of input integers : ";
    cin >> x;
    cout << "Enter elemens ";
    for(int i=0; i<x; i++){
        cin >> arr[i];
    }
    cout << "Smallest number out of entered number is : " << findMin(arr,x) << endl;
}