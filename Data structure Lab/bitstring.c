#include<stdio.h>
#include<string.h>

void uni(char*,char*,char*);
void inter(char*,char*,char*);
void diff(char*,char*,char*);

void main(){
char s1[20],s2[20],s3[20];
int a;
printf("\nenter the 1st bitstring:");
scanf("%s",s1);

printf("\nenter the 2nd bitstring:");
scanf("%s",s2);

do{
printf("\n1.union\n2.intersection\n3.difference\n0.Exit\nenter your option:");
scanf("%d",&a);

switch(a){

case 1:uni(s1,s2,s3);
	printf("\nunion is:%s",s3);
	break;
case 2:inter(s1,s2,s3);
	printf("\nintersection is:%s",s3);
	break;
case 3:diff(s1,s2,s3);
	printf("\ndifference is:%s",s3);
	break;

}
}
while(a !=0);
}



void uni(char*s1,char*s2,char*s3){
int i,l;
l=strlen(s1);
for(i=0;i<l;i++)
{
if(s1[i]=='0' && s2[i]=='0')
	s3[i]='0';
else
	s3[i]='1';
}
s3[i]='\0';
}


void inter(char*s1,char*s2,char*s3){
int i,l;
l=strlen(s1);
for(i=0;i<l;i++)
{
if(s1[i]=='1' && s2[i]=='1')
{
	s3[i]='1';
}
else
{
	s3[i]='0';
}
}
s3[i]='\0';
}

void diff(char*s1,char*s2,char*s3){
int i,l;
l=strlen(s1);
for(i=0;i<l;i++)
{
if(s1[i]=='1' && s2[i]=='0')
	s3[i]='1';
else
	s3[i]='0';
}
s3[i]='\0';
}







