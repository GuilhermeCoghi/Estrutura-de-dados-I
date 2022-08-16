#include<stdlib.h>
#include<stdio.h>
#include"merge.h"
#include"float_vector.h"

int main ()
{
    int var;
    FloatVector *arr = create(10);
    for(int i; i<capacity(arr); i++){
        var = rand()%10;
        append(arr, var);
    }
    print(arr);
}