#include<iostream>
using namespace std;
int main (){
    int n ;
    cin >> n;
    int i = 1;
    while(i<= n){
        int space = 1;
        while(space<= n - i){
            cout<< ' ' << endl;
            space = space + 1;
        }
        int stars = 1;
        while(stars<=i){
            cout<< 'x';
            stars = stars + 1;
        }
        cout << endl;
        i = i + 1;

    }
}