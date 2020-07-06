#include<iostream>
using namespace std;

int main(void){
    int arr[100],smallest,size;
    cout<<"enter the size of array"<<endl;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    smallest = arr[0]; //think the first element as the smallest
    for(int i=0;i<size;i++){
        if(arr[i]<smallest){
            smallest = arr[i];
        }
    }
    cout<<"Smallest element is: "<<smallest<<endl;
    return 0;
}