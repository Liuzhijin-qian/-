#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
float fun (float h )
{
  long t;
  t=(h*1000+5)/10;      /*��������h����1000���ټ�5���൱�ڶ�h�еĵ���λС��������������
                        ����10���丳��һ����������ʱ�Ͱѵ���λС�������ȫ����ȥ*/
  return (float)t/100;  /*����100������2λС��*/
}
void main()
{
  FILE *wf;
  float a;
  system("CLS");
  printf("Enter a: ");
  scanf ("%f",&a);
  printf("The original data is :  ");
  printf("%f\n\n", a);
  printf("The  result : %f\n", fun(a));
/******************************/
  wf=fopen("out.dat","w");
  fprintf(wf,"%f",fun(8.32533));
  fclose(wf);
/*****************************/
}
