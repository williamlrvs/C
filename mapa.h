#ifndef _MAPA_H_
#define _MAPA_H_

#define HEROI '@'
#define VAZIO '.'
#define PAREDE_VERTICAL '|'
#define PAREDE_HORIZONTAL '-'
#define FANTASMA 'F'
#define PILULA 'P'

typedef struct {
	char** matriz;
	int linhas;
	int colunas;
}MAPA;

typedef struct{
	int x;
	int y;
}POSICAO;

int podeandar(MAPA* m, char personagem, int x, int y);
int ehvalida(MAPA* m, int x, int y);
int ehvazia(MAPA* m,int x, int y);
int ehparede(MAPA* m, int x, int y);
int ehpersonagem(MAPA* m, char personagem, int x, int y);
int encontramapa(MAPA* m, POSICAO* p, char c);
void liberamapa(MAPA* m);
void lemapa(MAPA* m);
void alocamapa(MAPA* m);
void andanomapa(MAPA*m, int xorigem, int yorigem, int xdestino, int ydestino);
void copiamapa(MAPA* origem, MAPA* destino);

#endif