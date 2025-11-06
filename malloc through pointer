// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
struct Student{
    int roll;
    char name[50];
};
int main () {
    struct Student *ptr;
    ptr = (struct Student*)malloc(sizeof(struct Student));
    if (ptr==NULL){
        printf("meromry allocation failed\n");
        return 0;
        
    }
    printf ("ënter Roll no.");
    scanf("%d",&ptr->roll);
    printf("enter name :");
    scanf("%s",&ptr->name);
    
    printf("\nstudent reord:\n");
    printf("roll:%d\n name %s \n",ptr->roll,ptr->name);
    
    free(ptr); //free allocation meomery
    return 0;
}
