#include <iostream>
#include <array>
using namespace std;

int main(void){
    std::array<int , 5> myarray;
    myarray = {1,2,3,4,5};
    for(int i=0;i<myarray.size();i++){
        cout<<myarray[i]<<endl;
    }
    
}