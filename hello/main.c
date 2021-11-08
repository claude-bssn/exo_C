#include <stdio.h>
#include <stdlib.h>

int sommeNote(int note[], int size_of_array){
    int sum=0;
    for (int i = 0; i < size_of_array; ++i){
        sum = sum + note[i];
    }

  return sum;
}

int main()
{
    int note[] = { 1, 2, 3, 1, 2, 9 };
    // 4 is the value of an octet, we divid by this value to determin the size of the array
    int size_of_array = sizeof(note)/4;

    int resp = sommeNote(note, size_of_array);
    printf("%d",resp);
    return resp;
}



