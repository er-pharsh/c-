#include<iostream>
using namespace std;

int main(){
 // int num;
 // cout << "Enter the positive number :- ";
 // cin >> num;
 // if(num % 2 == 0){
 //  cout << "Integer is Even.";
 // }
 // else{
 //  cout << "Integer is Odd.";
 // }

 // int l;
 // cout << "Enter the length of rectangle :- ";
 // cin >> l;

 // int b;
 // cout << "Enter the breadth of rectangle :- ";
 // cin >> b;

 // int area = l*b;
 // int perimeter = 2*(l+b);

 // if (area > perimeter){
 //  cout << "Area is greater than perimeter.";
 // }
 // else{
 //  cout << "Primeter is greater than area.";
 // }

 //least number within 3 integer

 int a , b , c;

 cout << "Enter the first number :- ";
 cin >> a; 

 cout << "Enter the second number :- ";
 cin >> b;

 cout << "Enter the third number :- ";
 cin >> c;

 if (a<b && a<c){
  cout << to_string(a) + " A is least number.";
 }
 else if (b<a && b<c){
  cout << to_string(b) + " B is the least.";
 }
 else {
  cout << to_string(c) + " C is the least.";
 }

 return 0;
}