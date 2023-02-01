#include<iostream>
using namespace std;
int main () {
    int n , i = 2;
     bool flag = 0;
    cout << " enter number "<< endl;
    cin >> n ;
    if(n<=1){cout<<n<< "is not a prime number"; flag =1;}
    while (i <n){
     if (n % i ==0){
                flag = 1;

        cout<< " not a prime number" << endl;
         break;
         
     }
        i = i + 1;
     }
     if(flag==0)
     cout<<n<<" is a prime number";
           
    }
