
 #include<stdio.h>
 int main(){
  int i=1,num;
  printf("Enter the number for table :\n");
  scanf("%d",&i);
  for ( num=1;num<=10;num++ ) {
    printf("%d*%d = %d\n", i,num,num*i);
  }
  
  return 0;
 }
