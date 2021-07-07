#include <stdlib.h>
#include <stdio.h>
int *our_realloc(int *ptr, long old_size, long new_size);
int main() 
{ 
    int *a = our_realloc(NULL, 0, 2); // allocate 
    a[0] = 1;
    a[1] = 2;

    a = our_realloc(a, 2, 4); // bigger memory
    a[2] = 3;
    a[3] = 4;

    printf("%d %d %d %d\n",a[0], a[1], a[2], a[3]);


    a = our_realloc(a, 4, 1); // smaller memory
    printf("%d\n",a[0]);


    our_realloc(a, 1, 0); // free

    return 0; 
} 

int *our_realloc(int *ptr, long old_size, long new_size)
{  
   if (new_size == 0)
   {
       free(ptr);
       return 0;
   }
   else if (ptr == NULL)
   {
       return malloc(new_size*4);
   }
   else 
   {
       int* temp = NULL;
       int i;
       temp = (int*) malloc(new_size *4);
       for (i = 0; i < new_size ; i++)
       {
           temp[i]= ptr[i];
       }
       
       free(ptr);
       return temp;
   }  
}                                                                               