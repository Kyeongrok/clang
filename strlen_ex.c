#include <stdio.h>
#include <string.h>

int strlength(char* buff){
    int i;
    for(i = 0; buff[i] != '\0'; i++);

    return i;
}

int main(){
    char a[10] = "caw";

    printf("%d\n", strlength(a));
    int len = strlen(a);
    printf("%d\n", len);
    return 0;
}

