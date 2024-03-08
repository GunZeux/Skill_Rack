#include <bits/stdc++.h>
 
using namespace std;

int sumVal(int n){
    int x = 0;
    for(int i=1; i<=n; i++){
        x+=i;
    }
    
    return x;
}

int maxNum(int n){
    int i=1; 
    for(; i<=n; i++){
        int x = sumVal(i);
        
        if(x>n)break;
    }
    
    return --i;
}

int main(int argc, char** argv)
{
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    int k = maxNum(n);
    int ptr = 0;
    
    for(int i=0; i<k; i++){
        for(int j=0; j<=i; j++){
            cout<<arr[ptr++]<<" ";
        }
        
        cout<<endl;
    }
    
    if(sumVal(k)<n){
        for(; ptr<n; ptr++){
            cout<<arr[ptr]<<" ";
        }
    }
    
    cout<<".";

}