#include <stdio.h>
int main()
{
    float soma = 0;
    int n, m = 1;
    printf("Digite n: ");
    scanf("%d", &n);
    printf("S = ");
    for (int i = 1; i <= n; i++)
    {
        printf("%d/%d", i, m);
        if (i < n && n > 1)
            printf(" + ");
        else
            printf(".");

        soma += (float)i / (float)m;
        m += 2;
    }
    printf("\nA soma da serie deu %.2f", soma);
    return 0;
}