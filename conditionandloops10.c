 #include<stdio.h>
 #include<math.h>

int main(){
  int number1 , number2,cube,square,squareroot ;
  char operation;
  printf("Enter the required number 1:");
  scanf ("%d",&number1);
  printf("Enter the required operation to be done (* for square,sqrt for square root ,*** for cube\n)");
  scanf (" %c",&operation);
  if ( operation =='*'){
    square = number1*number1;
    printf("%d",square);
  }
  else if  ( operation =='***'){
    cube = number1*number1*number1;
     printf("%d",cube);

  }
  else if  ( operation == 'sqrt'){
    sqrt(number1) ;
     printf("%d",squareroot);
  }
  
  
  return 0;
}
