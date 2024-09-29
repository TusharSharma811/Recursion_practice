#include<iostream>
using namespace std ;

int powercalculation(int n . int m){
    if(m==0)return 1 ;
    return n*powercalculation(n , m-1) ;
}

int main(){

    int n , m; 
    cin>>n>>m ;
    int ans = powercalculation(n , m) ;
    cout<<ans<<endl ;
 return 0 ;
}