#include <stdio.h>
#include <cs50.h>

int main(void){

    int n = get_int("Size:");
    int count =0;

    do {
        for (int i=0; i<n; i++){
            printf("#");
        }
        printf("\n");
        count++;
    }
    while(count < n);
}