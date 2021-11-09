#include <stdio.h>
#include <stdlib.h>

int sommeNote(int note[], int size_of_array){
    int sum=0;
    for (int i = 0; i < size_of_array; ++i){
        sum = sum + note[i];
    }

  return sum;
}

int grade_average(int local[], int size_of_array){

    float average = sommeNote(local, size_of_array) / size_of_array;

    return average;
}

int main()
{
    int note[] = { 0, 10 };
    // 4 is the value of an octet, we divid by this value to determin the size of the array
    int size_of_array = sizeof(note)/4;
    int resp = grade_average(note, size_of_array);
   // int resp = sommeNote(note, size_of_array);
    printf("%d",resp);
    return resp;
}



