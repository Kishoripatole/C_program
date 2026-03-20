
// strlen() :finds length of string 
/*#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello";
    printf("Length = %lu", strlen(str));
    return 0;
}*/



//strcpy() :copies one string to another
// #include <stdio.h>
// #include <string.h>

// int main() {
//     char src[] = "Hello";
//     char dest[20];

//     strcpy(dest, src);
//     printf("Copied string: %s", dest);
//     return 0;
// }




// strcat() :concatenate two strings
// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str1[20] = "Hello ";
//     char str2[] = "World";

//     strcat(str1, str2);
//     printf("Concatenated: %s", str1);
//     return 0;
// }



// strcmp() :compares two strings
#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Hello";
    char str2[] = "Hello";

    if (strcmp(str1, str2) == 0)
        printf("Strings are equal");
    else
        printf("Strings are not equal");

    return 0;
}