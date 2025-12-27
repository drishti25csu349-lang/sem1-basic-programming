#include<stdio.h>
 #include<math.h>

int main(){
  int number,day;
  
  printf("ENTER THE NUMBER OF THE RESPECTIVE DAY:");
  scanf( " %d",&day);
  if ( day==1) {
    printf("the given day is monday .");}
    else if ( day == 2){
 printf("the given day is tuesday .");}
 else if ( day == 3){
 printf("the given day is wednesday .");}
 else if ( day == 4){
 printf("the given day is thursday .");}
 else if ( day == 5){
 printf("the given day is friday .");}
 else if ( day == 6){
 printf("the given day is saturday .");}
 else if ( day == 7){
 printf("the given day is sunday .");}
 else {printf("invalid please enter the value between 1 to 7");}

  return 0;
 }
