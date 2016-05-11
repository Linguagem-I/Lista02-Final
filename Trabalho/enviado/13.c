#include <stdio.h>

float s, v;

void movimento(float v0, float s0, float t, float a)
{
	v = v0 + a * t;
	s = s0 + v0 * t + (a * t * t)/2;
}

int main()
{
	float s0, v0, a, t;
	
	printf("\nDigite a posicao inicial: ");
	scanf("%f", &s0);
	
	printf("\nDigite a velocidade inicial: ");
	scanf("%f", &v0);
	
	printf("\nDigite a aceleracao: ");
	scanf("%f", &a);
	
	printf("\nDigite a instante: ");
	scanf("%f", &t);
	
	movimento(v0, s0, t, a);
	printf("\ns = %0.2f\n v = %0.2f", s, v);
}
