#include<stdio.h>
int main(int a,char *b[])
{
	FILE *f1,*f2;
	char ch;
	if(a<3)
	{
		printf("Given arguments are not sufficient");
		return 0;
	}
	f1 = fopen(b[1],"r");
	if(f1==NULL)
	{
		printf("Unable to open the file.");
		return 0;
	}
	f2 = fopen(b[2],"w");
	ch=fgetc(f1);
	while(ch!=EOF)
	{
		fputc(ch,f2);
		ch=fgetc(f1);
	}
	fclose(f2);
	f2=fopen(b[2],"r");
	printf("The copied data:\n");
	ch=fgetc(f2);
	while(ch!=EOF)
	{
		putchar(ch);
		ch=fgetc(f2);
	}
	fclose(f2);
}
