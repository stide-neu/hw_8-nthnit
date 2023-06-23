#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student 
{
    char name[20];
    int eng;
    int math;
    int phys;
    char grade;
};
void input(struct student hocsinh[]){
    for (int i = 0; i < 4; i++)
    {
        printf("Nhap du lieu cho sinh vien thu %d:\n", i + 1);
        printf("Ho ten: "); fflush(stdin);
        gets(hocsinh[i].name);
        printf("Diem Tieng Anh: "); fflush(stdin);
        scanf("%d", &hocsinh[i].eng);
        printf("Diem Toan: "); fflush(stdin);
        scanf("%d", &hocsinh[i].math);
        printf("Diem Vat Ly: "); fflush(stdin);
        scanf("%d", &hocsinh[i].phys);
    } 
} 
void output(struct student hocsinh[])
    {for (int i = 0; i < 4; ++i) {
        printf("Name: %s\n", hocsinh[i].name);
        printf("Eng: %d\n", hocsinh[i].eng);
        printf("Math: %d\n", hocsinh[i].math);
        printf("Phys: %d\n", hocsinh[i].phys);   
        printf("Grade: %c", hocsinh[i].grade);
        printf("\n");
        printf("------------\n");
}
    }
void grade(struct student hocsinh[])
{
    float mean;
    for (int i = 0; i < 4; i++)
    {
        mean = (hocsinh[i].eng + hocsinh[i].math + hocsinh[i].phys) / 3;
    if (90 <= mean && mean <= 100)
    {
        hocsinh[i].grade = 'S';
    }
    else if (80 <= mean && mean < 90)
    {
        hocsinh[i].grade = 'A';
    }
    else if (70 <= mean && mean < 80)
    {
        hocsinh[i].grade = 'B';
    }
    else if (60 <= mean && mean < 70)
    {
        hocsinh[i].grade = 'C';
    }   
    else hocsinh[i].grade = 'D';

    }
    
};
int main(){
    struct student hocsinh[100] ;
    input(hocsinh);
    grade(hocsinh);
    output(hocsinh);
    
}
