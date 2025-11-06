#include <stdio.h>
struct Student {
    int roll;
    char name[50];
    float marks;

};

int main() {
    struct Student s1;
    printf("enter roll no:");
    scanf("%d",&s1.roll);
    printf("enter name :");
    scanf("%s",&s1.name);
    printf("enter marks :");
    scanf("%f",&s1.marks);
    printf("name :%s\n roll no. :%d\n marks :%.2f\n",s1.name,s1.roll,s1.marks);

    return 0;
}
