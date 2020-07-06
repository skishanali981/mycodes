#include<iostream>
using namespace std;

int main(void){
    int lower,upper,sum = 0;
    cin>>lower;
    cin>>upper;
    for(int i=lower;i<=upper;i++){
        sum = sum + i;
    }
    cout<<"sum between "<<lower<<" and "<<upper<<" is "<<sum<<endl;
    return 0;
}