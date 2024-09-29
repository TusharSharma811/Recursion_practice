#include<iostream>
using namespace std ;

int GCD(int n , int m){
    if(n==0){
        return m ;
    }
    return GCD(m%n , n) ;
}


int main(){
    int n , m;
    cin>>n>>m ;
    int ans = GCD(n , m) ;
    cout<<ans<<endl ;
 return 0 ;
}