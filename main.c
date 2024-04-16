#include <stdio.h>
#include <stdlib.h>

// definimos nossa tolerância e o maximo que o program vai procurar
#define E 0.1
#define MAX_ITER 10

double f(double x) { return x * x - 6; }
char v[5] = {'i', 'a', 'b', 'c', 'f(c)'};

double **createMatrix()
{
    int rows = MAX_ITER;
    int cols = 6;

    double **Matrix = (double **)malloc(rows * sizeof(double *));
    for (int i = 0; i < rows; i++)
    {
        Matrix[i] = (double *)malloc(cols * sizeof(double));
    }

    return Matrix;
}

void printMatrix(double **Matrix, int rows, int cols)
{
    printf("n       An      Bn      Xn      F(Xn)   E\n");

    for (int i = 0; i < rows; i++)
    {

        for (int j = 0; j < cols; j++)
        {

            printf("%.5f ", Matrix[i][j]);
        }
        printf("\n");
    }
}

double bissecao(double a, double b, double **m)
{
    int aux, i = 0;
    // m[aux][3] = (a + b) / 2;
    do
    {
        double c = (a + b) / 2;
        m[i][0] = i;
        m[i][1] = a;
        m[i][2] = b;
        m[i][3] = c;
        m[i][4] = f(c);
        if (f(c) == 0.0 || (b - a) / 2 < E)
        {
            return c;
        }
        else if (f(a) * f(c) < 0)
        {
            b = c;
            m[i][5] = c - b;
        }
        else
        {
            a = c;
            m[i][5] = c - a;
        }
        i++;
    } while (i < MAX_ITER);
}

int main(void)
{
    // TODO INSIRA O INTERVALO DESEJADO
    double a = 2.0, b = 3.0;
    // TODO INSIRA A FUNÇAO
    // TODO INSIRA O ERRO TOLERANCIA
    double **matriz = createMatrix();
    bissecao(a, b, &matriz[0]);
    printMatrix(matriz, MAX_ITER, 6);
}