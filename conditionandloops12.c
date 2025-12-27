
 #include<math.h>

int main(){
  int number,a,b,c;
  
  printf("ENTER b:");
  scanf( " %d",&number);
  
  printf("ENTER c:");
  scanf( " %d",&number);
  
  printf("ENTER a:");
  scanf( " %d",&number);

  if ( sqrt(b*b-4*a*c ==0)) {
    printf("the given roots are real .");
  }
 else if ( sqrt(b*b-4*a*c > 0)){
 printf("the given  is real and equal .");}
else if (sqrt(b*b-4*a*c < 0)){
  printf("the given  is imaginary .");

}
