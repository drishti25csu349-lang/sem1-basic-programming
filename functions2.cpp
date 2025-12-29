#include<iostream>
using namespace std;
int bi(int a, int b) {
    int mul = 1;
    for (int i = 1; i <= b; i++) {
        mul = mul * (a - b + i) / i;
    }
    return mul;
}
int main (){
  int a = 4;
  int b = 2;
cout<<bi(a,b)<<endl;
return 0;
}
