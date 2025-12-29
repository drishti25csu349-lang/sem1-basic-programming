#include<iostream>
using namespace std ;
int sumn(int a){
int sum = 0 ;
while (a > 0){
sum = sum + a%10;
a = a/10;
}
return sum;
}
int main (){
  int a = 54;
  cout<< sumn(a) << endl;
 return 0 ;
}
