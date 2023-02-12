#include <stdio.h>

int main()
{   
    int N, i, j, k;
    
    printf("Qual o valor de N? ");
    scanf("%d", &N);
    
    int vet[N];
    printf("%5d\n", 1);
    
    for(k=1; k<N; k++)
    {  
        i=k;
        vet[i] = 1;
        
        printf("%5d", vet[i]);
        i--;
        
        for(j=0; j<k-1; j++)
        {  
            vet[i] = vet[i] + vet[i-1];
            printf("%5d", vet[i]);
            i--;
        }
        
        vet[i] = 1;
        printf("%5d\n", vet[i]);
    }
    
    return 0;
}



