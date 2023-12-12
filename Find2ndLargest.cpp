/*3. Given an array of n integers, find the second largest element and return if from function.
int findSecondLargest(int nums[], int n);*/

#include<iostream>
using namespace std;

int findMax(int arr[], int x){
    int max=arr[0], max_2=arr[0];
    for(int i=0; i<x; i++){
        max<arr[i] ? max=arr[i] : max;
    }
    for(int i=0; i<x; i++){
        max_2<arr[i] ? (arr[i]!=max ? max_2=arr[i] : max) : max;
    }
    return max_2;
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
    cout << "2nd largest number out of entered number is : " << findMax(arr,x) << endl;
}