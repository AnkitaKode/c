#include <stdio.h>

void addMatrices(int firstMatrix[][100], int secondMatrix[][100], int resultMatrix[][100], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            resultMatrix[i][j] = firstMatrix[i][j] + secondMatrix[i][j];
        }
    }
}

void displayMatrix(int matrix[][100], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int firstMatrix[100][100], secondMatrix[100][100], resultMatrix[100][100];
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &firstMatrix[i][j]);
        }
    }

    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &secondMatrix[i][j]);
        }
    }

    addMatrices(firstMatrix, secondMatrix, resultMatrix, rows, cols);

    printf("\nFirst Matrix:\n");
    displayMatrix(firstMatrix, rows, cols);

    printf("\nSecond Matrix:\n");
    displayMatrix(secondMatrix, rows, cols);

    printf("\nSum of Matrices:\n");
    displayMatrix(resultMatrix, rows, cols);

    return 0;
}
