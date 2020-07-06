#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,N,count = 0,result;
	cin>>t;
	for(int i=0;i<t;i++){
	    cin>>N;
	    int arr[N];
	    for(int j=0;j<N;j++){
	        cin>>arr[j];
	    }
	for(int k=0;k<N-1;k++){
	    count = count + abs(arr[k]-arr[k+1]);
	    }
	result = count - (N-1);
	cout<<result<<endl;
	
	}
	
	return 0;
}
