#include <stdio.h>
#include <stdlib.h>


float sumGrades(float local_sum[], int size_of_array){
float sum = 0;
    for (int i = 0; i < size_of_array; ++i){
        sum = sum + local_sum[i];
    };
  return sum;
}

float grade_average(float local[], int size_of_array){
    float average;
       average = sumGrades(local, size_of_array) / size_of_array;

    return average;
};

void save_in_file( float student_average[], int size_of_student_array, float class_average){
    FILE *file  = fopen("moyenne", "w");
    for(int i = 0; i < size_of_student_array; i++){

        fprintf(file,"moyenne de l'élève %d: %5.2lf \n", i+1, student_average[i]);
    }


        fprintf(file,"moyenne de la classe: %5.2lf \n", class_average);

}

int main()
{


/* init array of sudents and grades*/
    int students;
    int grades_per_student;
    printf("saisir le nombre d\'éleve \n");
    scanf("%d", &students);
    printf("Combien de note seront saisies par éleve ? \n");
    scanf("%d" , &grades_per_student);

    float all_grades[students][grades_per_student];
    float average_per_students[students];
    float average_class;
/* note per student*/
    for (int i = 0; i < students; i++){
    printf("Eleve %d \n", i+1);
        for (int j = 0; j < grades_per_student; j++){
            printf("Saisir la note %d \n", j+1);
            scanf("%f", &all_grades[i][j]);
           // printf("tableau %f \n", all_grades[i][j])
        };
    };

    for (int i = 0; i < students; i++){
        for (int j = 0; j < grades_per_student; j++){
            printf("i: %d j: %d vale: %5.2lf \n",i ,j, all_grades[i][j]);
        };
    };
//calcule de la moyenne par etudiant
//parcourt les etudiants
    for (int i = 0; i < students; i++){
    //calcule de la moyenne d'un étudiant (les notes de l'étudiant, le nombre de notes
    // stoquage de la moeynne dans average_per_students
        average_per_students[i] = grade_average(all_grades[i], grades_per_student);
        printf("la moyenne de l\'éleve %d est de %5.2lf \n", i+1, average_per_students[i]);
        };


        average_class = grade_average(average_per_students, students);

    printf("la moyenne de la classe est de %5.2lf \n", average_class);

    save_in_file(average_per_students, students, average_class);


    return 0;
}



/*

3 eleves, 4 notes
note [i=eleve] [j=note]
#moyenne de l'eleve
saisie des notes par éleve
addition des notes
division par le nombre de note
moyenne classe
addition des notes de chaque eleve
enregistrer le tout dans un fichier
*/
