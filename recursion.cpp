#include<iostream>
using namespace std;

// void print(int x){
//  if (x == 0){
//   return;
//  }
//  cout << x << endl;
//  print(x-1);
// }

// void print(int x){
//  if (x == 0){
//   return;
//  }
//  print(x-1);
//  cout << x << endl;
 
// }

// int sum(int x){
//  if (x == 0){
//   return 0;
//  }
//  return x + sum(x-1);
// }

// int fect(int x){
//  if (x == 0){
//   return 1;
//  }
//  return x*fect(x-1);
// }

// int power(int a , int b){
//  if (b == 0){
//   return 1;
//  }
//  return a *  power(a , b-1);
// }

// int fibo(int x){
//  if (x == 1 || x == 2){
//   return 1;
//  }
//  else if (x == 0){
//   return 0;
//  }
//  return fibo(x-2) + fibo(x-1);
// }

int powerLog(int a , int b){
 int c = (b/2);
 if (c == 0){
  return 1;
 }
 return a * powerLog(a , c) * powerLog(a , c);
}

int main(){
 int n;
 cout << "Enter the number n :- ";
 cin >> n;

 int m;
 cout << "Enter the number m :- ";
 cin >> m;

 // print(n);

 // cout << sum(n);

 // cout << fect(n);

 // cout << power(n,m);

 // cout << fibo(n);

 cout << powerLog(n , m);

 return 0;
}