#include <iostream>
#include<algorithm>
using namespace std;

void maxsum(int arr[],int k){
    int maxsum = 0;
    int windowsum =0;
    int start =0;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        windowsum +=arr[i];
        if(i-start+1 ==k){
            maxsum = max(maxsum,windowsum);
            windowsum-=arr[start];
            start+=1;
        }
    }
    cout<<maxsum;
}


int main() {
    int arr[] = {3,5,2,1,7};
    maxsum(arr,2);

    return 0;
}

//output 8
