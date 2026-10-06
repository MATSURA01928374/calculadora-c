#include <stdio.h>
#include <ctype.h>

float soma(float A1, float A2){
    return A1 + A2;
}

float subtracao(float B1, float B2){
    return B1 - B2;
}

float multiplicacao(float C1, float C2){
    return C1 * C2;
}

float divisao(float D1, float D2){
    float resultado = D1/D2;
    return resultado;
}

int main(){
  
    while(1){
        int n;
        char resposta;
        printf("=============================== \n  Calculadora Simples     \n=============================== \nSelecione uma operação:\n1. Adição\n2. Subtração\n3. Multiplicação\n4. Divisão\n5. Sair\nOpção:");
        

        if (scanf("%d", &n) != 1) {
            printf("Erro: Essa não é uma opção.\n");

            while (getchar() != '\n') {
            }

            continue;
        }

        if (n < 1 || n > 5) {
            printf("Erro: Essa não é uma opção.\n");
            continue;
        }       

        if (n == 5) {
            printf("Obrigado por usar a calculadora! Até a próxima.\n");
            break;
        }


        float a, b;

        printf("Digite o primeiro número: ");
        scanf("%f", &a);
        printf("Digite o segundo número: ");
        scanf("%f", &b);
        
        if(n == 1){
            char operador = '+';
            printf("Resultado: %.4f %c %.4f = %.4f\n", a, operador, b, soma(a, b));
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
            printf("Resultado: %.4f %c %.4f = %.4f\n", a, operador, b, subtracao(a, b));
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
            printf("Resultado: %.4f %c %.4f = %.4f\n", a, operador, b, multiplicacao(a, b));
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
            else if(b != 0 ){
                char operador = '/'; 
                printf("Resultado: %.4f %c %.4f = %.4f\n", a, operador, b, divisao(a, b));
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
