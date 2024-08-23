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

 // int n;
 // cout << "Enter the number :- ";
 // cin >> n;

 // int a = 1;

 // for (int i=1 ; i<=n ; i++){
 //  cout << a << " ";
 //  a = a * 2;
 // } 

 // WAP find the highest fector of the given number

 // int n;
 // cout << "Enter the number :- ";
 // cin >> n;

 // int a;

 // // for (int i=1 ; i<n/2 ; i++){
 // //  if (n%i == 0){
 // //   a = i;
 // //  }
 // // }

 // for (int i=n/2 ; i>=1 ; i--){
 //  if (n%i == 0){
 //   a = i;
 //   break;
 //  }
 // }
 // cout << "The highest fector is :- " << a ;

 // Number is prime or composite

 // int n;
 // cout << "Enter the number :- ";
 // cin >> n;

 // bool flag = true;

 // for (int i=2 ; i<=n/2 ; i++){
 //  if (n%i == 0){
 //   flag = false;
 //   break;
 //  }
 // }

 // if (n == 1){
 //  cout << "Neither prime nor composite.";
 // }
 // else if (flag == true){
 //  cout << "Prime number.";
 // }
 // else {
 //  cout << "Composite number.";
 // }

 // int n;
 // cout << "Enter the number :- ";
 // cin >> n;

 // for (int i=1 ; i<=n ; i++){
 //  if (i%2 == 0){
 //   continue;
 //  }
 //  cout << i << " ";
 // }

 // WHILE LOOP

 // int i = 1;
 // while(i<=10){
 //  cout << i << " ";
 //  i++;
 // }

 // DO WHILE LOOP

 // int i = 5;
 // do{
 //  cout << i << " ";
 //  i--;
 // }while(i>1);

 // NUMBER OF THE INTEGER

 // int n;
 // cout << "Enter the number :- ";
 // cin >> n;

 // int count = 0;

 // while(n != 0){
 //  n = n/10;
 //  count++;
 // }
 // cout << "Number of digit is " << count;

 // SUM OF INTEGER DIGITS

 // int n;
 // cout << "Enter the number :- ";
 // cin >> n;
 
 // int sum = 0;

 // for (int i=n ; n!=0 ; n/=10){
 //  int l = n%10;
 //  sum += l;
 // }

 // cout << "Sum of the integer is " << sum;

 // SUM OF THE EVEN NUMBER IN DIGITS

 // int n;
 // cout << "Enter the number :- ";
 // cin >> n;

 // int sum = 0;

 // while(n != 0){
 //  int l =n%10;
 //  n = n/10;
 //  if (l%2 == 0){
 //   sum += l;
 //  }
 // }
 // cout << "Number of digit is " << sum;

 // PRINT THE REVERSE OF THE NUMBER

 // int n;
 // cout << "Enter the number :- ";
 // cin >> n;
 // int di = n; 
 // int rv = 0;

 // while(n!=0){
 //  int l = n%10;
 //  n /= 10;

 //  rv = rv * 10;
 //  rv = rv + l;

 // }

 // cout << "The reverse digit is " << rv << endl;
 // cout << "Sum of teo digits are " << di << " + " << rv << " :- " << di+rv;

 // FIND THE FECTORIAL OF THE NUMBER

 // int n;
 // cout << "Enter the number :- ";
 // cin >> n;
 // int fec = 1;
 // while (n>=1){
 //  fec = fec * n;
 //  cout  << fec << " ";
 //  n--;
 // }
 // cout << endl;
 // cout << "The fectorial of the number is :- " << fec;

 // ASCII VALUE AND CHARACTER

 // int char ch;

 // for (int i=65 ; i<=90 ; i++){
 //  cout << i << " " << char(i) << endl;
 // }

 return 0;
}