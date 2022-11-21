#include<stdio.h>
int main()
{
    float percentage,Total_marks,data_structure,artificial_intelijence,cloud_computing,machine_learning,c_language;
    printf("Give marks for five subjects in examination\n");
    scanf("%f%f%f%f%f",&data_structure,&artificial_intelijence,&cloud_computing,&machine_learning,&c_language);
    Total_marks=data_structure+artificial_intelijence+cloud_computing+machine_learning+c_language;
    percentage=(Total_marks/500)*100;
    if(percentage>33)
    printf("Student passed");
    else
    printf("Student failed");
    return 0;
}