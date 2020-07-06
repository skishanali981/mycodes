#include<iostream>
using namespace std;

int main(void){
    int num,r,sum=0,fact=1,temp;
    cin>>num;
    temp = num;
    do{
        r = num%10;
        fact = 1;
        for(int i=1;i<=r;i++){
            fact = fact * i;
            }
        sum = sum + fact;
        num = num / 10;
    }while(num != 0);

    if(sum == temp)
        cout<<"The number is a strong number"<<endl;
    else{
        cout<<"the number is not a strong number"<<endl;
    }
    return 0;

}