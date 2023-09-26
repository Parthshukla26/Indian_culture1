#include <bits/stdc++.h>
using namespace std;


int main(){
    int t ; 
    cin >> t;
    while(t--){
        int n ; 
        cin >> n ; 
vector<int>arr(n) ; 
        for(int i = 0 ; i<n ; i++){
            cin >> arr[i] ;
        }
        int val = 1; 
        for(int i = 0 ; i< n ;i ++){
            if(arr[i] == val){
                val+=2 ; 
            }
            else{
                val++ ; 
            }
        }
        cout << val-1 << endl; 
        
    }
return 0 ;
}