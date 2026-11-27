#include <stdio.h>
#include "matrixfunc.h"

int main()
{
int str=0;
int stlb=0;
char get;
int matrix[MAXSIZE][MAXSIZE];

while(1)
{
printf("\na. Задать размер матрицы\n");
printf("b. Заполнить матрицу\n");
printf("c. Представление матрицы\n");
printf("d. Поиск индексов минимального элемента\n");
printf("e. Сумма элементов, значения которых выше k\n");
printf("f. Поиск последнего положительного элемента при обходе по строкам\n");
printf("g. Выход\n");
printf("\nВведите пункт: ");

    if(scanf(" %c",&get)!=1)
break;

switch(get)
{
    case 'a':
sizem(&str,&stlb);
printf("\n\nВаш размер: %d x %d\n",str,stlb);
break;

    case 'b':
if(str>0 && stlb>0)
zapoln(str,stlb,matrix);
else
printf("\n\nСначала задайте размер матрицы!\n\n");
break;

case 'c':
    if(str>0 && stlb>0)
    show(str,stlb,matrix);
else
printf("\n\nСначала задайте размер матрицы!\n\n");
break;   

    case 'd':
size_t minrow=0,mincol=0;

if(minmat(&matrix[0][0],str,stlb,&minrow,&mincol)==0)
printf("\n\nМинимум находится: [%zu][%zu]\n\n",minrow,mincol);
break;
    case 'e':
long long sum=0;
int k;

printf("Введите k: ");
scanf("%d",&k);

summat(&matrix[0][0],str,stlb,MAXSIZE,k,&sum);
printf("\n\nСумма: %lld\n\n",sum);
break;

    case 'f':
size_t lastrow=0,lastcol=0;

if(lastpos(&matrix[0][0],str,stlb,&lastrow,&lastcol)==0)
    printf("\n\nПоследний положительный: [%zu][%zu]\n\n",lastrow,lastcol);
else
    printf("\n\nПоложительных элементов нет\n\n");
break;

    case 'g':
return 0;
    default:
printf("\n\nТакой пункт отсутствует\n\n");
break;



}
}

return 0;
}