/*1. Given an array of n integers, find the largest element and return if from function.
int findMax(int nums[], int n);*/

#include<iostream>
using namespace std;

int findMax(int arr[], int x){
    int max;
    for(int i=0; i<x; i++){
        if(i==0){
            max=arr[i];
        }
        else{
            max<arr[i] ? max=arr[i] : max;
        }
    }
    return max;
}

int main(){
    int x;
    int *arr = new int[x];
    cout << "Enter number of input integers: ";
    cin >> x;
    cout << "Enter elements : ";
    for(int i=0; i<x; i++){
        cin >> arr[i];
    }
    cout << "Largest number out of entered number is : " << findMax(arr,x);
}