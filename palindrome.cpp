#include<iostream>
using namespace std;

int main(void){
    int num,sum=0,r,temp;
    cin>>num;
    temp = num;
    while(num!=0){
        r = num%10;
        sum = sum*10 + r;
        num = num/10;
    }
    if(sum == temp)
        cout<<"number is palindrome"<<endl;
    else
    {
        /* code */
        cout<<"number is not palindrome"<<endl;
    }
    
    return 0;
}