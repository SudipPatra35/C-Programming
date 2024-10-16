#include <stdio.h>
int mergesort(int a[], int lb, int ub)
{
    int mid;
    if (lb < ub)
    {
        mid = (lb + ub) / 2;
        mergesort(a, lb, mid);
        mergesort(a, mid + 1, ub);
        merge(a, lb, ub);
    }
     return 0;
}

int merge(int *a, int i, int j)
{
    int k, b[50], mid, l, start;
    start = i;
    mid = (i + j) / 2;
    k = mid + 1;
    while (i <= mid && k <= j)
    {
        b[l++] = (a[i] >= a[k] ? a[k++] : a[i++]);
        if (i > mid)
        {
            while (k <= j)
                b[l++] = a[k++];
        }
        else
            while (i <= mid)
                b[l++] = a[i++];
        for (l = start; l <= j; l++)
        {
            a[l] = b[l];
        }
    }
    return 0;
}
