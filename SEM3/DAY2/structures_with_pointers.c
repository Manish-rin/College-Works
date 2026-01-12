#include <stdio.h>
struct data{
    char name[30];
    int id;
    int sales;
};
void employeedetail(struct data *ptr){
    printf("\nENTER THE NAME: ");
    scanf("%s",ptr->name);
    printf("\nENTER THE ID: ");
    scanf("%d",&ptr->id);
    printf("\nENTER THE SALES: ");
    scanf("%d",&ptr->sales);
}

void goodemp(struct data *emp){
    printf("List of employees with sales more than Rs.50000\n");
    for(int i = 0;i<2;i++){
        if(emp[i].sales > 50000){
            printf("NAME: %s, ID: %d,SALES: %d\n",emp[i].name,emp[i].id,emp[i].sales);
        }
    }
}

int main(){
    struct data emp[2];
    for(int i = 0; i<2;i++){
        employeedetail(&emp[i]);
    }
    goodemp(emp);
}
