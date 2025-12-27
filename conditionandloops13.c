 #include<stdio.h>
 #include<math.h>

int main(){
  int year;
  
  printf("ENTER THE TOTAL NUMBER OF DAYS IN THE YEAR :");
  scanf( " %d",&year);

  if ( year==366) {
    printf("the given year is a leap year .");
  }
 else if ( year == 365){
 printf("the given  is not a leap year .");}
else if (year > 366 || year < 365){
  printf("invalid .");

}
  return 0;
}
