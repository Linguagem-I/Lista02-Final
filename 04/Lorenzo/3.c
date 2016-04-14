#include <stdio.h>
#include <stdlib.h>

int convert(int dec){
    if (dec == 0) {
        return 0;
    }
    printf("Decimal = %d\n", dec);
    printf("%d modulo de 2 + 10 = %d\n", dec, dec % 2 + 10);
    printf("%d / 2 = %d\n", dec, dec / 2);
    printf("Decimal / 2 %d\n\n", dec / 2);
	return (dec % 2 + 10 * convert(dec / 2));
}

int main(){
    
    int num, binario;
    
    scanf("%d", &num);
    
    //printf("1");
    
    binario = convert(num);
    
    printf("%d\n", binario);
    
    return 0;
}
