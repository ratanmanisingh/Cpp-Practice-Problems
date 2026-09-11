#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of element you want to insert: ";
    cin>>n;
    int arr[50];
    for(int i=0;i<n;i++){
        cout<<"Enter numbers: ";
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int hold=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=hold;
            }
        }
    }
    cout<<"Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout<< arr[i]<<" ";
    }
}