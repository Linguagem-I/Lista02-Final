#include <stdio.h>
#include <stdlib.h>

int exponenciacao(n, x, original){
    if (x == 1){
    	return n;
	}
	n = n * original;
	x--;
	return exponenciacao(n, x, original);
}

int main(){
    
    int n, x, res;
    
    scanf("%d", &n);
    scanf("%d", &x);
    
    res = exponenciacao(n, x, n);
    
    printf("%d", res);
    
    return 0;
}
