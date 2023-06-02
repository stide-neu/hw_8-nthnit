#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student 
{
    char name[20];
    int eng;
    int math;
    int phys;
};
void print(struct student hocsinh[]){
    for (int i = 0; i < 4; ++i) {
        printf("Name: %s\n", hocsinh[i].name);
        printf("Eng: %d\n", hocsinh[i].eng);
        printf("Math: %d\n", hocsinh[i].math);
        printf("Phys: %d\n", hocsinh[i].phys);   
        grade(hocsinh[i]);
        printf("\n");
}
}
void grade(struct student hocsinh)
{
    float mean;
    mean = (hocsinh.eng + hocsinh.math + hocsinh.phys) / 3;
    if (90 <= mean && mean <= 100)
    {
        printf("Grade: S");
    }
    else if (80 <= mean && mean < 90)
    {
        printf("Grade: A");
    }
    else if (70 <= mean && mean < 80)
    {
        printf("Grade: B");
    }
    else if (60 <= mean && mean < 70)
    {
        printf("Grade: C");
    }   
    else printf("Grade: D");
};
int main(){
    struct student hocsinh[100] = {{"Jack", 82, 72, 58},{"Young", 77, 82, 79},{"Steeve", 52, 62, 39},{"Mark", 61, 82, 88}};
    print(hocsinh);
    
}
