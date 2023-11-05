#include<iostream>
using namespace std;
void bubbleSort(int*, int);
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0 ;i<n ;i++)
        cin>>arr[i];

    bubbleSort(arr, n);

    for(auto i:arr)
        cout<<i<<" ";

    return 0;
}
void bubbleSort(int* arr, int n){
    for(int i=0 ; i<n ; i++){
        for(int j = i+1; j<n ; j++){
            if(arr[i] > arr[j])
                swap(arr[i], arr[j]);
        }
    }
}