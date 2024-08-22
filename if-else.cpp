#include<iostream>
using namespace std;

int main(){
 int num;
 cout << "Enter the positive number :- ";
 cin >> num;
 if(num % 2 == 0){
  cout << "Integer is Even.";
 }
 else{
  cout << "Integer is Odd.";
 }

 return 0;
}