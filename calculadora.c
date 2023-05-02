#include <stdio.h>

int main()
{
  char operacao;
  float num1, num2, resultado;

  printf("Selecione a operação (+, -, *, /): ");
  scanf("%c", &operacao);

  printf("Digite o primeiro número: ");
  scanf("%f", &num1);

  printf("Digite o segundo número: ");
  scanf("%f", &num2);

  switch (operacao)
  {
  case '+':
    resultado = num1 + num2;
    printf("%.2f + %.2f = %.2f", num1, num2, resultado);
    break;
  case '-':
    resultado = num1 - num2;
    printf("%.2f - %.2f = %.2f", num1, num2, resultado);
    break;
  case '*':
    resultado = num1 * num2;
    printf("%.2f * %.2f = %.2f", num1, num2, resultado);
    break;
  case '/':
    resultado = num1 / num2;
    printf("%.2f / %.2f = %.2f", num1, num2, resultado);
    break;
  default:
    printf("Operação inválida");
  }

  return 0;
}