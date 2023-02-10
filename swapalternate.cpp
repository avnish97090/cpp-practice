#include<iostream>
using namespace std;
void printarray(int input[],int size){
    for(int i = 0; i < size ; i++){
        cout<<input[i]<<" ";
    }
    cout<<endl;
}
void alternate(int input[],int size){
    for(int i = 0; i <= size-2 ; i+=2){
    

    
            swap(input[i],input[i+1]);}
    
    cout<<endl;
}
int main(){
    int even[8]= {23,32,43,45,78,34,33,56};
    int odd[5] = {12,23,45,23,99};
       alternate(even , 8);
       alternate(odd , 5);
       printarray(even , 8);
       cout<<endl;
       printarray(odd ,  5);

}