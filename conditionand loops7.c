 #include<stdio.h>
 int main(){
  int side1,side2,side3;
  printf("Enter the side1 :\n");
  scanf ("%d",&side1);
 printf("Enter the side2 :\n");
  scanf (" %d",&side2);
  printf("Enter the side3 :\n");
  scanf (" %d",&side3);
  if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {

  if (side1 == side2 && side2 == side3 && side3 == side1){
    
    printf("equilateral");
  }
  else if  (side1 != side2 && side1!= side3 && side2 != side3 ){
   
     printf("scalene");

  }
 else if (side1==side2 || side2==side3 || side1==side3){
  printf("isocless");
 }}
  return 0;
}
