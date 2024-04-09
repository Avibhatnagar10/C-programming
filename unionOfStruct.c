#include<stdio.h>
#include<string.h>

struct person{
    char name[50];
    int age;

};

struct employee{
    int emp_id;
    float salary;
};

union data{
    struct person p;
    struct employee e;
};


int main(){
    union data info;

    strcpy(info.p.name, "Avii");
    info.p.age=20;

    printf("Person info: \n");
    printf("Name: %s\n", info.p.name);
    printf("Age: %d\n",info.p.age);

    info.e.emp_id= "200310";
    info.e.salary=800000.0;

    printf("Employee info: \n");
    printf("Employee_id: %d\n", info.e.emp_id);
    printf("Employee salary: %f\n", info.e.salary);

    return 0;


}