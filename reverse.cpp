#include<iostream>
using namespace std;

int main(void){
    int num,sum=0,r;
    cin>>num;
    while(num!=0){
        r = num%10;
        sum = sum*10 + r;
        num = num/10;
    }
    cout<<"reversed number is: "<<sum<<endl;
    return 0;
}