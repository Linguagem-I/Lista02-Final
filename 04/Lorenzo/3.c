#include <stdio.h>
#include <stdlib.h>

int convert(int dec){
    if (dec == 0) {
        return 0;
    }
    
	return (dec % 2 + 10 * convert(dec / 2));
}

int main(){
    
    int num, binario;
    
    scanf("%d", &num);
    
    //printf("1");
    
    binario = convert(num);
    
    printf("%d", binario);
    
    return 0;
}
