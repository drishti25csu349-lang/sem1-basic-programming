 #include<stdio.h>
 #include<math.h>
int main(){
    int base,perpendicular,longestside;
    printf("Enter the base of the triangle:");
    scanf("%d",&base);

    printf("Enter the base of the triangle:");
    scanf("%d",&perpendicular);
     longestside=sqrt(base*base+perpendicular*perpendicular);
     printf("%d is the longest side of the triangle",longestside);
    return 0;
}
