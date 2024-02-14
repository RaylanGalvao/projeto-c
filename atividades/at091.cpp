#include <stdio.h>
int main()
{
    float h = 0;
    int n;
    printf("Digite o numero de termos: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        h += 1.0 / (float)i;
    printf("H = %f", h);
    return 0;
}