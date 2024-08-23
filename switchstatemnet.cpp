#include<iostream>
using namespace std;

int main(){
 int a , b;

 cin >> a;

 char op;
 cin >> op;

 cin >> b;

 switch(op){

  case '+':
   cout << a + b;
   break;

  case '-':
   cout << a - b;
   break;

  case '*':
   cout << a * b;
   break;

  case '/':
   cout << a / b;
   break;

  default :
   cout << "Invalid operator.";
 }


 return 0;
}