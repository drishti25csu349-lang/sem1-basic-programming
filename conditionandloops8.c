 #include<stdio.h>
 #include<math.h>

int main(){
  int marks;
  printf("Enter the marks :(maximum 100)");
  scanf ("%d",&marks);
 
  if ( marks>=75){
    
    printf("passed");
  }
  else if  ( marks<75){
   
     printf("failed");

  }
 else printf("not valid"); 
  return 0;
}
