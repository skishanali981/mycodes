#include<iostream>
using namespace std;

int main(void){
    int first = 0, second =1, num,next;
    cin>>num;
    for(int i=0;i<num;i++){
        if(i <= 1)
            next =i;
    else{
        next = first + second;
        first = second;
        second = next;
    }
    cout<<next<<" ";
    }
    return 0;
}