 #include<stdio.h>
 int main(){
  int marks;
  printf("Enter the marks of the student:\n");
  scanf("%d",&marks);
  if (marks<=100){
     if  (marks <= 100 && marks >= 75)printf("IN SECTION A");
       else if  (marks <= 75&& marks >= 50)printf("IN SECTION B");
    else if  (marks <= 50 && marks >= 25)printf("IN SECTION C");
   else if  (marks <= 25 && marks >= 0)printf("FAILED");
  }
  else {printf("invalid pls enter some vzlue in between 0 to 100:");}
  return 0;
 }
