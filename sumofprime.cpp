#include<iostream>
using namespace std;

int isprime(int num){
    int i;
    for(i=2;i<=num/2;i++){
        if(num%i==0)
            return 0;
    }
    if(i>num/2)
        return 1;
}

int main(void){
    int i,j,lower,upper,sum=0;
    cout<<"enter the lower bound"<<endl;
    cin>>lower;
    cout<<"enter the upper bound"<<endl;
    cin>>upper;
    for(i=lower; i<=upper; i++){
        for(j=lower; j <= upper; j++){
            sum == i + j;
            if(isprime(i) && isprime(j))
                cout<<sum<<" is the sum of two primes"<<endl;
            
        }
    }

}