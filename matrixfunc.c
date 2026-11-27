#include <stdio.h>
#define MAXSIZE 100

// размер
void sizem(int *str, int *stlb)
{
printf("Введите размер матрицы\n");
printf("Кол-во строк: ");
scanf("%d", str);
printf("Кол-во столбцов: ");
scanf("%d", stlb);
}


//заполнение
void zapoln(int str, int stlb, int matrix[][MAXSIZE])
{
    int i = 0;
    int j = 0;

while(i < str)
{
j = 0;

while(j < stlb)
{
printf("Введите элемент [%d][%d]: ", i, j);
scanf("%d", &matrix[i][j]);
j++;
}
i++;
}
}

//Представление
void show(int str,int stlb,int matrix[][MAXSIZE])
{
int i=0;
int j=0;

printf("\nЗначения матрицы:\n");

while(i<str)
{
j=0;
while(j<stlb)
{
printf("%4d",matrix[i][j]);
j++;
}
printf("\n");
i++;
}

i=0;
printf("\nАдреса элементов матрицы:\n");

while(i<str)
{
j=0;
while(j<stlb)
{
printf("%p ",(void*)&matrix[i][j]);
j++;
}
printf("\n");
i++;
}
}

// Поиск индексов минимального элемента
int minmat(int *matemp,size_t str1,size_t stlb1,size_t *ministr,size_t *ministlb1)
{
size_t i=0,j=0;
int min= *matemp;

while(i<str1)
{
j=0;
while(j<stlb1)
{
if(*(matemp+i*stlb1+j)<min)
{
min=*(matemp+i*stlb1+j);
*ministr=i;
*ministlb1=j;
}
j++;
}
i++;
}
    return 0;
}



// Сумма элементов, значения которых выше k
int summat(int *matemp,size_t str1,size_t stlb1,size_t kim,int k,long long *sum)
{
size_t i=0,j=0;
*sum=0;

while(i<str1)
{
j=0;
while(j<stlb1)
{
if(*(matemp+i*kim+j)>k)
*sum+=*(matemp+i*kim+j);
j++;
}
i++;
}
return 0;
}


int lastpos(int *matemp,size_t str1,size_t stlb1,size_t *laststr1,size_t *laststlb1)
{
size_t i=0,j=0;
int found=0;

while(i<str1)
{
j=0;
while(j<stlb1)
{
if(*(matemp+i*stlb1+j)>0)
{
*laststr1=i;
*laststlb1=j;
found=1;
}
j++;
}
i++;
}
if(found==0)
return 1;

return 0;
}