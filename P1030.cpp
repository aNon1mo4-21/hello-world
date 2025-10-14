#include <stdio.h>

int read(int a[], int size);
double average(int a[], int size);
int print(int a[], int size, double average);

int main()
{
    int N;
    scanf("%d", &N);
    int a[N];
    int n = read(a, N);
    n = print(a, n, average(a,n));
    printf("%d\n", n);
}

int read(int a[], int size)
{
    for ( int i=0; i<size; i++ ) {
        scanf("%d", &a[i]);
    }
    return size;
}

double average(int a[], int size)
{
    double s = 0;
    for ( int i=0; i<size; i++ ) {
        s += a[i];
    }
    return s/size;
}
int print(int a[], int size, double average){
    int c=0;
    for(int i=0;i<size;i++){
        if(a[i]>average){
            printf("%d ",a[i]);
            c++;
        }
    }
    return c;
}