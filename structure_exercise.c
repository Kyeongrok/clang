#include <stdio.h>

typedef struct factory {

    char *name;
    int count;


} Factory;


int main(){
    Factory factory;

    factory.name = "samjin";
    factory.count = 40;

    printf("%s %d", factory.name, factory.count);

}

