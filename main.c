#include <stdio.h>
#include <ctype.h>

int soma(int A1, int A2){
    return A1 + A2;
}

int subtracao(int B1, int B2){
    return B1 - B2;
}

int multiplicacao(int C1, int C2){
    return C1 * C2;
}

float divisao(int D1, int D2){
    float resultado = (float)D1/D2;
    return resultado;
}

int main(){
  
    while(1){
        int n;
        char resposta;
        printf("=============================== \n  Calculadora Simples     \n=============================== \nSelecione uma operação:\n1. Adição\n2. Subtração\n3. Multiplicação\n4. Divisão\n5. Sair\nOpção:");
        scanf("%d", &n);

        if(n == 5){
            printf("Obrigado por usar a calculadora! Até a próxima.");
            break;
        }
        if(n < 1 || n > 5){
            printf("Erro: Essa não é uma opção.\n");
            continue;
        }   

        int a, b;

        printf("Digite o primeiro número: ");
        scanf("%d", &a);
        printf("Digite o segundo número: ");
        scanf("%d", &b);
        
        if(n == 1){
            char operador = '+';
            printf("Resultado: %d %c %d = %d\n", a, operador, b, soma(a, b));
            printf("Deseja realizar outra operação? (s/n):");
            scanf(" %c", &resposta);
            resposta = tolower(resposta);
            if(resposta == 's'){
                continue;
            }
            else if(resposta == 'n'){
                printf("Obrigado por usar a calculadora! Até a próxima.");
                break;
            }
            else{
                while(resposta != 's' && resposta != 'n'){
                    printf("Resposta inválida. Por favor, digite 's' para sim ou 'n' para não: ");
                    scanf(" %c", &resposta);
                    resposta = tolower(resposta);
                }

                if(resposta == 's'){
                    continue;
                }
                else{
                    printf("Obrigado por usar a calculadora! Até a próxima.");
                    break;
                }
            }
        }
        else if(n == 2){
            char operador = '-';
            printf("Resultado: %d %c %d = %d\n", a, operador, b, subtracao(a, b));
            printf("Deseja realizar outra operação? (s/n):");
            scanf(" %c", &resposta);
            resposta = tolower(resposta);
            if(resposta == 's'){
                continue;
            }
            else if(resposta == 'n'){
                printf("Obrigado por usar a calculadora! Até a próxima.");
                break;
            }
            else{
                while(resposta != 's' && resposta != 'n'){
                    printf("Resposta inválida. Por favor, digite 's' para sim ou 'n' para não: ");
                    scanf(" %c", &resposta);
                    resposta = tolower(resposta);
                }

                if(resposta == 's'){
                    continue;
                }
                else{
                    printf("Obrigado por usar a calculadora! Até a próxima.");
                    break;
                }
            }
        }
        else if(n == 3){
            char operador = '*';
            printf("Resultado: %d %c %d = %d\n", a, operador, b, multiplicacao(a, b));
            printf("Deseja realizar outra operação? (s/n):");
            scanf(" %c", &resposta);
            resposta = tolower(resposta);
                        if(resposta == 's'){
                continue;
            }
            else if(resposta == 'n'){
                printf("Obrigado por usar a calculadora! Até a próxima.");
                break;
            }
            else{
                while(resposta != 's' && resposta != 'n'){
                    printf("Resposta inválida. Por favor, digite 's' para sim ou 'n' para não: ");
                    scanf(" %c", &resposta);
                    resposta = tolower(resposta);
                }

                if(resposta == 's'){
                    continue;
                }
                else{
                    printf("Obrigado por usar a calculadora! Até a próxima.");
                    break;
                }
            }
        }
        else if(n == 4){
            if(b == 0){
                printf("Erro: Divisão por zero não é permitida.\n");
                continue;
            }
            else if(b != 0 ){
                char operador = '/'; 
                printf("Resultado: %d %c %d = %.2f\n", a, operador, b, divisao(a, b));
                printf("Deseja realizar outra operação? (s/n):");
                scanf(" %c", &resposta);
                resposta = tolower(resposta);
                if(resposta == 's'){
                    continue;
                }
                else if(resposta == 'n'){
                    printf("Obrigado por usar a calculadora! Até a próxima.");
                    break;
                }   
                else{
                    while(resposta != 's' && resposta != 'n'){
                        printf("Resposta inválida. Por favor, digite 's' para sim ou 'n' para não: ");
                        scanf(" %c", &resposta);
                        resposta = tolower(resposta);
                    }

                    if(resposta == 's'){
                        continue;
                    }
                    else{
                        printf("Obrigado por usar a calculadora! Até a próxima.");
                        break;
                    }
                }
            }
        }
    }

    return 0;
}
