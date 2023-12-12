/*4. Given an array of n integers, find the second smallest element and return if from function.
int findSecondSmallest(int nums[], int n);*/

#include<iostream>
using namespace std;

int findMin(int arr[], int x){
    int min=arr[0], min_2=arr[0];
    for(int i=0; i<x; i++){
        min>arr[i] ? min=arr[i] : min;
    }
    for(int i=0; i<x; i++){
        min_2>arr[i] ? (arr[i]!=min ? min_2=arr[i] : min) : min;
    }
    return min_2;
}

int main(){
    int x;
    int *arr = new int[x];
    cout << "Enter number of input integers : ";
    cin >> x;
    cout << "Enter elements ";
    for(int i=0; i<x; i++){
        cin >> arr[i];
    }
    cout << "2nd smallest number out of entered number is : " << findMin(arr,x) << endl;
}