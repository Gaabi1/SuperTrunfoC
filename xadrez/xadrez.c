#include <stdio.h>
//Movimentos
void moverdireita(int casas)
{
    if(casas > 0)
    {   
        printf("Direita\n");
        moverdireita(casas-1);
    }
}
void moveresquerda(int casas)
{
    if(casas > 0)
    {
        printf("Esquerda\n");
        moveresquerda(casas-1);
    }
}
void movercima(int casas)
{
    if(casas > 0)
    {
        printf("Pra cima\n");
        movercima(casas-1);
    }
}
void moverbaixo(int casas)
{
    if(casas > 0)
    {
        printf("Pra baixo\n");
        moverbaixo(casas-1);
    }
}
void pracimadireita(int casas)
{
    if(casas > 0)
    {
        printf("Pra cima direita\n");
        pracimadireita(casas-1);
    }
}
void pracimaesquerda(int casas)
{
    if(casas > 0)
    {
        printf("Pra cima esquerda\n");
        pracimaesquerda(casas-1);
    }
}
int main()
{
    int torre;
    int bispo;
    int rainha;
    int casas;
    int opcao;
    int i;
    int movimento;
    
   
    //Numero de casas
    
    do{
        printf("Escolha quem quer mover:\n");
        printf("1- Rainha\n");
        printf("2- Bispo\n");
        printf("3- Torre\n");
        printf("4- Cavalo\n"); 
        printf("Digite a opção: ");
        scanf("%d", &opcao);
        
        switch(opcao)
        {
        case 1:
        //Movimentos Rainha
            printf("Direita(1), esquerda(2), cima(3) ou embaixo(4)?:");
            scanf("%d", &movimento);
            if (movimento ==1)
            {
                printf("Número de casas : ");
                scanf("%d", &casas);
                moverdireita(casas);
            }
            else if(movimento==2)
            {
                printf("Número de casas : ");
                scanf("%d", &casas);
                moveresquerda(casas);
            }
            else if(movimento==3)
            {
                printf("Número de casas : ");
                scanf("%d", &casas);
                movercima(casas);
            } 
            else if(movimento==4)
            {
                printf("Número de casas : ");
                scanf("%d", &casas);
                moverbaixo(casas);
            }
            else 
            {
                printf("Escolha uma opção valida\n");
            }
            break;
        case 2:
        //Movimentos Bispo
            printf("Bispo movimenta na diagonal\n");
            printf("Pra cima depois direita(1), Pra cima esquerda(2)?: ");
            scanf("%d", &movimento);
            i=1;
            if(movimento==1)
            {
                printf("Número de casas : ");
                scanf("%d", &casas);
                pracimadireita(casas);
            }
            else if (movimento ==2)
            {
                printf("Número de casas : ");
                scanf("%d", &casas);
                pracimaesquerda(casas);
            }
            else 
            {
                printf("Escolha uma opção valida\n");
            }
            break;
        case 3:
        //Movimentos Torre
            printf("Pra cima(1), Pra baixo(2)?: ");
            scanf("%d", &movimento);
            i=1;
            if (movimento ==1)
            {
                printf("Número de casas : ");
                scanf("%d", &casas);
                movercima(casas);
            }  
            else if(movimento==2)
            {
                printf("Número de casas : ");
                scanf("%d", &casas);
                moverbaixo(casas);
            }    
            else 
            {
                printf("Escolha uma opção valida\n");
            }
            break;
        case 4:
        //Movimentos Cavalo
            printf("Número de casas para cima : ");
            scanf("%d", &casas);
            printf("Vira 1 casa direita(1), Vira 1 casa esquerda(2)?");
            scanf("%d", &movimento);
            int loop=1;
            if(movimento==1)
            {   
                while(loop--)
                {
                    for(i=1; i<=casas; i++)
                    {
                        printf("Pra cima");
                        printf("\n");
                    }
                    printf("Direita\n");
                }
            
            }
            else if (movimento ==2)
            {
                while(loop--)
                {       
                    for(i=1; i<=casas; i++)
                    {
                        printf("Pra cima");
                        printf("\n");
                    }
                    printf("Esquerda\n");
                }   
            }
            else 
            {
                printf("Escolha uma opção valida\n");
            }
            break;
        default:
            printf("Opção inválida\n");
            break;
        }
    
    }while(opcao < 1 || opcao > 4);
    return 0;
}
