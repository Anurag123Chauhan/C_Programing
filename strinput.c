// Method 3
// #include<stdio.h>

// int main(){
//     char buffer[100];
//     printf("Enter : \n");
//     scanf("%[^\n]%*c",&buffer);
//     printf("TGH : %s",buffer);
//     return 0;
// }
// Method 1
// #include <stdio.h>
// int main()
// {
//    char str[20];
//    gets(str);
//    printf("%s", str);
//    return 0;
// }
// Method 2
// #include <stdio.h>
// int main()
// {
//    char str[20];
//    fgets(str, 20, stdin);
//    printf("%s", str);
 
//    return 0;
// }
#include<stdio.h>

int main(){
    char anurag[100];
    printf("Enter: ");
    gets(anurag);
    printf("Output: %s",anurag);
    return 0;
}