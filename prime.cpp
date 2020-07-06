#include<iostream>
using namespace std;

void isprime(int num){
    int i;
    if(num < 2)
        cout<<"please input a valid number"<<endl;
    for(i = 2; i <= num/2; i++){
        if(num%i == 0){
            cout<<"number is not prime";
            break;
        }
    }
        if(i >= num/2)
            cout<<"number is prime"<<endl;
}

int main(void){
    int number;
    cin>>number;
    isprime(number);
    return 0;
}