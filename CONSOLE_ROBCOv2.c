// AUTORES: JOAO RENAN, CARLOS HENRIQUE E JOAO VITOR //
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <string.h>

void LoadScreen();
void SaireFechar();
void JogoPerguntaeResposta();
void JogoAdivinheoNumero();
void JogoOlhoDeCobra();

void main(){

	// tamanho do compilador
	SMALL_RECT windowSize = {0, 0, 70, 30};
	SetConsoleWindowInfo(GetStdHandle(STD_OUTPUT_HANDLE), TRUE, &windowSize);
	system("color 2");

	int comando = 0;
	printf("-----------------------------------------------------------------------\n");
	printf("                 ROBCO CONSOLE DE JOGOS ELETRONICOS  V2.0              \n");
	printf("                 FIRMWARE VERSION: V1.5                                \n");
	printf("                 OPERATIONAL SYSTEM VERSION: WINDOWS 64 bits           \n");
	printf("                 ISA PROCESSOR'S COMPATIBLE VERSION: x86_64            \n");
	printf("-----------------------------------------------------------------------\n");
	printf("\n\n");
	system("pause");
	while (comando != 52)
	{
		system("cls");
		printf("-----------------------------------------------------------------------\n");
		printf("                 ROBCO CONSOLE DE JOGOS ELETRONICOS  V2.0              \n");
		printf("-----------------------------------------------------------------------\n\n");

		printf("_______________________________________________________________________\n");
		printf("||||_______________________________________________________________||||\n");
		printf("||||||___________________________________________________________||||||\n");
		printf("|||||||    ___      ___  _______  ____        __  __     __    ||||||||\n");
		printf("|||||||    __ __  __ __  __       __  __      __  __     __    ||||||||\n");
		printf("|||||||    __   __   __  __       __   __     __  __     __    ||||||||\n");
		printf("|||||||    __        __  _____    __    __    __  __     __    ||||||||\n");
		printf("|||||||    __        __  __       __      __  __  __     __    ||||||||\n");
		printf("|||||||    __        __  __       __       __ __  __     __    ||||||||\n");
		printf("|||||||    __        __  _______  __         ___  _________    ||||||||\n");
		printf("|||||||                                                        ||||||||\n");
		printf("|||||||     OPCOES DE JOGOS:                                   ||||||||\n");
		printf("|||||||   - Opcao [1]: Perguntas e respostas                   ||||||||\n");
		printf("|||||||   - Opcao [2]: Advinhe o numero                        ||||||||\n");
		printf("|||||||   - Opcao [3]: Olho de cobra                           ||||||||\n");
		printf("|||||||   - Opcao [4]: Sair e fechar terminal                  ||||||||\n");
		printf("||||||___________________________________________________________||||||\n");
		printf("||||_______________________________________________________________||||\n");
		printf("_______________________________________________________________________\n");
		printf("\n------>");
		comando = getch();

		switch (comando){
		case 49:
			while (comando == 49){
				// carregando jogo
				LoadScreen();

				//// PRIMEIRO JOGO ////
				JogoPerguntaeResposta();

				//Deseja Jogar Novamente?
				printf(" DESEJA JOGAR NOVAMENTE \?\n SIM[1] VOLTAR PARA MENU [0]\n");
				printf("->");
				comando = getch();
			}
			break;

		case 50:
			while (comando == 50){
				// carregando jogo
				LoadScreen();

				//// SEGUNDO JOGO ////
				JogoAdivinheoNumero();

				//Deseja Jogar Novamente?
				printf(" DESEJA JOGAR NOVAMENTE \?\n SIM[2] VOLTAR PARA MENU [0]\n");
				printf("->");
				comando = getch();
			}
			break;

		case 51:
			while (comando == 51){
				// carregando jogo
				LoadScreen();

				//// TERCEIRO JOGO ////
				JogoOlhoDeCobra();

				//Deseja Jogar Novamente?
				printf(" DESEJA JOGAR NOVAMENTE \?\n SIM[3] VOLTAR PARA MENU [0]\n");
				printf("->");
				comando = getch();
			}
			break;

		case 52:
			//Saindo e Encerrando o Programa
			SaireFechar();
			break;
			
		default:
			printf("ERROR, COMANDO INVALIDO!\n");
			system("pause");
			break;

		}
	}
}








//IMPLEMENTAÇÕES DE FUNÇÕES LOGO ABAIXO
void LoadScreen(){
	int loading;
	printf("\nAguarde o jogo ser carregado...\n");
	char load[11] = "carregando\n";
	for (loading = 0; loading < 11; loading++){
		printf("%c ", load[loading]);
		Sleep(500); // sleep 0,5 segundo
	}
}

void SaireFechar(){
	int loading;
	printf("\n\n\n\n\n\n\n\n\n");
	printf("       \t\t__________   _____   __        __  _______   \n");
	printf("       \t\t__          __   __  __ __  __ __  __        \n");
	printf("       \t\t__          __   __  __   __   __  __        \n");
	printf("       \t\t__   _____  _______  __        __  ______    \n");
	printf("       \t\t__   _____  __   __  __        __  __        \n");
	printf("       \t\t__      __  __   __  __        __  __        \n");
	printf("       \t\t__________  __   __  __        __  ______    \n");
	printf("\n");
	printf("       \t\t________   __      __   _______  _______      \n");
	printf("       \t\t__    __   __      __   __       __     __    \n");
	printf("       \t\t__    __   __      __   __       __     __    \n");
	printf("       \t\t__    __    __    __    _______  ________     \n");
	printf("       \t\t__    __     __  __     __       __     __    \n");
	printf("       \t\t__    __      ____      __       __      __   \n");
	printf("       \t\t________       __       _______  __      __   \n");
	printf("\n\t    CRIADORES: JOAO RENAN, CARLOS HENRIQUE E JOAO VITOR   \n");

	char load[25] = " \n\n\n\n\n\n\n\n\nENCERRANDO...\n";

	for (loading = 0; loading < 25; loading++){
		printf("%c ", load[loading]);
		Sleep(500); // sleep 0,5 segundo
	}
	printf("\n PROGRAMA ENCERRADO!");
	exit(0);
}

void JogoPerguntaeResposta(){
	int resposta=0;
	int pontos=0;
	system("cls");

	printf("\nVoce escolheu jogar: \n\n");
	printf("-----------------------------------------------------------------------\n");
	printf("                  ????? PERGUNTAS E RESPOSTAS! !!!!!                   \n");
	printf("-----------------------------------------------------------------------\n");

	printf("\n- Digite o numero correspondente a sua resposta e confira se acertou\n\n");
	system("pause");
	system("cls");

	// pergunta 1
	printf("-----------------------------------------------------------------------\n");
	printf("Pergunta Numero 1: O que significa Washington DC?\n");
	printf("\n1) Washington District of Capital");
	printf("\n2) Washington District of Columbia");
	printf("\n3) Washington District of Court\n->");
	scanf("%i", &resposta);

	if (resposta == 2){
		pontos+=30;
		printf("\n");
		printf("- Parabens, resposta correta!\n");
		printf("- Voce ganhou 30 pontos!\n");
		printf("- Voce possui %i pontos ate agora.\n",pontos);
		printf("-----------------------------------------------------------------------\n\n");
		system("pause");
	}
	else if (resposta != 2){
		pontos-=20;
		printf("\n");
		printf("- Resposta errada, a resposta correta era: Washington District of \nColumbia\n");
		printf("- Voce perdeu 20 pontos :(\n");
		printf("- Voce possui %i pontos ate agora.\n",pontos);
		printf("-----------------------------------------------------------------------\n\n");
		system("pause");
	}

	// pergunta 2
	printf("\n\n");
	printf("-----------------------------------------------------------------------\n");
	printf("Pergunta Numero 2: Qual o nome da formula mais conhecida da equacao do\n segundo grau\?\n");
	printf("\n1) Formula de Bhaskara");
	printf("\n2) Formula de Euler");
	printf("\n3) Formula de Heron\n->");
	scanf("%i", &resposta);

	if (resposta == 1){
		pontos+=30;
		printf("\n");
		printf("- Parabens, resposta correta!\n");
		printf("- Voce ganhou 30 pontos!\n");
		printf("- Voce possui %i pontos ate agora.\n",pontos);
		printf("-----------------------------------------------------------------------\n\n");
		system("pause");
	}
	else if (resposta != 1){
		pontos-=10;
		printf("\n");
		printf("- Respota errada,a respota correta era: Formula de Bhaskara\n");
		printf("- Voce perdeu 10 pontos :(\n");
		printf("- Voce possui %i pontos ate agora.\n",pontos);
		printf("-----------------------------------------------------------------------\n\n");
		system("pause");
	}

	// pergunta 3
	printf("\n\n");
	printf("-----------------------------------------------------------------------\n");
	printf("Ultima pergunta: Quem foi FIBONACCI\?\n");
	printf("\n1) Um pintor renascentista");
	printf("\n2) Ator italiano");
	printf("\n3) Um matematico\n->");
	scanf("%i", &resposta);

	if (resposta == 3){
		pontos+=40;
		printf("\n");
		printf("- Parabens, resposta correta!\n");
		printf("- Voce ganhou 40 pontos!\n");
		printf("- Voce possui %i pontos ate agora.\n",pontos);
		printf("-----------------------------------------------------------------------\n\n");
		system("pause");
	}
	else if (resposta != 3){
		pontos-=10;
		printf("\n");
		printf("- Resposta incorreta, a resposta correta era:Um matematico\n");
		printf("- Voce perdeu 10 pontos :(\n");
		printf("- Voce possui %i pontos ate agora.\n",pontos);
		printf("-----------------------------------------------------------------------\n\n");
		system("pause");
	}

	//Resultados do Jogo
	printf("\n");
	printf("RESULTADOS:\n");
	if(pontos==100){
		printf("- Meus parabens, voce marcou 100 pontos!!!\n");
		printf("- Voce eh um genio no verdadeiro sentido da palavra :).\n\n");
	}

	else if(pontos<100 && pontos > 20){
		printf("- Voce conseguiu uma pontuacao media.\n");
		printf("- Continue melhorando e um dia vencera ;).\n\n");
	}

	else{
		printf("- Eh uma pena, nunca vi ninguem com uma pontuacao tao baixa.\n");
		printf("- Talvez, voce deveria voltar para a escola :(.\n\n");
	}
}

void JogoAdivinheoNumero(){
	srand(time(NULL));
	int numero = rand() % 1000;
	int resposta;
	int tentativas;

	system("cls");
	printf("-----------------------------------------------------------------------\n");
	printf("0110011010101001011100  *  ADIVINHE O NUMERO!  *  011010001001000101110\n");
	printf("-----------------------------------------------------------------------\n");
	printf("\n");
	printf("-ROBOZAUM LINDAUM (CR7) esta pensando em um numero...\n");
	printf("-Este numero esta entre 0 e 1000. Tente adivinhar sabendo que voce tem \n");
	printf("5 tentativas. Se apresse, ou ele dira que eh o milhorr.\n");
	printf("-----------------------------------------------------------------------\n\n");

	for (tentativas = 0; tentativas < 5; tentativas++){
		system("pause");
		printf("\n");
		printf("_______________________________________________________________________\n\n");
		printf("-Voce possui %i tentativas\n", 5 - tentativas);
		printf("-Insira sua resposta abaixo:\n");
		printf("->");
		scanf("%i",&resposta);

		if (resposta < numero){
			printf("-Numero abaixo do valor pensado pelo ROBOZAUM, tente de novo.\n");
			printf("_______________________________________________________________________\n\n\n");
		}
		else if (resposta > numero){
			printf("-Numero maior que o valor pensado pelo ROBOZAUM,tente de novo.\n");
			printf("_______________________________________________________________________\n\n\n");
		}

		else if(resposta == numero){
			printf("_______________________________________________________________________\n\n");
			printf("- Meus parabens, voce acertou o numero!\n");
			printf("- Nossas almas estao livres das frases motivacionais do ROBOZAUM.\n");
			printf("_______________________________________________________________________\n\n");
			break;
		}
	}

	if (tentativas == 5){
		printf("_______________________________________________________________________\n\n");
		printf("  FIM DE JOGO!!!\n");
		printf("- ROBOZAO estava pensando no numero %i\n", numero);
		printf("- O que foi que voce fez?! agora teremos que ouvir frases motivacionais\n");
		printf("- Sobre que devemos pensar em ser o milhor, o dia todo!!!\n");
		printf("_______________________________________________________________________\n\n");
	}
}

void JogoOlhoDeCobra(){
	srand(time(NULL));
	int rodada1 = 0, rodada2 = 0;
	int pontuacao1 = 0, pontuacao2 = 0;
	int bufferDaRodada=0;
	int venceu=FALSE;

	int prioridade = rand() % 100;
	char jogador1[15], jogador2[15];
	int dado1, dado2;

	system("cls");
	printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
	printf("                              OLHO DE COBRA                            \n");
	printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
	printf("\n\n");
	printf("- Dois jogadores competirao entre si jogando dados, o primeiro a chegar\n");
	printf("em 50 pontos ganha.\n\n");

	printf("- Para tornar justo, o computador decidira quem joga primeiro.\n\n");

	printf("- Depois de jogar os dados, a soma sera adicionada a sua pontuacao e o\n");
	printf("jogador podera jogar quantas vezes quiser.\n\n");

	printf("-Caso um dos dados cair com o valor 1, teremos olho de cobra e o jogador\n");
	printf("perde todos os pontos do turno.\n\n");

	printf("-Caso caiam dois dados com valor 1, teremos olhos de cobra e o jogador \n");
	printf("perdera todos os pontos que tem.\n\n");

	system("pause");
	system("cls");

	fflush(stdin);
	printf("_______________________________________________________________________\n");
	printf("- Digite o nome do primeiro jogador:");
	fgets(jogador1, 15, stdin);
	printf("_______________________________________________________________________\n");
	printf("- Digite o nome do segundo  jogador:");
	fgets(jogador2, 15, stdin);
	printf("_______________________________________________________________________\n\n\n");

	printf("- O Computador decidiu que quem comecara primeiro sera ");
	prioridade <=50 ? printf("%s.", jogador1) : printf("%s.",jogador2);	
	printf("\n\n");

	system("pause");
	system("cls");

	//Se for maior que 50, o jogador 2 começará, se for menor, o jogador 1 começará.
	prioridade >50 ? (rodada1=0, rodada2=1) : (rodada1=1, rodada2=0);

	while (venceu==FALSE){
		dado1=0, dado2=0;
		while (rodada1){
			dado1 = (rand() % 6) + 1;
			dado2 = (rand() % 6) + 1;
			printf("_______________________________________________________________________\n");
			printf("\n-Rodada de: %s\n", jogador1);
			printf("-Aperte <ENTER> para jogar os dados");
			fflush(stdin);
			getchar();
			bufferDaRodada += dado1 + dado2;
			if (dado1 == 1 && dado2 == 1){
				printf("_______________________________________________________________________\n");
				printf("-Olhos de cobra, os dados obtidos foram:%i e %i, voce perdeu todos os\n" ,dado1, dado2);
				printf("seus pontos.\n");
				pontuacao1 = 0;
				rodada1=0;
				bufferDaRodada = 0;
			}
			else if (dado1 == 1 || dado2 == 1){
				printf("_______________________________________________________________________\n");
				printf("-Olho de cobra, os dados obtidos foram:%i e %i,voce perdeu so os pontos\n", dado1, dado2);
				printf("dessa rodada.\n");
				pontuacao1 = pontuacao1;
				rodada1=0;
				bufferDaRodada = 0;
			}
			else if (dado1 != 1 && dado2 != 1){
				printf("_______________________________________________________________________\n");
				printf("\n-Dados obtidos foram %i e %i.Total:%i", dado1, dado2, pontuacao1+bufferDaRodada);
				
				if (pontuacao1 + bufferDaRodada >= 50){
					rodada1 = 0, rodada2 = 0;
					venceu=TRUE;
					printf("\n-Jogador vencedor eh:%s", jogador1);
					break;
				}
				else if (pontuacao1 + bufferDaRodada <= 49){
					printf("\n-Gostaria de jogar os dados de novo\nSIM[1] NAO[0]\n");
					scanf("%i", &rodada1);
				}

			}

			rodada1 == 1? rodada1=1 :( pontuacao1 += bufferDaRodada, bufferDaRodada=0, rodada2=1,
			printf("\n-Pontuacao total de %s eh:%i\n", jogador1, pontuacao1), system("pause"), system("cls"));
		}
		
		dado1=0, dado2=0;

		while (rodada2){
			dado1 = (rand() % 6) + 1;
			dado2 = (rand() % 6) + 1;
			printf("_______________________________________________________________________\n");
			printf("\n-Rodada de: %s\n", jogador2);
			printf("-Aperte <ENTER> para jogar os dados");
			fflush(stdin);
			getchar();

			bufferDaRodada += dado1 + dado2;

			if (dado1 == 1 && dado2 == 1){
				printf("_______________________________________________________________________\n");
				printf("-Olhos de cobra, os dados obtidos foram:%i e %i, voce perdeu todos os\n" ,dado1, dado2);
				printf("seus pontos.\n");
				pontuacao2 = 0;
				rodada2=0;
				bufferDaRodada = 0;
			}
			else if (dado1 == 1 || dado2 == 1){
				printf("_______________________________________________________________________\n");
				printf("-Olhos de cobra, os dados obtidos foram:%i e %i, voce perdeu so os pontos\n" ,dado1, dado2);
				printf("dessa rodada.\n");
				pontuacao2 = pontuacao2;
				rodada2=0;
				bufferDaRodada = 0;
			}
			else if (dado1 != 1 && dado2 != 1){
				printf("_______________________________________________________________________\n");
				printf("\n-Dados obtidos foram %i e %i.Total:%i", dado1, dado2, pontuacao2+bufferDaRodada);
				
				if (pontuacao2+bufferDaRodada>= 50){
					rodada1 = 0, rodada2 = 0;
					venceu=TRUE;
					printf("\n-Jogador vencedor eh:%s", jogador2);
					break;
				}
				else if (pontuacao2+bufferDaRodada <= 49){
					printf("\n-Gostaria de jogar os dados de novo\nSIM[1] NAO[0]\n");
					scanf("%i", &rodada2);
				}
			}
			rodada2 == 1? rodada2=1 :( pontuacao2 += bufferDaRodada, bufferDaRodada=0, rodada1 = 1,
			printf("\n-Pontuacao total de %s eh:%i\n", jogador2, pontuacao2), system("pause"), system("cls"));
		}
	}

}
