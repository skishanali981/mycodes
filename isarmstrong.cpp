#include<iostream>
using namespace std;

int main(void){
    int num,r,sum = 0,temp;
    cin>>num;
    temp = num;
    do{
        sum = sum + (num%10)*(num%10)*(num%10);
        num = num/10;
    }while(num!=0);
    if(sum == temp)
        cout<<"the number is an armstrong number"<<endl;
    else{
        cout<<"number is not an armstrong number"<<endl;
    }
    return 0;
}