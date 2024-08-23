#include<iostream>
using namespace std;

int main(){
 // for (int i=1 ; i<=10 ; i++){
 //  cout << i << " Hello World" << endl ;
 // }

 // for (int i=1 ; i<=100 ; i=i+2){
 //  cout << i << " ";
 // }

 // int n;
 // cout << "Enter the number :- ";
 // cin >> n;

 // for (int i=1 ; i<=10 ; i++){
 //  cout << n << " * " << i << " = " << n*i << endl;  
 // }

 // AP a = a + (n-1)d     3 6 9 12 15 18........

 // int n;
 // cout << "Enter the number :- ";
 // cin >> n;

 // int a = 1;

 // for (int i=1 ; i<=n ; i++){
 //  cout << a << " ";
 //  a = a + 2;
 // }

 // GP 1 2 4 8 16 32.......

 int n;
 cout << "Enter the number :- ";
 cin >> n;

 int a = 1;

 for (int i=1 ; i<=n ; i++){
  cout << a << " ";
  a = a * 2;
 } 

 return 0;
}