//Example Of ftell() & fseek() And Opening File In Both Read And write Mode
#include<stdio.h>
main()
{
FILE*fp;
int ch;
clrscr();
fp=fopen("file.txt","w+");
if(fp==NULL)
{
printf("\nError In Opening File");
exit(1);
}
//Writting A To Z In The File
for(ch='A';ch<='Z';ch++)
{
fputc(ch,fp);
}
printf("\nCurrent File Pointer's Position :%d",ftell(fp));
//Reaing File From The Beginning
fseek(fp,0,SEEK_SET);
printf("\nText From Beginning :\n");
while( (ch=fgetc(fp))!=EOF)
{
printf(" %c",ch);
}
fseek(fp,-10,SEEK_END);
printf("\nAfter -10 Bytes From SEEK_END,file pointer's position :%d",ftell(fp));
printf("\nText from -10 bytes backward :\n");
while( (ch=fgetc(fp))!=EOF)
{
printf(" %c",ch);
}
fclose(fp);
getch();
}