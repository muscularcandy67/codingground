#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<cmath.h>
using namespace std;
int main ()
{
    int i,j;
    for (i=1;i<11;i=i+1)
    {
    for (j=1;j<11;j=j+1) printf("%3d",j*i);
    printf ("\n");
}
system ("pause");
}
