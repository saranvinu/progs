#include<stdio.h>
#include<string.h>
int main()
{
char a[]="hai";
char b[]="iah";
int i,t1=0,t2=0,l1,l2,f;
l1=strlen(a);
l2=strlen(b);
if(l1!=l2)
{
printf("Not");
}
else{
for(i=0;i<l1-1;i++)
{
if(a[i]==a[i+1])
t1=1;
else
t1=0;
if(b[i]==b[i+1])
t2=1;
else
t2=0;
if(t1==t2)
f=1;
else
f=0;
}
if(f==1)
printf("isomorphic");
else
printf("not");
}
return 0;
}

