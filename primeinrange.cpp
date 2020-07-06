#include<iostream>
using namespace std;

int main(void){
    int range;
    int i=0,j=0;
    cin>>range;
    for(i=0;i<=range;i++){
        for(j=2;j<=i/2;j++){
            if(i%j == 0){
                break;
            }
                
        }
        if(j>i/2 && i > 1){
            cout<<"number is: "<<i<<endl;
        }
    }
   
}