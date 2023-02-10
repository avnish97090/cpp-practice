#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int uniqueElement(int input[] , int size ){
    int ans = 0;
    for(int i = 0; i < size ; i++){
        ans = ans^input[i];
        }
        return ans;
    }
    

int main(){

     int array[7]= {3,5,24,43,43,3,5};

    uniqueElement(array,7);
    int ans = uniqueElement(array,7);
    cout<<ans ;
}