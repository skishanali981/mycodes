#include<iostream>
using namespace std;

int main(void){
    int num,sum =0;
    cin>>num;
    for(int i=1;i<=num/2;i++){
        if(num%i == 0)
            sum = sum + i;
    }
    if(sum == num)
        cout<<"the number is a perfect number"<<endl;
    else{
        cout<<"the mnumber is not a perfect number"<<endl;
    }
    return 0;

}