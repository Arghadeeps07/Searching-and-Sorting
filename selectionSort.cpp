#include<iostream>
using namespace std;
void selectionSort(int*, int);
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0 ;i<n ;i++)
        cin>>arr[i];

    selectionSort(arr, n);

    for(auto i:arr)
        cout<<i<<" ";

    return 0;
}
void selectionSort(int* arr, int n){
    for(int i=0 ; i<n-1 ; i++){
        for(int j = i+1; j<n ; j++){
            if(arr[i] > arr[j])
                swap(arr[i], arr[j]);
        }
    }
}