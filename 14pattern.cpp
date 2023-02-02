//  A B C D
//  E F G H 
//  I J K L 
//  M N O P


#include<iostream>
using namespace std;
int main(){
    int n ;
    cin >> n ;
    int i = 1;
    char che = 'A';
    
    while(i<= n){
        int j = 1;
        while(j<= n){
            cout << che;
              che++;
            j++;
        }
        cout<< endl;
    


    i++;
    }
}