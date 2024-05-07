#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int n, palindromo = 1;
    scanf("%ld", &n);
    char vetor[n], *p1 = vetor, *p2 = vetor+n-1;
    
    for (int i = 0; i < n; i++){
	    scanf(" %c", &vetor[i]);
    }
    
    /*while (p1 < p2){
	    if(*p1 != *p2){
		    palindromo = 0;
		    break;
	    }
	    p1++;
	    p2--;
    }

    if(palindromo){
	    printf("Sim\n");
    }
    else{
	    printf("Nao\n");
    }*/
	
    int contador[26], impares = 0;

    for (int i = 0; i < n; i++){
	    contador[vetor[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++){
	    if (contador[i] % 2 != 0) {
		    impares++;
	    }
    }

    if (impares <= 1){
	    printf("Sim");
    }
    else {
	    printf("Nao");
    }
    return 0;

}
