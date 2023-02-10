#include<iostream>
using namespace std;
void printarray(int input[],int size){
    for(int i = 0; i < size ; i++){
        cout<<input[i]<<" ";
    }
}
void alternate(int input[],int size){
    for(int i = 0;  i< size ; i+=2){
    
        if(i+1<size) {
    
            swap(input[i],input[i+1]);
            }
}
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