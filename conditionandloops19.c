 #include<stdio.h>

int main(){
  float quantity, unitprice,amount;
  printf("enter the quantity of the purchase:"),
  scanf("%f",&quantity);
  printf("enter the unit price of the purchase:"),
  scanf("%f",&unitprice);
  amount = (quantity*unitprice)-(quantity*unitprice)*0.2;
  printf("%f is the final amount after discount",amount);
  return 0;
}
