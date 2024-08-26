#include<iostream>
using namespace std;

// void print(int x){
//  if (x == 0){
//   return;
//  }
//  cout << x << endl;
//  print(x-1);
// }

void print(int x){
 if (x == 0){
  return;
 }
 print(x-1);
 cout << x << endl;
 
}

int main(){
 int n;
 cout << "Enter the number :- ";
 cin >> n;
 print(n);
}