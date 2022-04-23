#include<stdio.h>
int main()
{
       	FILE *fp;
        char c[30];
	fp=fopen("samplehli.txt","w");
	printf("Enter the string to place into file:\n");
	scanf("%s",c);
	fputs(c,fp);
	fclose(fp);
	fp=fopen("samplehli.txt","r");
	printf("Data in the file:\n");
	fgets(c,10,fp);
	printf("%s",c);
	fclose(fp);
}
