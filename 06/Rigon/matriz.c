#include <stdio.h>
#define STUDENTS 3
#define EXAMS 4

int minimum( const int[][ EXAMS ], int, int);
int maximum( const int[][ EXAMS ], int, int);
double average( const int[], int);
void printArray( const int[][ EXAMS ], int, int);

int main(){
    int student;
    const int studentGrades[ STUDENTS ][ EXAMS ] =
    { { 77, 68, 86, 73 }, { 96, 87, 89, 78 }, { 70, 90, 86, 81 } };
    printf( "O array eh:\n" );
    printArray( studentGrades, STUDENTS, EXAMS );
    printf( "\n\nMenor Nota: %d\nMaior Nota: %d\n",
    minimum( studentGrades, STUDENTS, EXAMS ),
    maximum( studentGrades, STUDENTS, EXAMS ) );

    for( student = 0; student <= STUDENTS -1; student++ )
        printf( "A media das notas do estudante %d eh %.2f\n", student,
        average( studentGrades[ student ], EXAMS ) );
    return 0;
}
// Encontrar menor nota
int minimum( const int grades[][ EXAMS ], int stud, int tests ){
  int i, j, menor_nota=grades[0][0];
  for(i=0;i<STUDENTS;i++)
    for(j=0;j<EXAMS;j++)
      if(grades[i][j] < menor_nota)
        menor_nota = grades[i][j];
  return menor_nota;
}

// Encontrar a maior nota
int maximum( const int grades[][ EXAMS ], int stud, int tests ){
  int i, j, maior_nota=0;
  for(i=0;i<STUDENTS;i++)
    for(j=0;j<EXAMS;j++)
      if(grades[i][j] > maior_nota)
        maior_nota = grades[i][j];
  return maior_nota;
}

/* Calcular a média das notas */
double average( const int setOfGrades[], int tests ){
  double media = 0;
  int i;
  for(i=0;i<tests;i++)
    media+= setOfGrades[i];
    media/= tests;
    return media;
  }

/* Imprimir o ARRAY */
void printArray( const int grades[][ EXAMS ], int stud, int tests )
{
    int i, j;
    printf( "                 [0]  [1]  [2]  [3] ");
    for( i = 0; i <= stud -1; i++ ) {
        printf( "\nstudentGrades[%d] ", i );
        for( j = 0; j <= tests -1; j++ )
            printf( "%-5d", grades[ i ][ j ] );
    }
    printf("\n");
}
