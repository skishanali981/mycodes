#include<iostream>
using namespace std;

int main(void){
    int num,fact=1;
    cin>>num;
    for(int i=1;i<=num;i++){
        fact = fact*i;
    }
    cout<<"factorial of "<<num<<" is "<<fact<<endl;
    return 0;
}