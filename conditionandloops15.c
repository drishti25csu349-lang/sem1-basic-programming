  int age;
  char nation;
  printf("ENTER THE AGE :");
  scanf("%d",&age);
printf("ENTER THE NATIONALITY : (I for INDIAN)\n");
  scanf(" %c",&nation);
if (age>=18 && nation == 'I'){
printf("Yor are eligible.");
  }
 else printf("You are not eligible.");
