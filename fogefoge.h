#ifndef _FOGEFOGE_H_
#define _FOGEFOGE_H_

#define CIMA 'w'
#define BAIXO 's'
#define DIREITA 'd'
#define ESQUERDA 'a'
#define BOMBA 'b'

int heroiVive();
int ehdirecao(char direcao);
int praondefantasmavai(int xatual,int yatual, int* xdestino,int* ydestino);
int qtdfantasmas();
int imprimemensagem(int mensagem1, int mensagem2);
void fantasmas();
void move(char direcao);
void limpaTela();
void explodepilula();
void explodepilula2(int x, int y, int somax, int somay, int qtd);

#endif