#ifndef MATRIXFUNC_H
#define MATRIXFUNC_H
#define MAXSIZE 100
void sizem(int *str, int *stlb);
void zapoln(int str, int stlb, int matrix[][MAXSIZE]);
void show(int str,int stlb,int matrix[][MAXSIZE]);
int minmat(int *matemp,size_t str1,size_t stlb1,size_t *ministr1, size_t *ministlb1);
int summat(int *matemp,size_t str1,size_t stlb1,size_t kim,int k,long long *sum);
int lastpos(int *matemp,size_t str1,size_t stlb1,size_t *laststr1,size_t *laststlb1);
#endif