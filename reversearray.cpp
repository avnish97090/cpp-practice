#include<iostream>
using namespace std;
void printArray(int input[] , int n ){
    for(int i = 0 ; i < n ; i++){
        cout<<input[i] << " " ;
    }
    cout<<endl;
}
void reverse(int input[], int n){
    int i = 0, j = n-1;
    while(i<j){
        int temp = input[i];
        input[i]= input[j];
        input[j]= temp;
        i++;
        j--;

    }

}
int main(){
    int array[10] = {3,4,52, 34, 87} ;
    for(int i = 0; i <5  ; i++){
        cout<< array[i]<< " ";
    }
    cout<<endl;
    cout<<" after reversing array is "<<endl;
reverse(array, 5);
printArray(array , 5);
}