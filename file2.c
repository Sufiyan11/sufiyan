#include<stdio.h>
struct student
{
	int roll;
	char name[20];
	float ht;
};
int main()
{
	struct student s[10];
	FILE *fp;
	char ch;
	fp=fopen("student.txt","a");
	int n,i;
	printf("Enter no.of student records:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the details of %d student:\n",i+1);
		printf("Roll no:");
		scanf("%d",&s[i].roll);
		printf("Name:");
		scanf("%s",s[i].name);
		printf("Height:");
		scanf("%f",&s[i].ht);
		fprintf(fp,"%d || %s || %.2f\n",s[i].roll,s[i].name,s[i].ht);
	}
	fclose(fp);
	fp=fopen("student.txt","r");
	printf("Details of student:\n");
	ch=fgetc(fp);
	while(ch!=EOF)
	{
		fputc(ch,fp);
		ch=fgetc(fp);
	}
}




