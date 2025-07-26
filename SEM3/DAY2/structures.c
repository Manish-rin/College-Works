#include <stdio.h>
void students_marks(){
struct data{
    char name[30];
    int age;
    struct {
        int eng;
        int maths;
        int dbms;
        int total;
    }marks;
};

struct data s[10];
for(int i = 0; i<10;i++){
    printf("\nEnter the name: ");
    scanf("%s",&s[i].name);
    printf("\nEnter the age: ");
    scanf("%d",&s[i].age);
    printf("\nEnter the marks for eng: ");
    scanf("%d",&s[i].marks.eng);
    printf("\nEnter the marks for maths: ");
    scanf("%d",&s[i].marks.maths);
    printf("\nEnter the marks for dbms: ");
    scanf("%d",&s[i].marks.dbms);
    s[i].marks.total = s[i].marks.eng + s[i].marks.maths + s[i].marks.dbms;
}
int highest_student;
int highestmark = s[0].marks.total;
for(int j = 0;j<10;j++){
    if (highestmark < s[j].marks.total){
        highestmark = s[j].marks.total;
        highest_student = j;
    }
}
printf("\nThe student with highest marks is %s scoring of total %d",s[highest_student].name,highestmark);
}

int main(){
    students_marks();
}
