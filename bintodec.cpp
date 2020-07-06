#include<iostream>
#include<math.h>
using namespace std;

int bintodec(int num){
    int decimal = 0,rem,i=1;
    while(num!=0){
        rem = num % 10;
        decimal += rem * i;
        num = num / 10;
        i = i*2;
    }
    return decimal;
}

int main(void){
    int num,res;
    cin>>num;
    res = bintodec(num);
    cout<<"equivalent binary of "<<num<<" is "<<res<<endl;
    return 0;
}