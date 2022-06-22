#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fptr = fopen("C:/Users/Aryan Raj/Desktop/pps practice/write.txt","w");
    fprintf("fptr","I have PPS exam tomorrow and I am not prepared");
    fclose("fptr");
    puts("Done");
    return 0;
} 