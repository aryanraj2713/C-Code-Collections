#include <stdio.h>

struct student{
    int regd;
    char sex[100];
};
int main(){

    struct student s;
    scanf("%d",&s.regd);
    scanf("%c",&s.sex);
    printf("the registration number is : %d\n and %c is name",s.regd,s.sex);
    return 0;

}


