#include <stdio.h>

const int Max = 4;

int LiesMatrix(int, int); // int M[Max][Max]
int AddiereMatrix(int, int, int); // int M1[Max][Max], int M2[Max][Max], int Erg[Max][Max]
int DruckMatrix(int); // int M[Max][Max]

int main()
{
    int Matrix1[Max][Max], Matrix2[Max][Max], Erg[Max][Max];

    printf("Matrix1:\n");
    LiesMatrix(Matrix1);

    printf("Matrix2:\n")
    LiesMatrix(Matrix2);

    AddiereMatrix(Matrix1, Matrix2, Erg);

    printf("\n Die Summe von Matrix1\n");
    DruckMatrix(Matrix1);

    printf("\n und Matrix2\n");
    DruckMatrix(Matrix2);

    printf("\n ergibt\n");
    DruckMatrix(Erg);
}

int LiesMatrix(int Matrix1, int Matrix2)
{
    int i, j, k;
    for (j = 0; j < Max; j++)
    {
        scanf("%i", &k);
        Matrix1[i][j] = k;
    }

    return Matrix1;
}

int AddiereMatrix(int Matrix1, int Matrix2, int Erg)
{
    int i, j;
    for (i = 0; i < Max; i++)
    {
        for (j = 0; j < Max; j++)
        {
            Erg[i][j] = Matrix1[i][j] + Matrix2[i][j];
        }
    }
    return Erg;
}

int DruckMatrix(int Erg)
{
    int i, j;
    for (i = 0; i < Max; i++)
    {
        
    
        for (j = 0; j < Max; j++)
        {
            printf("i", Erg[i][j]);
            printf("\n");
        }
    }    
}