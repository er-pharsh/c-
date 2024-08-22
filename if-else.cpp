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

 int l;
 cout << "Enter the length of rectangle :- ";
 cin >> l;

 int b;
 cout << "Enter the breadth of rectangle :- ";
 cin >> b;

 int area = l*b;
 int perimeter = 2*(l+b);

 if (area > perimeter){
  cout << "Area is greater than perimeter.";
 }
 else{
  cout << "Primeter is greater than area.";
 }

 return 0;
}