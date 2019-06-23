#include <stdio.h>
#define MAX 5

float media_aluno (float notas[]) {
float media = 0.0;
int i;
for (i=1; i<=MAX; i++) media += notas[i];
return (media/MAX);
}
int main()
{
 float notas[] = { 5.5, 7.6, 9.8, 7.2, 10.0 };
 printf("Media: %.2f", media_aluno(notas));
};