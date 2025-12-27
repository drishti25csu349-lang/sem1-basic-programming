
#include<stdio.h>
 #include <math.h>
 int main(){
  int a ,b,c ,largest,other1,other2;
  printf("ENTER THE three NUMBERs:");
  scanf("%d %d %d",&a,&b,&c);
  if (a>=b && a>=c){
    printf("%d is the largest number",a);
  largest=a;
 other1 = b;
other2 = c;}
else if (b>=a && b>=c){
    printf("%d is the largest number",b);
  largest=b
other1 = a;
other2 = c;}
else if(c>=b && c>=a){
    printf("%d is the largest number",c);
    largest=c;
    other1 = b;
other2 = a;
  }
 (largest)*(largest) == (other1)*(other1)+(other2)*(other2);
 printf("hypothnus is %d",largest);
  
  return 0;
 }
