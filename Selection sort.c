#include <stdio.h>
#include <stdlib.h>

void main()
{
    int array[100],c,n,d,position,swap;
    printf("Enter no of elements\n");
    scanf("%d",&n);
    printf("Enter %d elements\n",n);
    for(c=0;c<n;c++)
    {
        scanf("%d",&array[c]);
    }
    for(c=0;c<(n-1);c++)
    {
        position=c;
        for(d=c+1;d<n;d++)
        {
            if(array[position]>array[d])
            position=d;

        }
        if (position!=c)
        {
            swap=array[c];
            array[c]=array[position];
            array[position]=swap;

        }

    }
    printf("Sorted list in ascending order:\n");
    for(c=0;c<n;c++)
    {
        printf("%d\n",array[c
               ]);
    }
    getch();
    }

