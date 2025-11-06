#include <stdio.h>

struct Student {
    int roll;
    
    char name[50];
    float marks;

};
int main(){
    struct Student s1 = {101 ,"ravi",85.5};
    struct Student*ptr;
    
    ptr =&s1;
    printf("using pointer to access structure:\n");
      printf("roll:%d\n",ptr->roll);
        printf("name:%s\n",ptr->name);
          printf("marks:%f\n",ptr->marks);
          return 0;
}
