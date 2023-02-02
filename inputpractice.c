// #include<stdio.h>

// int main(){
//     char string[100];
//     printf("Enter: ");
//     fgets(string,100,stdin);
//     printf("Output: %s",string);
//     return 0;
// }
// #include<stdio.h>

// int main(){
//     char input[100];
//     scanf("%[^\n]%*c", &input);
//     printf(input);
//     return 0;
// }
#include <stdio.h>
int main()
{
   char str[20];
   gets(str);
   printf("%s", str);
   return 0;
}