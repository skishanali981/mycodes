#include<iostream>
using namespace std;



int main()
{
    int num,num2=0;
    cout<<"Enter number: ";
    //user input
    cin>>num;
    //checking for 0 input
    if(num == 0)
        num2=1;
    //converting 0 to 1
    while(num>0)
    {
        int rem = num%10;
        if(rem == 0)
            rem = 1;
        num = num/10;
        num2=num2*10+rem;
    }
    //converted number
    cout<<"Converted number is: "<<num2;
    return 0;
}