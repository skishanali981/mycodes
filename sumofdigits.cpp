#include<iostream>
using namespace std;

int main(void){
    int num;
    cin>>num;
    int sum = 0;
    do{
        sum = sum + num%10;
        num = num/10;
    }while(num!=0);
    cout<<"sum of digits is: "<<sum<<endl;
    return 0;

}