#include<iostream>
using namespace std;
int stringLength(char input[]){
    int count = 0;
    for( int i = 0; input[i]!='\0'; i++){
          count++;
    }
    return count;
}
void stringReverse(char input[]){
    int i = 0; int len = stringLength(input);
    int j = len -1 ;
    while(i<j){
        //    char temp;
        //    temp = input[i];
        //    input[i]= input[j];
        //    input[j]= temp;
        //    i++;
        //    j--;
        swap(input[i] , input[j] ) ;
        i++;
        j--;
    }
     
}
int main(){
    char name[100];
    cin.getline(name,30);
    cout<<name<<endl;
    stringLength(name);
    stringReverse(name);
    cout<<name<<endl;
}