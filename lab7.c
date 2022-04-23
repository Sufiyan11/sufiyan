#include<stdio.h>
int main()
{
      FILE *fp;
      char ch;
      fp=fopen("sam.txt","a");
      fscanf(fp,"\n");
      printf("Enter the text:\n");
      ch=getchar();
      while(ch!=EOF)
      {
	      fputc(ch,fp);
	      ch=getchar();
	}
      fclose(fp);
      fp=fopen("sam.txt","r");
      printf("\nThe data in the file:\n");
      ch=fgetc(fp);
      while(ch!=EOF)
      {
	      putchar(ch);
	      ch=fgetc(fp);
      }
      fclose(fp);
}
