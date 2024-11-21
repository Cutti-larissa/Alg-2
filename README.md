# Algoritmo e Estrutura de Dados II
Algoritmos vistos em aula 

# Max_jogadas
Modifique o código em C que utiliza backtracking para verificar se é possivel fazer o passeio do cavalo num tabuleiro N*N começando numa posição (x,y) qualquer, para que agora não retorne apenas 1 (se possível) e 0 (se não possível), mas que retorne o maior número de jogadas possíveis. Por exemplo se N = 3, o maior número de jogadas é 8.

# Embaralhado
Duas strings X e Y podem ser embaralhadas se seus caracteres são entremeados em uma nova string Z, retendo a ordem original em que seus caracteres aparecem em X e Y:
BATRACKCKING é um embaralhado de BACK e TRACKING.
Um embaralhado é dito suave se Z não usa mais que dois caracteres seguidos de X ou Y. Por exemplo:
BTRAACCKIKNG é um embaralhado suave de BACK e TRACKING.
O seguinte algoritmo (em linguagem C) verifica se uma string Z é um embaralhado de X e Y:

int shuffle(char x[], char y[], char z[], int posX, int posY, int posZ){
    if (posZ == strlen(z))
        return 1;

    if (posX < strlen(x) && z[posZ] == x[posX])
        if (shuffle(x, y, z, posX + 1, posY, posZ + 1))
            return 1;

    if (posY < strlen(y) && z[posZ] == y[posY])
        if (shuffle(x, y, z, posX, posY + 1, posZ + 1))
            return 1;

    return 0;
}

int main(){
    char x[] = "BACK";
    char y[] = "TRACKING";
    char z[] = "BTRAACKCKING";

    if (shuffle(x, y, z, 0, 0, 0))
        printf("Z é embaralhado");
    else
        printf("Z NÃO é embaralhado");
}

Reescreva o código acima para verificar se uma string Z é um embaralhado suave de X e Y. Atenção: O seu algoritmo deve ser eficiente, ou seja, ele deve “cortar” os ramos da árvore de backtracking para embaranhado com mais de 2 caracteres consecutivos de uma mesma string (ou seja, não é permitido testar apenas no caso base se Z é um embaralhado suave ou não).
