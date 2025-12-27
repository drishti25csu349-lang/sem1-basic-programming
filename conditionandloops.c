 #include<stdio.h>
 #include<math.h>

int main(){
  int number1 , number2, sum, difference,product,quotient ;
  char operation;
  printf("Enter the required number 1:");
  scanf ("%d",&number1);
printf("Enter the required number 2:");
  scanf ("%d",&number2);
  printf("Enter the required operation to be done (+ for addition,- for subtraction,* for multiplication,/for division\n)");
  scanf (" %c",&operation);
  if ( operation =='+'){
    sum = number1+number2;
    printf("%d",sum);
  }
  else if  ( operation =='-'){
    difference = number1-number2;
     printf("%d",difference);

  }
  else if  ( operation =='/'){
    quotient = number1/number2;
     printf("%d",quotient);
  }
  else if  ( operation =='*'){
    product = number1*number2;
     printf("%d",product);
  }
  return 0;
 }
