#include<iostream>
using namespace std;
int main (){
    int n ,part = 0;
    int rev = 0;
    cout << " enter number " ;
    cin >> n ;
    while (n>0)
    {
        part = n % 10;
        rev = rev * 10 + part ;
           n = n / 10;
            

    }
     cout << " reverse number is "<< rev << endl;
    

}