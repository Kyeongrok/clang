#include <stdio.h>


void print_row(int num){
    if(num == 0){
        printf("function done\n");
        return;
    }

    printf("2 * %d = %d\n", num, 2 * num);

    print_row(num - 1);

}


int main() {
    printf("ee\n");
    print_row(9);
}


