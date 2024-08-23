#include<iostream>
using namespace std;

int main(){
 // for (int i=1 ; i<=10 ; i++){
 //  cout << i << " Hello World" << endl ;
 // }

 // for (int i=1 ; i<=100 ; i=i+2){
 //  cout << i << " ";
 // }

 int n;
 cout << "Enter the number :- ";
 cin >> n;

 for (int i=1 ; i<=10 ; i++){
  cout << n << " * " << i << " = " << n*i << endl;  
 }

 return 0;
}