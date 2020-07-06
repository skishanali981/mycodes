#include<iostream>
using namespace std;

int main(void){
    while(1){
    int range;
    cin>>range;
    int sum =0;
    for(int i=0;i<=range;i++){
        sum = sum + i;
    }
    cout<<"sum is: "<<sum<<endl;
    return 0;
}
}