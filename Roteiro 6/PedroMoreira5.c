#include <stdio.h>
#define NUM_MESAS 30
#define LUGARES_POR_MESA 5

int main()
{
    int lugaresDisponiveis[NUM_MESAS], escolhido, lugares, mesa, totalugares = 0;
    
    for (int i = 0; i <= 29; i++){//for usado para definir todas as mesas tendo 5 lugares
        lugaresDisponiveis[i] = LUGARES_POR_MESA;
    }
    
    printf("Bem vindo ao sistema de reserva da casa de espetaculos!");
    printf("\nDigite o codigo da mesa (100 a 129) e a quantidade de lugares desejados.\nDigite 0 para encerrar.");
    
    do {
        printf("\nCodigo da mesa (100 a 129): ");
        scanf("%d", &escolhido);
        
        if (escolhido == 0){
            continue;//se o numero for 0, encerra o loop logo no inicio
        }
        
        if (escolhido < 100 || escolhido > 129){//if para se o código da mesa for invalido
            printf("\nCodigo invalido! Tente novamente.\n");
            continue;
        }
        
        mesa = escolhido - 100;//mesa tornando-se um número de 0 a 29, isso torna a manipulação do vetor mais fácil
        
        printf("Quantidade de lugares desejados: ");
        scanf("%d", &lugares);
        
        if (lugares > 5 || lugares < 1 ){//if para garantir que o número inserido esteja entre 1 e 5
            printf("\nNumero invalido! Tente novamente.\n");
            continue;
        }
        
        lugaresDisponiveis[mesa] -= lugares;//serve para diminuir a quantidade de lugares escolhidos do total disponível
        
        if (lugaresDisponiveis[mesa] >= 0){
            
            printf("\nReserva Realizada com Sucesso!\n");
            totalugares += lugares;//quantidade de lugares ocupados aumenta a cada reserva realizada
            continue;
            
        }else{
            
            printf("\nNao ha lugares disponiveis para reserva.\n");
            lugaresDisponiveis[mesa] += lugares;//caso não haja lugares disponíveis na mesa, o valor anterior de 
                                                //lugares disponíveis é reposto
            continue;
            
        }
        
        
    }while (escolhido != 0 || totalugares == 150);//o loop acaba quando o usuário insira o número 0 ou ocupe os 150 lugares
    
    printf("\nEncerrando programa...\n");
    printf("Total de lugares ocupados: %d\n", totalugares);
    printf("Obrigado de usar o sistema de reservas!\n");

    return 0;
}
