#include <stdio.h>

int converter(char num)
{
return num-48;
}
int main()
{
  char linha[4][82];
  int i,tamanho,f;
  int n[82];

    scanf("%s %s %s %s", &linha[0], &linha[1], &linha[2], &linha[3]);

    tamanho = strlen(linha[0]);

    for (i = 0; i < tamanho; ++i) {
      f = converter(linha[0][i]) * 1000 + converter(linha[1][i]) * 100 + converter(linha[2][i]) * 10 + converter(linha[3][i]);
      n[i] = f;
    }
    for (i = 1; i < tamanho-1; ++i){
      printf("%c", (char)((n[0] * n[i] + n[tamanho-1]) % 257));
    }
  printf("\n");
  return 0;
}
