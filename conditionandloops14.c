
int main(){
  int size;
  
  printf("ENTER THE SIZE :");
  scanf("%d",&size);

  if ( size%5==0 && size%3==0){
    printf("Yor are given the discount.");
  }
 else printf("You are not given the disount.");
  return 0;
}
