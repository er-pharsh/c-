#include<iostream>
#include<cmath>
using namespace std;

// void greet(){
//  cout << "Hello world\n";
//  cout << "How are you" << endl;
// }

// int sum(int a ,int b){
//  int s = a + b;
//  return s;
// }

int fact(int x){
 int f = 1;
 for (int i=1 ; i<=x ; i++){
  f *= i;
 }
 return f;
}

int main(){
 // greet();
 // cout << sum(5 , 5);

 // cout << sqrt(400) << endl;
 // cout << cbrt(8) << endl;
 // cout << min(4,8) << endl;
 // cout << max(4,8) << endl;
 // cout << pow(2,4) << endl;

 cout << fact(5);

 return 0; 
}