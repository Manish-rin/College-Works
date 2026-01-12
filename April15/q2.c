// Display students marks and gender using structure

#include <stdio.h>
int opt;
struct students{
    char name[30];
    float marks;
    char gender[30];
};

struct students s[2];
int main(){
    for (int i = 0; i < 2; i++){
        printf("Enter the name of student%d: ", i + 1);
        scanf(" %[^\n]",s[i].name);

        printf("Enter the marks of student%d: ", i + 1);
        scanf("%f",&s[i].marks);

        printf("Enter the gender of student%d: ", i + 1);
        scanf(" %[^\n]",s[i].gender);

        printf("\n");
    }

    //Ask user to choose whose details he want to see
    printf("Whose details you want to see? (eg Student1, student2,etc):\n");
    printf("Enter the serial number of the student to display his/her details: ");
    scanf("%d",&opt);

    //Display details
    printf("\n--------DETAILS---------\n");
    printf("Name: %s\nMarks: %f\nGender: %s",s[opt-1].name,s[opt-1].marks,s[opt-1].gender);
}
