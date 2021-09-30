#include<stdio.h>
#include<conio.h>
#include<string.h>
struct emp
{char name[30],depname[30];
int empno,salary;
};
void main()
{struct emp employee[20];
int n,i;
printf("\nenter the number of employed in organization(<=20):");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	printf("\n enter person%d\n name:",i+1);
	scanf("%s",employee[i].name);
	printf("\n employee no:");
	scanf("%d",&employee[i].empno);
	printf("\n employee %d\n departmentname:",i+1);
	scanf("%s",employee[i].depname);
	printf("\n employee salary:");
	scanf("%d",&employee[i].salary);
}
printf("\n employees info\n");
for(i=0;i<n;i++)
{
	printf("\nperson%d\n name:%s",i+1,employee[i].name);
	printf("\n employee no:%d",employee[i].empno);
	printf("\n employee departmentname:%s",i+1,employee[i].depname);
	printf("\n employee salary:%d",employee[i].salary);
}
getch();
}
