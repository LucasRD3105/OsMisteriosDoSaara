#include <stdio.h>
#include <string.h>

int main() {
  printf("------------Os mistérios do Saara------------\n");
  printf("\n               Seja bem-vindo!"
         "\n");
  printf("\n---------------------------------------------");
  // variavel para comecar jogo depois de criar personagem:
  int numero1;

  //variaveis jokenpo:
  int respostaJokenpo, vitoria = 0, respostaComputador;
  //variaveis charada:
  int rCharada1, rCharada2;

  // menu jogo variaveis
  int enter, create, quit, resposta, personagem, vida = 100;
  // informacoes personagem variaveis:
  char nome[21], racaDefinitivo[10], alinhamentoDefinitivo[10],
      profissaoDefinitivo[20], metaDefinitivo[10], meioDefinitivo[10],
      porteDefinitivo[10], historiaPrevia[400];
  // vida personagem
  if (vida <= 0) {
    printf("GAME OVER!");
  } // condicao para dar game over!!!!

  // escolha dos acontecimentos:
  int rumo, rumo1, rumo2, rumo3, rumo4, rumo5;

  int raca, alinhamento, profissao, meta, meio, porte;

  printf("\n\n1. Sair\n2. Criar personagem\n3. Entrar no jogo\n\nEscolha uma "
         "das opções acima: ");

  scanf("%d", &resposta);
  if (resposta >= 3) { // resposta e a opcao do menu com numero de 1 a 3.
    printf("\nEscolha inválida, recomeçe o jogo e siga as instruções!");
  }

  // opcoes do jogo.
  switch (resposta) {
  case 1:
    printf("\nGAME OVER!");
    break;

  case 2:

     printf("\nEscolha o nome do seu personagem (até 20 caracteres): ");
    scanf(" %[^\n]", nome);
    
    printf("\nOlá! Seja bem-vindo, %s!\n", nome);

    printf(
        "\nEscolha a raça do seu personagem\n1-Humano\n2-Anão\n3-Elfo\nEscolha uma das opções acima: ");
    scanf("%d", &raca);
    if (raca > 3) {
      printf("\nOpção Inválida! Siga as instruções digitando um número de 1 a 3 seguindo as opções.\n");
      printf(
        "\nEscolha a raça do seu personagem\n1-Humano\n2-Anão\n3-Elfo\nEscolha uma das opções acima: ");
      scanf("%d", &raca);
    }
    
    printf("\nEscolha o alinhamento do seu "
             "personagem:\n1-Mal\n2-Neutro\n3-Bom\nEscolha uma das opções "
             "acima: ");
      scanf("%d", &alinhamento);
    if (alinhamento > 3) {
      printf("\nOpção Inválida! Siga as instruções digitando um número de 1 a 3 seguindo as opções.\n");
      printf(
        "\nEscolha o alinhamento do seu "
             "personagem:\n1-Mal\n2-Neutro\n3-Bom\nEscolha uma das opções "
             "acima: ");
      scanf("%d", &alinhamento);
    }

    
   printf("\nEscolha a profissão do seu "
             "personagem:\n1-Guerreiro\n2-Mago\n3-Ladino\nEscolha uma das "
             "opções acima: ");
      scanf("%d", &profissao);
    if (profissao > 3) {
      printf("\nOpção Inválida! Siga as instruções digitando um número de 1 a 3 seguindo as opções.\n");
      printf(
        "\nEscolha a profissão do seu "
             "personagem:\n1-Guerreiro\n2-Mago\n3-Ladino\nEscolha uma das "
             "opções acima: ");
      scanf("%d", &profissao);
    }
    
    if ((alinhamento == 3) && (profissao == 3)) { 
     printf("\nOpção Inválida. Seu personagem é Bom e não pode escolher essa opção.\n\nEscolha a profissão do seu "
             "personagem:\n1-Guerreiro\n2-Mago\n3-Ladino\nEscolha uma das "
             "opções acima: ");
      scanf("%d", &profissao);
      if (profissao > 3){
        printf("\nOpção Inválida! Reinicie um jogo e siga as instruções digitando apenas números de 1 a 3.");
        break;
      }
    } 
    
   printf(
        "\nEscolha o objetivo do seu personagem\n1-Governar o reino\n2-Ficar "
        "rico\n3-Destruir o mal\nEscolha uma das opções acima: "); //
    scanf("%d", &meta);
    if (meta == 1) {
      metaDefinitivo[10] = 'Governar o reino';
    } else if (meta == 2) {
      metaDefinitivo[10] = 'Ficar rico';
    } else if (meta > 3) {
      printf("\nOpção Inválida! Siga as instruções digitando um número de 1 a 3 seguindo as opções.\n");
      printf(
        "\nEscolha o objetivo do seu personagem\n1-Governar o reino\n2-Ficar "
        "rico\n3-Destruir o mal\nEscolha uma das opções acima: ");
      scanf("%d", &meta);
    } else if ((alinhamento == 1) && (meta == 3)) {
      printf(
          "\nOpção Inválida. Seu personagem é do mal e não pode escolher essa opção.\n");

        printf(
        "\nEscolha o objetivo do seu personagem\n1-Governar o reino\n2-Ficar "
        "rico\n3-Destruir o mal\nEscolha uma das opções acima: ");
      scanf("%d", &meta);
      if (meta > 3){
        printf("\nOpção Inválida! Reinicie um jogo e siga as instruções digitando apenas números de 1 a 3.");
        break;
      }
      
    } else if (meta == 3) {
      metaDefinitivo[10] = 'Destruir o mal';
    }
    printf("\nEscolha o meio em que seu personagem "
        "vive:\n1-Urbano\n2-Rural\n3-Tribal\nEscolha uma das opções acima: ");
    scanf("%d", &meio);
    if ((meio == 3) && (profissao == 3)) { 
     printf("\nOpção Inválida. Seu personagem é Ladino e não pode escolher essa opção.\n\nEscolha o meio em que seu personagem "
        "vive:\n1-Urbano\n2-Rural\n3-Tribal\nEscolha uma das opções acima: ");
      scanf("%d", &profissao);
    } 

    if (meio > 3) {
      printf("\nOpção Inválida! Siga as instruções digitando um número de 1 a 3 seguindo as opções.\n");
      printf(
        "\nEscolha o meio em que seu personagem "
        "vive:\n1-Urbano\n2-Rural\n3-Tribal\nEscolha uma das opções acima: ");
      scanf("%d", &meio);
      if (meio > 3){
        printf("\nOpção Inválida! Reinicie um jogo e siga as instruções digitando apenas números de 1 a 3.");
        break;
      }
    }

    printf("\nHistória prévia do seu personagem (até 400 caracteres): ");
    scanf(" %[^\n]", &historiaPrevia[400]);
    
   printf("\nEscolha o porte do seu personagem:\n1-Grande\n2-Médio\n3-Pequeno\nEscolha uma das opções acima: ");
    scanf("%d", &porte);
    if (porte > 3) {
      printf("\nOpção Inválida! Siga as instruções digitando um número de 1 a 3 seguindo as opções.\n");
      printf(
        "\nEscolha o porte do seu personagem:\n1-Grande\n2-Médio\n3-Pequeno\nEscolha uma das opções acima: ");
      scanf("%d", &porte);
    }
    
    if ((raca == 2) && (porte == 1)) { 
     printf("\nOpção Inválida. Seu personagem é anão e não pode escolher essa opção.\n\nEscolha o porte do seu personagem:\n1-Grande\n2-Médio\n3-Pequeno\nEscolha uma das opções acima:");
      scanf("%d", &porte);
      if (porte > 3){
        printf("\nOpção Inválida! Reinicie um jogo e siga as instruções digitando apenas números de 1 a 3.");
        break;
      }
    } 

    // inicializacao do jogo: printf("\nNow if you want to start the game press
    // Y: "); aqui falta ajeitar a repetição da frase
    printf("\nSe você quer começar o jogo pressione 0: ");
    scanf("%d", &numero1);
    if (numero1 == 0) {
      // inserir codigo do jogo

      // historia introducao comeca aqui
      printf("\nO personagem atualmente vive em um vilarejo abandonado situado nas "
             "ilhas desertas do Saara, onde o calor das manhãs é intenso e "
             "muito frio nas noites escuras. Logo cedo ele perdeu os pais e "
             "não sabe que rumo tomar em sua vida, por isso você vai precisar "
             "ajudá-lo a tomar decisões!\n");

      printf("\nO personagem precisa escolher o que vai fazer agora, e está "
             "pedindo sua ajuda.\n\n1-Fique no deserto e morra\n2-Atravesse o "
             "deserto e encontre um lugar para passar a noite\n3-Ande por aí "
             "procurando comida");

      printf("\n\nEscolha uma das opções acima: ");
      scanf("%d", &rumo);

      if (rumo == 1) {
        printf("\nGAME OVER!");
      } else if (rumo == 2) {
        // continua historia
        printf("\nLegal, você encontrou um bom lugar para ficar em uma cidade "
               "pequena e fez um amigo, o nome dele é Mohammad Baba, mas ele "
               "disse que viu um cartaz de procurado com a sua cara... m3rd@, "
               "o exército do rei está vindo atrás de você , Mohammad está "
               "oferecendo sua ajuda, mas primeiro ele quer saber o que vocês "
               "farão!\n\n1-Fique e lute contra o rei\n2-Se esconda em algum "
               "lugar da cidade até que o exército vá embora\n3-Fuja e "
               "encontre outro lugar para ficar");
        printf("\n\nEscolha uma das opções acima: ");
        scanf("%d", &rumo1);
        if (rumo1 == 1) {
          printf("\nVocê e Mohammad foram muito corajosos e mataram alguns dos "
                 "soldados do rei, agora vocês precisam fugir antes que fique "
                 "ainda mais perigoso! Para onde você e Mohammad devem "
                 "ir?\n\n1-Vá para a casa da irmã de Mohammad por um tempo e "
                 "depois escolha outro lugar para ir mais tarde\n2-Vá para uma "
                 "terra perto de onde você está agora, mas o caminho é muito "
                 "perigoso\n3-Decida ficar onde está mesmo sabendo que será "
                 "uma escolha muito perigosa\n");
          printf("\nEscolha uma das opções acima: ");
          scanf("%d", &rumo2);
          if (rumo2 == 1) {
            printf("\nVocê engravidou a irmã de Mohammad e Mohammad matou "
                   "você. GAME OVER DADDY!");
            break;
          } else if (rumo2 == 2) {
            printf("\nDevido a sua bravura, no caminho, você e seu amigo "
                   "derrotaram os inimigos e chegaram a uma cidade portuaria, "
                   "agora, precisa escolher o rumo de vocês.\n\n1-Entrar em um "
                   "barco e avançar para novas terras\n2-Continuar na cidade e "
                   "esperar os inimigos chegarem até você\n3-Lutar contra o "
                   "rei dessa cidade e se tornar o novo líder\n");
            printf("\nEscolha uma das opções acima: ");
            scanf("%d", &rumo3);
            if (rumo3 == 1) {
              printf("\nVoce chegou em um local desconhecido e foi atacado por "
                     "tribais. Morreu junto a seu amigo Mohammad. GAME OVER");
              break;
            } else if (rumo3 == 2) {
              printf(
                  "\nOs soldados inimigos chegaram e te prenderam. GAME OVER!");
            } else if (rumo3 == 3) {
              printf(
                  "\nVocê e Mohammad batalharam contra o rei e se tornaram os "
                  "novos governantes, obtendo monopólio do comércio marítmo. "
                  "Agora é preciso decidir o que fazer.\n\n1-Expandir em busca "
                  "de terras mais ao norte da europa\n2-Continuar no seu reino "
                  "e fingir para seus súditos que nunca foi perseguido em um "
                  "reino vizinho\n3-Pegar seu exército e atacar seu inimigo\n");
              printf("\nEscolha uma das opções acima: ");
              scanf("%d", &rumo4);

              if (rumo4 == 1) {
                printf("\nVocês comecaram dominando muitas terras, mas ao "
                       "chegar ao extremo norte se depararam com um povo pouco "
                       "conhecido e muito violento, os Vikings, e não "
                       "resistiram a luta contra eles. GAME OVER!");
                break;
              } else if (rumo4 == 2) {
                printf("\nSeus súditos descobriram o que ocorreu no seu "
                       "passado e do Mohammad, mas deixaram esses problemas de "
                       "lado e nada aconteceu por parte deles, mas o exército "
                       "que te perseguia naquela época continuou procurando "
                       "você e seu amigo incansavelmente até que chegaram em "
                       "seu reino e suas forças não conseguiram lutar por "
                       "muito tempo contra elas e se renderam, de forma que "
                       "voce e Mohammad fossem capturados. GAME OVER!");
              } else if (rumo4 == 3) {
                printf(
                    "\nVocê e seu exército foram atrás de seu inimigo, "
                    "ganhando a batalha contra eles. Decida o que "
                    "acontecerá:\n\n1-Tornarão os inimigos capturados em "
                    "escravos de guerra, fazendo-os pagar pela "
                    "perseguição\n2-Irão deixar o outro reino em paz contanto "
                    "que paguem uma multa e prometam nunca mais correr atrás "
                    "de seu reino\n3-Irão seguir batalhando contra todos os "
                    "reinos atá dominar todo continente Africano\n");
                printf("\nEscolha uma das opções acima: ");
                scanf("%d", &rumo5);

                if (rumo5 == 1) {
                  printf(
                      "\nO restante dos inimigos sobreviventes se revoltaram e "
                      "fizeram uma rebelião, conseguindo reverter a situação e "
                      "dizimando seu exército. GAME OVER!");
                  break;
                } else if (rumo5 == 2) {
                  printf("\nO reino que vocês derrotaram aceitaram o acordo. "
                         "Vocês enriqueceram e obtiveram paz. PARABÉNS, VOCÊ "
                         "GANHOU O JOGO!");
                  printf("Você passou pela história do jogo, que grande honra e lhe parabenizo por isso. Mas...pera...parece que o jogo não acabou. Você agora precisa enfrentar o chefão pelo computador para zerar o jogo. A primeira fase consiste em um jogo de Jokenpô! Você precisa escolher entre pedra, papel e tesoura. Ao marcar 2 pontos você segue o jogo rumo a última fase que em breve será desvendada!\n");
  
  while(vitoria < 2){ 

  printf("\nEscolha sua resposta\n1 - Pedra\n2 - Papel\n3 - tesoura\nEscolha uma das opções acima: ");
  scanf("%d", &respostaJokenpo);
    
    srand(time(0));
    respostaComputador = (rand() % 3 -1);
    if(respostaComputador == 11){
      respostaComputador = 1;
    } else if(respostaComputador == 22){
      respostaComputador = 2;
    } else {
      respostaComputador = 3;
    }

    if(respostaJokenpo == respostaComputador){
      printf("\nEmpatou o round!\n");
      printf("Vida atual: %d\n", vida);
    } else if(respostaJokenpo == 1 && respostaComputador == 3){
      printf("\nGanhou o round!\n");
      printf("Vida atual: %d\n", vida);
      vitoria += 1;
    } else if(respostaJokenpo == 2 && respostaComputador == 1){
      printf("\nGanhou o round!\n");
      printf("Vida atual: %d\n", vida);
      vitoria += 1;
    }else if(respostaJokenpo == 3 && respostaComputador == 2){
      printf("\nGanhou o round!\n");
      printf("Vida atual: %d\n", vida);
      vitoria += 1;
    } else{
      printf("\nPerdeu o round!\n");
      vida -= 10;
      printf("Vida atual: %d\n", vida);
    }
    
    if(vida <= 0){
      printf("\nVocê morreu. GAME OVER!\n");
      break;
    }
    if(vitoria == 2){
      printf("\nGanhou o jogo e está pronto para seguir de fase!\n");
      break;
    }
  }
//charada aqui.
                  printf("\nAgora, como fase final, é necessário fazer um teste para ver se voce é realmente digno da vitória. Portanto, responda as charadas feitas por um sábio!\n\n");
                  printf("Sou o começo de tudo, o fim de todos os dias. Sou a primeira luz do amanhecer, o último suspiro ao anoitecer. Sem mim, nada pode existir, sou essencial para todos. Sou a resposta para os mistérios, mas muitas vezes ignorada pelos tolos.\n1- O tempo\n2- A escuridão\n3- O infinito\n\nEscolha uma das opções acima: ");
  scanf("%d", &rCharada1);
  if (rCharada1 == 1) {
    printf("\nACERTOU!\n");
    printf("Vida atual: %d%%\n", vida);
  } else {
    vida -= 50;
    printf("\nERROU! Menos 50 de vida.\n");
    printf("sua vida atual esta em: %d%%\n", vida);
  }
  printf("\nÉ alta quando jovem e baixinha quando fica velha. Além disso, é rápida quando é magra e lenta quando é gorda.\n1-Uma velha\n2-Uma vela\n3-Uma tartaruga\n\nEscolha uma das opções acima: ");
  scanf("%d",&rCharada2);
  if(rCharada2 == 2){
    printf("\nACERTOU!\n");
    printf("Vida atual: %d%%\n\n", vida);
  } else{
    vida -= 50;
    printf("\nERROU! Menos 50 de vida.\n");
    printf("Vida atual: %d%%\n\n", vida);
  }
  if (vida <= 0) {
    printf("GAME OVER!");
  }
  printf("Qual é o objeto que todos têm, alguns compartilham, mas poucos usam?:\n1- Um livro\n2-Um segredo\n3-Um celular\n\nEscolha uma das opções acima: ");
  scanf("%d",&rCharada2);
  if(rCharada2 == 2){
    printf("\nACERTOU!");
    printf("\nVida atual: %d%%\n\n", vida);
  } else{
    vida -= 50;
    printf("\nERROU! Menos 50 de vida.\n");
    printf("Vida atual: %d%%\n\n", vida);
  }
  if (vida <= 0) {
    printf("GAME OVER!");
  }

                  printf("PARABÉNS, VOCÊ ZEROU O JOGO! Você realmente mostrou que é um guerreiro de garra e conseguiu zerar nosso modo história! Que grande honra e mérito!");
                  break;                         
                  break;
                } else if (rumo5 == 3) {
                  printf("\nVocê e seu reino ganharam inúmeras batalhas, mas "
                         "perderam muitos soldados na trajetória, assim, após "
                         "dominar boa parte da região, perderam uma batalha "
                         "contra um pequeno exército, perdendo todas as "
                         "últimas conquistas. GAME OVER!");
                }
              }
            }
          } else if (rumo2 == 3) {
            printf("\nOs soldados encontraram vocês e mataram vocês dois. GAME "
                   "OVER!");
            break;
          }
        } else if (rumo1 == 2) {
          printf("\nEles descobriram onde você e Mohammad estavam escondidos e "
                 "mataram vocês! GAME OVER!");
          break;
        } else if (rumo1 == 3) {
          printf("\nVocê e seu amigo precisam escolher algum lugar para "
                 "ir.\n\n1-Siga Mohammad\n2-Pergunte a alguém para onde você "
                 "precisa ir\n3-Vá para sua antiga vila onde você morava\n");
          printf("\nEscolha uma das opções acima: ");
          scanf("%d", &rumo2);
          if (rumo2 == 1) {
            printf("\nVocê descobriu que Mohammad estava te traindo. Ele te "
                   "matou e ganhou o prêmio por te matar. GAME OVER!");
            break;
          } else if (rumo2 == 2) {
            printf("\nInfelizmente a primeira pessoa que você perguntou estava "
                   "tentando te encontrar e te matar para ganhar o prêmio. "
                   "GAME OVER!");
            break;
          } else if (rumo2 == 3) {
            printf("\nVocê e Mohammad foram para sua cidade que moravam e estão "
                   "seguros por um tempo. Escolha o que vai acontecer "
                   "agora:\n\n1-Construa seu exército para lutar contra o rei "
                   "e liderar o governo\n2-roube sua cidade fazendo coisas "
                   "ruins para a população para o seu próprio bem\n3-Viva como "
                   "uma pessoa normal como se nunca tivesse sido desejado pelo "
                   "exército de um rei\n");
            printf("\nEscolha uma das opções acima: ");
            scanf("%d", &rumo3);

            if (rumo3 == 1) {
              printf(
                  "\nVocê e Mohammad montaram um grande exército que tornou-se "
                  "temido por todos, agora, com todo poder em suas mãos, é "
                  "preciso escolher seu rumo.\n\n1-Decidiram expandir para o "
                  "sul da África em busca de terras e minérios\n2-Ficar em "
                  "suas terras e esperar serem atacados para ter motivo para "
                  "reagirem depois\n3-Invadir o reino em que estavam sendo "
                  "perseguidos buscando vingança e expanção\n");
              printf("\nEscolha uma das opções acima: ");
              scanf("%d", &rumo4);

              if (rumo4 == 1) {
                printf(
                    "\nVocês conquistaram muitas riquezas e poderes. Aagora "
                    "por tamanha fama, estão recebendo ameaças. O que deve ser "
                    "feito?\n\n1-Atacar os líderes de outras terras que estão "
                    "ameaçando você\n2-Criar zonas de produção de alimentos "
                    "para exportar e viver com base nisso\n3-Cruzar o oceano e "
                    "conquistar novas terras localizadas em um novo continente "
                    "chamado Americanas citado em profecias");
                printf("\n\nEscolha uma das opções acima: ");
                scanf("%d", &rumo5);
                if (rumo5 == 1) {
                  printf("\nVocês responderam as ameaças com um ataque "
                         "surpresa, mas o exércitos inimigos estavam juntos "
                         "contra você e acabaram ganhando. GAME OVER!");
                  break;
                } else if (rumo5 == 2) {
                  printf(
                      "\nInicialmente deu muito certo a produção de bens de "
                      "consumo para exportação em fazendas, mas devido ao "
                      "forte crescimento começaram a ser atacados por tropas "
                      "inimigas que buscavam por riquezas. GAME OVER!");
                  break;
                } else if (rumo5 == 3) {
                  printf("\nAs profecias estavam corretas, você e seu amigo "
                         "Mohammad chegaram as Americanas tornando-se "
                         "pioneiros na navegação intercontinental, tornando-se "
                         "reverenciados em todo o mundo e virando grandes "
                         "donos de terras. PARABÉNS, VOCÊ GANHOU!\n\n");

                      printf("Você passou pela história do jogo, que grande honra e lhe parabenizo por isso. Mas...pera...parece que o jogo não acabou. Você agora precisa enfrentar o chefão pelo computador para zerar o jogo. A primeira fase consiste em um jogo de Jokenpô! Você precisa escolher entre pedra, papel e tesoura. Ao marcar 2 pontos você segue o jogo rumo a última fase que em breve será desvendada!\n");
  
  while(vitoria < 2){ 

  printf("\nEscolha sua resposta\n1 - Pedra\n2 - Papel\n3 - tesoura\nEscolha uma das opções acima: ");
  scanf("%d", &respostaJokenpo);
    
    srand(time(0));
    respostaComputador = (rand() % 3 -1);
    if(respostaComputador == 11){
      respostaComputador = 1;
    } else if(respostaComputador == 22){
      respostaComputador = 2;
    } else {
      respostaComputador = 3;
    }

    if(respostaJokenpo == respostaComputador){
      printf("\nEmpatou o round!\n");
      printf("Vida atual: %d\n", vida);
    } else if(respostaJokenpo == 1 && respostaComputador == 3){
      printf("\nGanhou o round!\n");
      printf("Vida atual: %d\n", vida);
      vitoria += 1;
    } else if(respostaJokenpo == 2 && respostaComputador == 1){
      printf("\nGanhou o round!\n");
      printf("Vida atual: %d\n", vida);
      vitoria += 1;
    }else if(respostaJokenpo == 3 && respostaComputador == 2){
      printf("\nGanhou o round!\n");
      printf("Vida atual: %d\n", vida);
      vitoria += 1;
    } else{
      printf("\nPerdeu o round!\n");
      vida -= 10;
      printf("Vida atual: %d\n", vida);
    }
    
    if(vida <= 0){
      printf("\nVocê morreu. GAME OVER!\n");
      break;
    }
    if(vitoria == 2){
      printf("\nGanhou o jogo e está pronto para seguir de fase!\n");
      break;
    }
  }
//charada aqui.
                  printf("\nAgora, como fase final, é necessário fazer um teste para ver se voce é realmente digno da vitória. Portanto, responda as charadas feitas por um sábio!\n\n");
                  printf("Sou o começo de tudo, o fim de todos os dias. Sou a primeira luz do amanhecer, o último suspiro ao anoitecer. Sem mim, nada pode existir, sou essencial para todos. Sou a resposta para os mistérios, mas muitas vezes ignorada pelos tolos.\n1- O tempo\n2- A escuridão\n3- O infinito\n\nEscolha uma das opções acima: ");
  scanf("%d", &rCharada1);
  if (rCharada1 == 1) {
    printf("\nACERTOU!\n");
    printf("Vida atual: %d%%\n", vida);
  } else {
    vida -= 50;
    printf("\nERROU! Menos 50 de vida.\n");
    printf("sua vida atual esta em: %d%%\n", vida);
  }
  printf("\nÉ alta quando jovem e baixinha quando fica velha. Além disso, é rápida quando é magra e lenta quando é gorda.\n1-Uma velha\n2-Uma vela\n3-Uma tartaruga\n\nEscolha uma das opções acima: ");
  scanf("%d",&rCharada2);
  if(rCharada2 == 2){
    printf("\nACERTOU!\n");
    printf("Vida atual: %d%%\n\n", vida);
  } else{
    vida -= 50;
    printf("\nERROU! Menos 50 de vida.\n");
    printf("Vida atual: %d%%\n\n", vida);
  }
  if (vida <= 0) {
    printf("GAME OVER!");
  }
  printf("Qual é o objeto que todos têm, alguns compartilham, mas poucos usam?:\n1- Um livro\n2-Um segredo\n3-Um celular\n\nEscolha uma das opções acima: ");
  scanf("%d",&rCharada2);
  if(rCharada2 == 2){
    printf("\nACERTOU!");
    printf("\nVida atual: %d%%\n\n", vida);
  } else{
    vida -= 50;
    printf("\nERROU! Menos 50 de vida.\n");
    printf("Vida atual: %d%%\n\n", vida);
  }
  if (vida <= 0) {
    printf("GAME OVER!");
  }

                  printf("PARABÉNS, VOCÊ ZEROU O JOGO! Você realmente mostrou que é um guerreiro de garra e conseguiu zerar nosso modo história! Que grande honra e mérito!");
                  break;
                }

              } else if (rumo4 == 2) {
                printf("\nVocês foram atacados e não resistiram, pois o reino "
                       "que invadiu o seu possuía fortes alianças. GAME OVER!");
              } else if (rumo4 == 3) {
                printf("\nVocês invadiram o reino que iniciaram sua história e "
                       "venceram, eliminando seu inimigo e vivendo sem "
                       "tormentas. PARABÉNS, VOCÊ GANHOU O JOGO!\n\n");


                    printf("Você passou pela história do jogo, que grande honra e lhe parabenizo por isso. Mas...pera...parece que o jogo não acabou. Você agora precisa enfrentar o chefão pelo computador para zerar o jogo. A primeira fase consiste em um jogo de Jokenpô! Você precisa escolher entre pedra, papel e tesoura. Ao marcar 2 pontos você segue o jogo rumo a última fase que em breve será desvendada!\n");
  
  while(vitoria < 2){ 

  printf("\nEscolha sua resposta\n1 - Pedra\n2 - Papel\n3 - tesoura\nEscolha uma das opções acima: ");
  scanf("%d", &respostaJokenpo);
    
    srand(time(0));
    respostaComputador = (rand() % 3 -1);
    if(respostaComputador == 11){
      respostaComputador = 1;
    } else if(respostaComputador == 22){
      respostaComputador = 2;
    } else {
      respostaComputador = 3;
    }

    if(respostaJokenpo == respostaComputador){
      printf("\nEmpatou o round!\n");
      printf("Vida atual: %d\n", vida);
    } else if(respostaJokenpo == 1 && respostaComputador == 3){
      printf("\nGanhou o round!\n");
      printf("Vida atual: %d\n", vida);
      vitoria += 1;
    } else if(respostaJokenpo == 2 && respostaComputador == 1){
      printf("\nGanhou o round!\n");
      printf("Vida atual: %d\n", vida);
      vitoria += 1;
    }else if(respostaJokenpo == 3 && respostaComputador == 2){
      printf("\nGanhou o round!\n");
      printf("Vida atual: %d\n", vida);
      vitoria += 1;
    } else{
      printf("\nPerdeu o round!\n");
      vida -= 10;
      printf("Vida atual: %d\n", vida);
    }
    
    if(vida <= 0){
      printf("\nVocê morreu. GAME OVER!\n");
      break;
    }
    if(vitoria == 2){
      printf("\nGanhou o jogo e está pronto para seguir de fase!\n");
      break;
    }    
  }
              // charada aqui.
                 printf("\nAgora, como fase final, é necessário fazer um teste para ver se voce é realmente digno da vitória. Portanto, responda as charadas feitas por um sábio!\n\n");
                  printf("Sou o começo de tudo, o fim de todos os dias. Sou a primeira luz do amanhecer, o último suspiro ao anoitecer. Sem mim, nada pode existir, sou essencial para todos. Sou a resposta para os mistérios, mas muitas vezes ignorada pelos tolos.\n1- O tempo\n2- A escuridão\n3- O infinito\n\nEscolha uma das opções acima: ");
  scanf("%d", &rCharada1);
  if (rCharada1 == 1) {
    printf("\nACERTOU!\n");
    printf("Vida atual: %d%%\n", vida);
  } else {
    vida -= 50;
    printf("\nERROU! Menos 50 de vida.\n");
    printf("sua vida atual esta em: %d%%\n", vida);
  }
  printf("\nÉ alta quando jovem e baixinha quando fica velha. Além disso, é rápida quando é magra e lenta quando é gorda.\n1-Uma velha\n2-Uma vela\n3-Uma tartaruga\n\nEscolha uma das opções acima: ");
  scanf("%d",&rCharada2);
  if(rCharada2 == 2){
    printf("\nACERTOU!\n");
    printf("Vida atual: %d%%\n\n", vida);
  } else{
    vida -= 50;
    printf("\nERROU! Menos 50 de vida.\n");
    printf("Vida atual: %d%%\n\n", vida);
  }
  if (vida <= 0) {
    printf("GAME OVER!");
  }
  printf("Qual é o objeto que todos têm, alguns compartilham, mas poucos usam?:\n1- Um livro\n2-Um segredo\n3-Um celular\n\nEscolha uma das opções acima: ");
  scanf("%d",&rCharada2);
  if(rCharada2 == 2){
    printf("\nACERTOU!");
    printf("\nVida atual: %d%%\n\n", vida);
  } else{
    vida -= 50;
    printf("\nERROU! Menos 50 de vida.\n");
    printf("Vida atual: %d%%\n\n", vida);
  }
  if (vida <= 0) {
    printf("GAME OVER!");
  }

  printf("PARABÉNS, VOCÊ ZEROU O JOGO! Você realmente mostrou que é um guerreiro de garra e conseguiu zerar nosso modo história! Que grande honra e mérito!");
  break;
                
              }

            } else if (rumo3 == 2) {
              printf("\nDevido a suas atitudes ruins, você passou a ser caçado "
                     "pela população local. É necessário fazer alguma "
                     "escolha.\n\n1-Ficar e lutar contra todos que estão "
                     "contra você até exterminar todos a sua volta e tornar-se "
                     "um rei temido\n2-Ir para outro local e dominar o crime "
                     "lá\n3-Você decidiu pedir perdão e devolver tudo o que "
                     "roubou das pessoas\n");
              printf("\nEscolha uma das opções acima: ");
              scanf("%d", &rumo4);

            } else if (rumo3 == 3) {
              printf("\nApesar de ter tentado viver normalmente, uma pessoa o "
                     "reconheceu e lhe entregou para o rei que estava atrás de "
                     "você. GAME OVER!");
              break;
            }
          }
        }
      } else if (rumo == 3) {
        printf("\nGAME OVER!");
      }
    } // historia acaba aqui

  case 3: // atualizar depois a criacao de personagem.
    printf("\nSe você deseja iniciar o jogo, precisará criar um personagem "
           "antes. ");
    printf("\nDigite a opção 2 para criar um personagem: ");// problema
    scanf("%d", &numero1);
    if (numero1 == 2) { 
      
      printf("\nEscolha o nome do seu personagem (até 20 caracteres): ");
    scanf(" %[^\n]", nome);
    
    printf("\nOlá! Seja bem-vindo, %s!\n", nome);

    printf(
        "\nEscolha a raça do seu personagem\n1-Humano\n2-Anão\n3-Elfo\nEscolha uma das opções acima: ");
    scanf("%d", &raca);
    if (raca > 3) {
      printf("\nOpção Inválida! Siga as instruções digitando um número de 1 a 3 seguindo as opções.\n");
      printf(
        "\nEscolha a raça do seu personagem\n1-Humano\n2-Anão\n3-Elfo\nEscolha uma das opções acima: ");
      scanf("%d", &raca);
    }
    
    printf("\nEscolha o alinhamento do seu "
             "personagem:\n1-Mal\n2-Neutro\n3-Bom\nEscolha uma das opções "
             "acima: ");
      scanf("%d", &alinhamento);
    if (alinhamento > 3) {
      printf("\nOpção Inválida! Siga as instruções digitando um número de 1 a 3 seguindo as opções.\n");
      printf(
        "\nEscolha o alinhamento do seu "
             "personagem:\n1-Mal\n2-Neutro\n3-Bom\nEscolha uma das opções "
             "acima: ");
      scanf("%d", &alinhamento);
    }

    
   printf("\nEscolha a profissão do seu "
             "personagem:\n1-Guerreiro\n2-Mago\n3-Ladino\nEscolha uma das "
             "opções acima: ");
      scanf("%d", &profissao);
    if (profissao > 3) {
      printf("\nOpção Inválida! Siga as instruções digitando um número de 1 a 3 seguindo as opções.\n");
      printf(
        "\nEscolha a profissão do seu "
             "personagem:\n1-Guerreiro\n2-Mago\n3-Ladino\nEscolha uma das "
             "opções acima: ");
      scanf("%d", &profissao);
    }
    
    if ((alinhamento == 3) && (profissao == 3)) { 
     printf("\nOpção Inválida. Seu personagem é Bom e não pode escolher essa opção.\n\nEscolha a profissão do seu "
             "personagem:\n1-Guerreiro\n2-Mago\n3-Ladino\nEscolha uma das "
             "opções acima: ");
      scanf("%d", &profissao);
      if (profissao > 3){
        printf("\nOpção Inválida! Reinicie um jogo e siga as instruções digitando apenas números de 1 a 3.");
        break;
      }
    } 
    
   printf(
        "\nEscolha o objetivo do seu personagem\n1-Governar o reino\n2-Ficar "
        "rico\n3-Destruir o mal\nEscolha uma das opções acima: "); //
    scanf("%d", &meta);
    if (meta == 1) {
      metaDefinitivo[10] = 'Governar o reino';
    } else if (meta == 2) {
      metaDefinitivo[10] = 'Ficar rico';
    } else if (meta > 3) {
      printf("\nOpção Inválida! Siga as instruções digitando um número de 1 a 3 seguindo as opções.\n");
      printf(
        "\nEscolha o objetivo do seu personagem\n1-Governar o reino\n2-Ficar "
        "rico\n3-Destruir o mal\nEscolha uma das opções acima: ");
      scanf("%d", &meta);
    } else if ((alinhamento == 1) && (meta == 3)) {
      printf(
          "\nOpção Inválida. Seu personagem é do mal e não pode escolher essa opção.\n");

        printf(
        "\nEscolha o objetivo do seu personagem\n1-Governar o reino\n2-Ficar "
        "rico\n3-Destruir o mal\nEscolha uma das opções acima: ");
      scanf("%d", &meta);
      if (meta > 3){
        printf("\nOpção Inválida! Reinicie um jogo e siga as instruções digitando apenas números de 1 a 3.");
        break;
      }
      
    } else if (meta == 3) {
      metaDefinitivo[10] = 'Destruir o mal';
    }
    printf("\nEscolha o meio em que seu personagem "
        "vive:\n1-Urbano\n2-Rural\n3-Tribal\nEscolha uma das opções acima: ");
    scanf("%d", &meio);
    if ((meio == 3) && (profissao == 3)) { 
     printf("\nOpção Inválida. Seu personagem é Ladino e não pode escolher essa opção.\n\nEscolha o meio em que seu personagem "
        "vive:\n1-Urbano\n2-Rural\n3-Tribal\nEscolha uma das opções acima: ");
      scanf("%d", &profissao);
    } 

    if (meio > 3) {
      printf("\nOpção Inválida! Siga as instruções digitando um número de 1 a 3 seguindo as opções.\n");
      printf(
        "\nEscolha o meio em que seu personagem "
        "vive:\n1-Urbano\n2-Rural\n3-Tribal\nEscolha uma das opções acima: ");
      scanf("%d", &meio);
      if (meio > 3){
        printf("\nOpção Inválida! Reinicie um jogo e siga as instruções digitando apenas números de 1 a 3.");
        break;
      }
    }

    printf("\nHistória prévia do seu personagem (até 400 caracteres): ");
    scanf(" %[^\n]", &historiaPrevia[400]);
    
   printf("\nEscolha o porte do seu personagem:\n1-Grande\n2-Médio\n3-Pequeno\nEscolha uma das opções acima: ");
    scanf("%d", &porte);
    if (porte > 3) {
      printf("\nOpção Inválida! Siga as instruções digitando um número de 1 a 3 seguindo as opções.\n");
      printf(
        "\nEscolha o porte do seu personagem:\n1-Grande\n2-Médio\n3-Pequeno\nEscolha uma das opções acima: ");
      scanf("%d", &porte);
    }
    
    if ((raca == 2) && (porte == 1)) { 
     printf("\nOpção Inválida. Seu personagem é anão e não pode escolher essa opção.\n\nEscolha o porte do seu personagem:\n1-Grande\n2-Médio\n3-Pequeno\nEscolha uma das opções acima:");
      scanf("%d", &porte);
      if (porte > 3){
        printf("\nOpção Inválida! Reinicie um jogo e siga as instruções digitando apenas números de 1 a 3.");
        break;
      }
    } 

      // inicializacao do jogo: printf("\nNow if you want to start the game
      // press Y: "); aqui falta ajeitar a repetição da frase
      printf("\nSe você quer começar o jogo pressione 0: ");
      scanf("%d", &numero1);
      if (numero1 == 0) {
        // inserir codigo do jogo
         // historia introducao comeca aqui
      printf("\nO personagem atualmente vive em um vilarejo abandonado situado nas "
             "ilhas desertas do Saara, onde o calor das manhãs é intenso e "
             "muito frio nas noites escuras. Logo cedo ele perdeu os pais e "
             "não sabe que rumo tomar em sua vida, por isso você vai precisar "
             "ajudá-lo a tomar decisões!\n");

      printf("\nO personagem precisa escolher o que vai fazer agora, e está "
             "pedindo sua ajuda.\n\n1-Fique no deserto e morra\n2-Atravesse o "
             "deserto e encontre um lugar para passar a noite\n3-Ande por aí "
             "procurando comida");

      printf("\n\nEscolha uma das opções acima: ");
      scanf("%d", &rumo);

      if (rumo == 1) {
        printf("\nGAME OVER!");
      } else if (rumo == 2) {
        // continua historia
        printf("\nLegal, você encontrou um bom lugar para ficar em uma cidade "
               "pequena e fez um amigo, o nome dele é Mohammad Baba, mas ele "
               "disse que viu um cartaz de procurado com a sua cara... m3rd@, "
               "o exército do rei está vindo atrás de você , Mohammad está "
               "oferecendo sua ajuda, mas primeiro ele quer saber o que vocês "
               "farão!\n\n1-Fique e lute contra o rei\n2-Se esconda em algum "
               "lugar da cidade até que o exército vá embora\n3-Fuja e "
               "encontre outro lugar para ficar");
        printf("\n\nEscolha uma das opções acima: ");
        scanf("%d", &rumo1);
        if (rumo1 == 1) {
          printf("\nVocê e Mohammad foram muito corajosos e mataram alguns dos "
                 "soldados do rei, agora vocês precisam fugir antes que fique "
                 "ainda mais perigoso! Para onde você e Mohammad devem "
                 "ir?\n\n1-Vá para a casa da irmã de Mohammad por um tempo e "
                 "depois escolha outro lugar para ir mais tarde\n2-Vá para uma "
                 "terra perto de onde você está agora, mas o caminho é muito "
                 "perigoso\n3-Decida ficar onde está mesmo sabendo que será "
                 "uma escolha muito perigosa\n");
          printf("\nEscolha uma das opções acima: ");
          scanf("%d", &rumo2);
          if (rumo2 == 1) {
            printf("\nVocê engravidou a irmã de Mohammad e Mohammad matou "
                   "você. GAME OVER DADDY!");
            break;
          } else if (rumo2 == 2) {
            printf("\nDevido a sua bravura, no caminho, você e seu amigo "
                   "derrotaram os inimigos e chegaram a uma cidade portuaria, "
                   "agora, precisa escolher o rumo de vocês.\n\n1-Entrar em um "
                   "barco e avançar para novas terras\n2-Continuar na cidade e "
                   "esperar os inimigos chegarem até você\n3-Lutar contra o "
                   "rei dessa cidade e se tornar o novo líder\n");
            printf("\nEscolha uma das opções acima: ");
            scanf("%d", &rumo3);
            if (rumo3 == 1) {
              printf("\nVoce chegou em um local desconhecido e foi atacado por "
                     "tribais. Morreu junto a seu amigo Mohammad. GAME OVER");
              break;
            } else if (rumo3 == 2) {
              printf(
                  "\nOs soldados inimigos chegaram e te prenderam. GAME OVER!");
            } else if (rumo3 == 3) {
              printf(
                  "\nVocê e Mohammad batalharam contra o rei e se tornaram os "
                  "novos governantes, obtendo monopólio do comércio marítmo. "
                  "Agora é preciso decidir o que fazer.\n\n1-Expandir em busca "
                  "de terras mais ao norte da europa\n2-Continuar no seu reino "
                  "e fingir para seus súditos que nunca foi perseguido em um "
                  "reino vizinho\n3-Pegar seu exército e atacar seu inimigo\n");
              printf("\nEscolha uma das opções acima: ");
              scanf("%d", &rumo4);

              if (rumo4 == 1) {
                printf("\nVocês comecaram dominando muitas terras, mas ao "
                       "chegar ao extremo norte se depararam com um povo pouco "
                       "conhecido e muito violento, os Vikings, e não "
                       "resistiram a luta contra eles. GAME OVER!");
                break;
              } else if (rumo4 == 2) {
                printf("\nSeus súditos descobriram o que ocorreu no seu "
                       "passado e do Mohammad, mas deixaram esses problemas de "
                       "lado e nada aconteceu por parte deles, mas o exército "
                       "que te perseguia naquela época continuou procurando "
                       "você e seu amigo incansavelmente até que chegaram em "
                       "seu reino e suas forças não conseguiram lutar por "
                       "muito tempo contra elas e se renderam, de forma que "
                       "voce e Mohammad fossem capturados. GAME OVER!");
              } else if (rumo4 == 3) {
                printf(
                    "\nVocê e seu exército foram atrás de seu inimigo, "
                    "ganhando a batalha contra eles. Decida o que "
                    "acontecerá:\n\n1-Tornarão os inimigos capturados em "
                    "escravos de guerra, fazendo-os pagar pela "
                    "perseguição\n2-Irão deixar o outro reino em paz contanto "
                    "que paguem uma multa e prometam nunca mais correr atrás "
                    "de seu reino\n3-Irão seguir batalhando contra todos os "
                    "reinos atá dominar todo continente Africano\n");
                printf("\nEscolha uma das opções acima: ");
                scanf("%d", &rumo5);

                if (rumo5 == 1) {
                  printf(
                      "\nO restante dos inimigos sobreviventes se revoltaram e "
                      "fizeram uma rebelião, conseguindo reverter a situação e "
                      "dizimando seu exército. GAME OVER!");
                  break;
                } else if (rumo5 == 2) {
                  printf("\nO reino que vocês derrotaram aceitaram o acordo. "
                         "Vocês enriqueceram e obtiveram paz. PARABÉNS, VOCÊ "
                         "GANHOU O JOGO!");
                 printf("Você passou pela história do jogo, que grande honra e lhe parabenizo por isso. Mas...pera...parece que o jogo não acabou. Você agora precisa enfrentar o chefão pelo computador para zerar o jogo. A primeira fase consiste em um jogo de Jokenpô! Você precisa escolher entre pedra, papel e tesoura. Ao marcar 2 pontos você segue o jogo rumo a última fase que em breve será desvendada!\n");
  
  while(vitoria < 2){ 

  printf("\nEscolha sua resposta\n1 - Pedra\n2 - Papel\n3 - tesoura\nEscolha uma das opções acima: ");
  scanf("%d", &respostaJokenpo);
    
    srand(time(0));
    respostaComputador = (rand() % 3 -1);
    if(respostaComputador == 11){
      respostaComputador = 1;
    } else if(respostaComputador == 22){
      respostaComputador = 2;
    } else {
      respostaComputador = 3;
    }

    if(respostaJokenpo == respostaComputador){
      printf("\nEmpatou o round!\n");
      printf("Vida atual: %d\n", vida);
    } else if(respostaJokenpo == 1 && respostaComputador == 3){
      printf("\nGanhou o round!\n");
      printf("Vida atual: %d\n", vida);
      vitoria += 1;
    } else if(respostaJokenpo == 2 && respostaComputador == 1){
      printf("\nGanhou o round!\n");
      printf("Vida atual: %d\n", vida);
      vitoria += 1;
    }else if(respostaJokenpo == 3 && respostaComputador == 2){
      printf("\nGanhou o round!\n");
      printf("Vida atual: %d\n", vida);
      vitoria += 1;
    } else{
      printf("\nPerdeu o round!\n");
      vida -= 10;
      printf("Vida atual: %d\n", vida);
    }
    
    if(vida <= 0){
      printf("\nVocê morreu. GAME OVER!\n");
      break;
    }
    if(vitoria == 2){
      printf("\nGanhou o jogo e está pronto para seguir de fase!\n");
      break;
    }
  }
//charada aqui.
                  printf("\nAgora, como fase final, é necessário fazer um teste para ver se voce é realmente digno da vitória. Portanto, responda as charadas feitas por um sábio!\n\n");
                  printf("Sou o começo de tudo, o fim de todos os dias. Sou a primeira luz do amanhecer, o último suspiro ao anoitecer. Sem mim, nada pode existir, sou essencial para todos. Sou a resposta para os mistérios, mas muitas vezes ignorada pelos tolos.\n1- O tempo\n2- A escuridão\n3- O infinito\n\nEscolha uma das opções acima: ");
  scanf("%d", &rCharada1);
  if (rCharada1 == 1) {
    printf("\nACERTOU!\n");
    printf("Vida atual: %d%%\n", vida);
  } else {
    vida -= 50;
    printf("\nERROU! Menos 50 de vida.\n");
    printf("sua vida atual esta em: %d%%\n", vida);
  }
  printf("\nÉ alta quando jovem e baixinha quando fica velha. Além disso, é rápida quando é magra e lenta quando é gorda.\n1-Uma velha\n2-Uma vela\n3-Uma tartaruga\n\nEscolha uma das opções acima: ");
  scanf("%d",&rCharada2);
  if(rCharada2 == 2){
    printf("\nACERTOU!\n");
    printf("Vida atual: %d%%\n\n", vida);
  } else{
    vida -= 50;
    printf("\nERROU! Menos 50 de vida.\n");
    printf("Vida atual: %d%%\n\n", vida);
  }
  if (vida <= 0) {
    printf("GAME OVER!");
  }
  printf("Qual é o objeto que todos têm, alguns compartilham, mas poucos usam?:\n1- Um livro\n2-Um segredo\n3-Um celular\n\nEscolha uma das opções acima: ");
  scanf("%d",&rCharada2);
  if(rCharada2 == 2){
    printf("\nACERTOU!");
    printf("\nVida atual: %d%%\n\n", vida);
  } else{
    vida -= 50;
    printf("\nERROU! Menos 50 de vida.\n");
    printf("Vida atual: %d%%\n\n", vida);
  }
  if (vida <= 0) {
    printf("GAME OVER!");
  }

                  printf("PARABÉNS, VOCÊ ZEROU O JOGO! Você realmente mostrou que é um guerreiro de garra e conseguiu zerar nosso modo história! Que grande honra e mérito!");
                  break;                        
                  break;
                } else if (rumo5 == 3) {
                  printf("\nVocê e seu reino ganharam inúmeras batalhas, mas "
                         "perderam muitos soldados na trajetória, assim, após "
                         "dominar boa parte da região, perderam uma batalha "
                         "contra um pequeno exército, perdendo todas as "
                         "últimas conquistas. GAME OVER!");
                }
              }
            }
          } else if (rumo2 == 3) {
            printf("\nOs soldados encontraram vocês e mataram vocês dois. GAME "
                   "OVER!");
            break;
          }
        } else if (rumo1 == 2) {
          printf("\nEles descobriram onde você e Mohammad estavam escondidos e "
                 "mataram vocês! GAME OVER!");
          break;
        } else if (rumo1 == 3) {
          printf("\nVocê e seu amigo precisam escolher algum lugar para "
                 "ir.\n\n1-Siga Mohammad\n2-Pergunte a alguém para onde você "
                 "precisa ir\n3-Vá para sua antiga vila onde você morava\n");
          printf("\nEscolha uma das opções acima: ");
          scanf("%d", &rumo2);
          if (rumo2 == 1) {
            printf("\nVocê descobriu que Mohammad estava te traindo. Ele te "
                   "matou e ganhou o prêmio por te matar. GAME OVER!");
            break;
          } else if (rumo2 == 2) {
            printf("\nInfelizmente a primeira pessoa que você perguntou estava "
                   "tentando te encontrar e te matar para ganhar o prêmio. "
                   "GAME OVER!");
            break;
          } else if (rumo2 == 3) {
            printf("\nVocê e Mohammad foram para sua cidade que moravam e estão "
                   "seguros por um tempo. Escolha o que vai acontecer "
                   "agora:\n\n1-Construa seu exército para lutar contra o rei "
                   "e liderar o governo\n2-roube sua cidade fazendo coisas "
                   "ruins para a população para o seu próprio bem\n3-Viva como "
                   "uma pessoa normal como se nunca tivesse sido desejado pelo "
                   "exército de um rei\n");
            printf("\nEscolha uma das opções acima: ");
            scanf("%d", &rumo3);

            if (rumo3 == 1) {
              printf(
                  "\nVocê e Mohammad montaram um grande exército que tornou-se "
                  "temido por todos, agora, com todo poder em suas mãos, é "
                  "preciso escolher seu rumo.\n\n1-Decidiram expandir para o "
                  "sul da África em busca de terras e minérios\n2-Ficar em "
                  "suas terras e esperar serem atacados para ter motivo para "
                  "reagirem depois\n3-Invadir o reino em que estavam sendo "
                  "perseguidos buscando vingança e expanção\n");
              printf("\nEscolha uma das opções acima: ");
              scanf("%d", &rumo4);

              if (rumo4 == 1) {
                printf(
                    "\nVocês conquistaram muitas riquezas e poderes. Aagora "
                    "por tamanha fama, estão recebendo ameaças. O que deve ser "
                    "feito?\n\n1-Atacar os líderes de outras terras que estão "
                    "ameaçando você\n2-Criar zonas de produção de alimentos "
                    "para exportar e viver com base nisso\n3-Cruzar o oceano e "
                    "conquistar novas terras localizadas em um novo continente "
                    "chamado Americanas citado em profecias");
                printf("\n\nEscolha uma das opções acima: ");
                scanf("%d", &rumo5);
                if (rumo5 == 1) {
                  printf("\nVocês responderam as ameaças com um ataque "
                         "surpresa, mas o exércitos inimigos estavam juntos "
                         "contra você e acabaram ganhando. GAME OVER!");
                  break;
                } else if (rumo5 == 2) {
                  printf(
                      "\nInicialmente deu muito certo a produção de bens de "
                      "consumo para exportação em fazendas, mas devido ao "
                      "forte crescimento começaram a ser atacados por tropas "
                      "inimigas que buscavam por riquezas. GAME OVER!");
                  break;
                } else if (rumo5 == 3) {
                  printf("\nAs profecias estavam corretas, você e seu amigo "
                         "Mohammad chegaram as Americanas tornando-se "
                         "pioneiros na navegação intercontinental, tornando-se "
                         "reverenciados em todo o mundo e virando grandes "
                         "donos de terras. PARABÉNS, VOCÊ GANHOU!\n\n");

                      printf("Você passou pela história do jogo, que grande honra e lhe parabenizo por isso. Mas...pera...parece que o jogo não acabou. Você agora precisa enfrentar o chefão pelo computador para zerar o jogo. A primeira fase consiste em um jogo de Jokenpô! Você precisa escolher entre pedra, papel e tesoura. Ao marcar 2 pontos você segue o jogo rumo a última fase que em breve será desvendada!\n");
  
  while(vitoria < 2){ 

  printf("\nEscolha sua resposta\n1 - Pedra\n2 - Papel\n3 - tesoura\nEscolha uma das opções acima: ");
  scanf("%d", &respostaJokenpo);
    
    srand(time(0));
    respostaComputador = (rand() % 3 -1);
    if(respostaComputador == 11){
      respostaComputador = 1;
    } else if(respostaComputador == 22){
      respostaComputador = 2;
    } else {
      respostaComputador = 3;
    }

    if(respostaJokenpo == respostaComputador){
      printf("\nEmpatou o round!\n");
      printf("Vida atual: %d\n", vida);
    } else if(respostaJokenpo == 1 && respostaComputador == 3){
      printf("\nGanhou o round!\n");
      printf("Vida atual: %d\n", vida);
      vitoria += 1;
    } else if(respostaJokenpo == 2 && respostaComputador == 1){
      printf("\nGanhou o round!\n");
      printf("Vida atual: %d\n", vida);
      vitoria += 1;
    }else if(respostaJokenpo == 3 && respostaComputador == 2){
      printf("\nGanhou o round!\n");
      printf("Vida atual: %d\n", vida);
      vitoria += 1;
    } else{
      printf("\nPerdeu o round!\n");
      vida -= 10;
      printf("Vida atual: %d\n", vida);
    }
    
    if(vida <= 0){
      printf("\nVocê morreu. GAME OVER!\n");
      break;
    }
    if(vitoria == 2){
      printf("\nGanhou o jogo e está pronto para seguir de fase!\n");
      break;
    }
  }
//charada aqui.
                  printf("\nAgora, como fase final, é necessário fazer um teste para ver se voce é realmente digno da vitória. Portanto, responda as charadas feitas por um sábio!\n\n");
                  printf("Sou o começo de tudo, o fim de todos os dias. Sou a primeira luz do amanhecer, o último suspiro ao anoitecer. Sem mim, nada pode existir, sou essencial para todos. Sou a resposta para os mistérios, mas muitas vezes ignorada pelos tolos.\n1- O tempo\n2- A escuridão\n3- O infinito\n\nEscolha uma das opções acima: ");
  scanf("%d", &rCharada1);
  if (rCharada1 == 1) {
    printf("\nACERTOU!\n");
    printf("Vida atual: %d%%\n", vida);
  } else {
    vida -= 50;
    printf("\nERROU! Menos 50 de vida.\n");
    printf("sua vida atual esta em: %d%%\n", vida);
  }
  printf("\nÉ alta quando jovem e baixinha quando fica velha. Além disso, é rápida quando é magra e lenta quando é gorda.\n1-Uma velha\n2-Uma vela\n3-Uma tartaruga\n\nEscolha uma das opções acima: ");
  scanf("%d",&rCharada2);
  if(rCharada2 == 2){
    printf("\nACERTOU!\n");
    printf("Vida atual: %d%%\n\n", vida);
  } else{
    vida -= 50;
    printf("\nERROU! Menos 50 de vida.\n");
    printf("Vida atual: %d%%\n\n", vida);
  }
  if (vida <= 0) {
    printf("GAME OVER!");
  }
  printf("Qual é o objeto que todos têm, alguns compartilham, mas poucos usam?:\n1- Um livro\n2-Um segredo\n3-Um celular\n\nEscolha uma das opções acima: ");
  scanf("%d",&rCharada2);
  if(rCharada2 == 2){
    printf("\nACERTOU!");
    printf("\nVida atual: %d%%\n\n", vida);
  } else{
    vida -= 50;
    printf("\nERROU! Menos 50 de vida.\n");
    printf("Vida atual: %d%%\n\n", vida);
  }
  if (vida <= 0) {
    printf("GAME OVER!");
  }

                  printf("PARABÉNS, VOCÊ ZEROU O JOGO! Você realmente mostrou que é um guerreiro de garra e conseguiu zerar nosso modo história! Que grande honra e mérito!");
                  break;
                }

              } else if (rumo4 == 2) {
                printf("\nVocês foram atacados e não resistiram, pois o reino "
                       "que invadiu o seu possuía fortes alianças. GAME OVER!");
              } else if (rumo4 == 3) {
                printf("\nVocês invadiram o reino que iniciaram sua história e "
                       "venceram, eliminando seu inimigo e vivendo sem "
                       "tormentas. PARABÉNS, VOCÊ GANHOU O JOGO!\n\n");


                    printf("Você passou pela história do jogo, que grande honra e lhe parabenizo por isso. Mas...pera...parece que o jogo não acabou. Você agora precisa enfrentar o chefão pelo computador para zerar o jogo. A primeira fase consiste em um jogo de Jokenpô! Você precisa escolher entre pedra, papel e tesoura. Ao marcar 2 pontos você segue o jogo rumo a última fase que em breve será desvendada!\n");
  
  while(vitoria < 2){ 

  printf("\nEscolha sua resposta\n1 - Pedra\n2 - Papel\n3 - tesoura\nEscolha uma das opções acima: ");
  scanf("%d", &respostaJokenpo);
    
    srand(time(0));
    respostaComputador = (rand() % 3 -1);
    if(respostaComputador == 11){
      respostaComputador = 1;
    } else if(respostaComputador == 22){
      respostaComputador = 2;
    } else {
      respostaComputador = 3;
    }

    if(respostaJokenpo == respostaComputador){
      printf("\nEmpatou o round!\n");
      printf("Vida atual: %d\n", vida);
    } else if(respostaJokenpo == 1 && respostaComputador == 3){
      printf("\nGanhou o round!\n");
      printf("Vida atual: %d\n", vida);
      vitoria += 1;
    } else if(respostaJokenpo == 2 && respostaComputador == 1){
      printf("\nGanhou o round!\n");
      printf("Vida atual: %d\n", vida);
      vitoria += 1;
    }else if(respostaJokenpo == 3 && respostaComputador == 2){
      printf("\nGanhou o round!\n");
      printf("Vida atual: %d\n", vida);
      vitoria += 1;
    } else{
      printf("\nPerdeu o round!\n");
      vida -= 10;
      printf("Vida atual: %d\n", vida);
    }
    
    if(vida <= 0){
      printf("\nVocê morreu. GAME OVER!\n");
      break;
    }
    if(vitoria == 2){
      printf("\nGanhou o jogo e está pronto para seguir de fase!\n");
      break;
    }    
  }
              // charada aqui.
                 printf("\nAgora, como fase final, é necessário fazer um teste para ver se voce é realmente digno da vitória. Portanto, responda as charadas feitas por um sábio!\n\n");
                  printf("Sou o começo de tudo, o fim de todos os dias. Sou a primeira luz do amanhecer, o último suspiro ao anoitecer. Sem mim, nada pode existir, sou essencial para todos. Sou a resposta para os mistérios, mas muitas vezes ignorada pelos tolos.\n1- O tempo\n2- A escuridão\n3- O infinito\n\nEscolha uma das opções acima: ");
  scanf("%d", &rCharada1);
  if (rCharada1 == 1) {
    printf("\nACERTOU!\n");
    printf("Vida atual: %d%%\n", vida);
  } else {
    vida -= 50;
    printf("\nERROU! Menos 50 de vida.\n");
    printf("sua vida atual esta em: %d%%\n", vida);
  }
  printf("\nÉ alta quando jovem e baixinha quando fica velha. Além disso, é rápida quando é magra e lenta quando é gorda.\n1-Uma velha\n2-Uma vela\n3-Uma tartaruga\n\nEscolha uma das opções acima: ");
  scanf("%d",&rCharada2);
  if(rCharada2 == 2){
    printf("\nACERTOU!\n");
    printf("Vida atual: %d%%\n\n", vida);
  } else{
    vida -= 50;
    printf("\nERROU! Menos 50 de vida.\n");
    printf("Vida atual: %d%%\n\n", vida);
  }
  if (vida <= 0) {
    printf("GAME OVER!");
  }
  printf("Qual é o objeto que todos têm, alguns compartilham, mas poucos usam?:\n1- Um livro\n2-Um segredo\n3-Um celular\n\nEscolha uma das opções acima: ");
  scanf("%d",&rCharada2);
  if(rCharada2 == 2){
    printf("\nACERTOU!");
    printf("\nVida atual: %d%%\n\n", vida);
  } else{
    vida -= 50;
    printf("\nERROU! Menos 50 de vida.\n");
    printf("Vida atual: %d%%\n\n", vida);
  }
  if (vida <= 0) {
    printf("GAME OVER!");
  }


printf("PARABÉNS, VOCÊ ZEROU O JOGO! Você realmente mostrou que é um guerreiro de garra e conseguiu zerar nosso modo história! Que grande honra e mérito!");
                break;
              }

            } else if (rumo3 == 2) {
              printf("\nDevido a suas atitudes ruins, você passou a ser caçado "
                     "pela população local. É necessário fazer alguma "
                     "escolha.\n\n1-Ficar e lutar contra todos que estão "
                     "contra você até exterminar todos a sua volta e tornar-se "
                     "um rei temido\n2-Ir para outro local e dominar o crime "
                     "lá\n3-Você decidiu pedir perdão e devolver tudo o que "
                     "roubou das pessoas\n");
              printf("\nEscolha uma das opções acima: ");
              scanf("%d", &rumo4);

            } else if (rumo3 == 3) {
              printf("\nApesar de ter tentado viver normalmente, uma pessoa o "
                     "reconheceu e lhe entregou para o rei que estava atrás de "
                     "você. GAME OVER!");
              break;
            }
          }
        }
      } else if (rumo == 3) {
        printf("\nGAME OVER!");
      }
    } // historia acaba aqui
      
    } else if (numero1 != 2) {
      printf("\nOpção inválida! GAME OVER!");
    }
  }

  return 0;
}
