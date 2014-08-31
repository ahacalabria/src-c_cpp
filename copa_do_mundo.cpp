#include<iostream>
#include<stdio.h>
#include<stdlib.h>

int champ;

int champion(int p[15][2], int v[15][2]){
	
	// i=14 se no jogo da final dependendo do time que ganhou
	// a variavel i=12(para o time[0] ou i=13(para o time[1])
	// e assim até as oitavas de finais, depois i seŕa o
	// id correspondente ao nome do time --MAIS 65 vira o 
	// caractere respectivo segundo a tabela ASCII
	
	int i=0,j=0,cont=0;
	
	for(i=14,j=0;j<2;j++){
		if(p[i][0]<p[i][1])
			i-=v[i][1];
		else
			i-=v[i][0];
	}
		if(p[i][0]<p[i][1])
			i-=v[i][1];
		else
			i-=v[i][0];
		if(p[i][0]<p[i][1])
			return v[i][1];
		else
			return v[i][0];
}

int main(void){
  
  // vetor que direciona os indices começando do jogo da final i=14 e descendo ate os primeiros jogos
	int v[15][2] = {{0,1},{2,3},{4,5},{6,7},{8,9},{10,11},{12,13},{14,15},{8,7},{7,6},{6,5},{5,4},{4,3},{3,2},{2,1}};
	// vetor das partidas
	int p[15][2];
	
	while(scanf("%d %d",&p[0][0],&p[0][1]) != EOF){
		//ler todas as partidas
		for(int i=1;i<15;i++) scanf("%d %d",&p[i][0],&p[i][1]);
		//imprime o time campeao
		printf("%c\n",champion(p,v)+65);
	}
	
	return 0;	
}

















