#include<iostream>
using namespace std ;


void towerOfHanoi(int n, char start, char end,char aux)
{
    if (n == 0) {
        return;
    }
    towerOfHanoi(n - 1, start, aux, end);
    cout << "Move disk " << n << " from rod " << start<< " to rod " << end << endl;
    towerOfHanoi(n - 1, aux, end, start);
}
int main(){
    int n ;
    cin>>n ;
    towerOfHanoi(n , 'A' , 'B' , 'C') ;
 return 0 ;
}