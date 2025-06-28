/*
    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int comparacao, escolha,escolha1, escolha2, escolha3, escolha4, carta, cartaadv;
    int resultado1, resultado, resultado2, resultado3, CP, CA, CPIB, CPT, CDP, CPP, CSP;
    int populaca, populacao, populacao1=12396372,populacao2=6748000,populacao3=2530701,populacao4=2899000, populacao5=3094325, populacao6=1956000,populacao7=2686612,populacao8=1653461;
    int area, areac, area1=1521, area2=1255,area3=331,area4=714,area5=5802,area6=432,area7=314,area8=218;
    int PT,PTC,PT1=50,PT2=40,PT3=20,PT4=35,PT5=15,PT6= 25,PT7=30,PT8=30;
    int PIB, PIBC,PIB1=727,PIB2=639,PIB3=61,PIB4= 160,PIB5=250,PIB6=87,PIB7=57,PIB8=64;
    char str[15], strc[20], opcao;
    float densidade1, densidade2, PP1, PP2, SP1, SP2;

   srand(time(0));
   cartaadv = rand()%8 + 1;
    printf("***Bem vindo ao super trunfo ***\n\n");
    printf("Um jogo de comparacao de cartas !!\n\n");
    printf("  ________           ________\n");
    printf(" |        |         |        | \n");
    printf(" |        |         |        | \n");
    printf(" |        |    vs   |        | \n");
    printf(" |        |         |        | \n");
    printf(" |________|         |________| \n\n");
    printf("menu principal\n");
    printf("a. iniciar jogo\n");
    printf("b. Regars do jogo\n");
    printf("c. sair\n");
    scanf("%s", &opcao);

 switch (opcao)
 {
 case 'a': 
    printf("escolha uma carta\n");
    printf("  ___   ___   ___   ___   ___   ___   ___   ___\n");
    printf(" |   | |   | |   | |   | |   | |   | |   | |   |\n");
    printf(" | 1 | | 2 | | 3 | | 4 | | 5 | | 6 | | 7 | | 8 |\n");
    printf(" |___| |___| |___| |___| |___| |___| |___| |___| \n");
   

    scanf("%d", &carta);
    
    printf("Carta escolhida pelo jogador\n");
   

    if (carta==1){populacao=populacao1,area=area1, PIB=PIB1, PT=PT1,strcpy(str, "Sao Paulo");
    }else if (carta==2){populacao=populacao2, area=area2,PIB=PIB2,PT=PT2,strcpy(str, "Rio de Janeiro");
    }else if (carta==3){populacao=populacao3, area=area3,PIB=PIB3,PT=PT3,strcpy(str, "Belo Horizonte");
    }else if (carta==4){populacao=populacao4, area=area4,PIB=PIB4,PT=PT4,strcpy(str, "Salvador");
    }else if (carta==5){populacao=populacao5, area=area5,PIB=PIB5,PT=PT5,strcpy(str, "Brasília");
    }else if (carta==6){populacao=populacao6, area=area6,PIB=PIB6,PT=PT6,strcpy(str, "Curitiba");
    }else if (carta==7){populacao=populacao7, area=area7,PIB=PIB7,PT=PT7,strcpy(str, "Fortaleza");
    }else if (carta==8){populacao=populacao8, area=area8,PIB=PIB8,PT=PT8,strcpy(str, "Recife");
    }
    

      printf(" ______________________ \n");
      printf("|Cidade :%s     |\n", str);
      printf("|População: %d   |\n", populacao);
      printf("|Área: %d km²        |\n", area);
      printf("|PIB (R$): %d bilhões |\n", PIB);
      printf("|Pontos turísticos: %d |\n", PT);
      printf("|______________________| \n");


    printf("\n\nAgora sera escolhida uma carta aleatoria:\n\n");

    printf("A carta aleatoria e :\n\n");
  
      if (cartaadv==1){populaca=populacao1,areac=area1,PIBC=PIB1,PTC=PT1,strcpy(strc, "Sao Paulo");
      }else if (cartaadv==2){populaca=populacao2,areac=area2,PIBC=PIB2,PTC=PT2,strcpy(strc, "Rio de Janeiro");
      }else if (cartaadv==3){populaca=populacao3,areac=area3,PIBC=PIB3,PTC=PT3,strcpy(strc, "Belo Horizonte");
      }else if (cartaadv==4){populaca=populacao4,areac=area4, PIBC=PIB4,PTC=PT4,strcpy(strc, "Salvador");
      }else if (cartaadv==5){populaca=populacao5,areac=area5,PIBC=PIB5,PTC=PT5,strcpy(strc, "Brasília");
      }else if (cartaadv==6){populaca=populacao6,areac=area6,PIBC=PIB6,PTC=PT6,strcpy(strc, "Curitiba");
      }else if (cartaadv==7){populaca=populacao7,areac=area7,PIBC=PIB7,PTC=PT7,strcpy(strc, "Fortaleza");
      }else if (cartaadv==8){populaca=populacao8,areac=area8,PIBC=PIB8,PTC=PT8,strcpy(strc, "Recife");
      }

      printf(" ______________________ \n");
      printf("|Cidade :%s     |\n", &strc);
      printf("|População: %d   |\n", populaca);
      printf("|Área: %d km²        |\n", areac);
      printf("|PIB (R$): %d bilhões |\n", PIBC);
      printf("|Pontos turísticos: %d |\n", PTC); 
      printf("|______________________| \n"); 
    
   // desnidade populacional e PIB per capita 

   densidade1 = populacao / area;
   PP1 = (float) PIB/populacao;

   densidade2 = populaca / areac;
   PP2 = (float) PIBC/populaca;

   //super poder 

   SP1 = populacao + area + PIB + PT + (1 / densidade1) + PP1;

   SP2 = populaca + areac + PIBC + PTC + (1 / densidade2) + PP2;
  
  printf("\n\nEscolha quantos atributos gostaria de comparar\n");
  printf("1. Dois atributos\n");
  printf("2. Tres atributos\n");
  printf("3. Quarto atribitos\n");
  scanf("%d", &comparacao);

  switch (comparacao)
  {
  case 1:

    printf("\n\nEscolha os atributos para comparacao\n\n");
    printf("Escolha o primeiro atributo");
    printf("1 Populacao :\n");
    printf("2 Area :\n");
    printf("3 PIB :\n");
    printf("4 Pontos turisticos :\n");
    printf("5 Densidade :\n");
    printf("6 PIB per capita :\n");
    printf("7 Super poder :\n\n");
    printf("Escolha o primeiro atributo\n");
    scanf("%d", &escolha);
    printf("Escolha o segundo atributo\n");
    scanf("%d", &escolha1);

  if (escolha1 == escolha)
  {
   printf("Voce escolheu o mesmo atributo\n");
   printf("Escolha um atributo diferente\n");
   printf("Escolha outro atributo\n");
   scanf("%d", escolha2);     
  }else {
   printf("Escolha uma opcao valida!");
   }
  
  if (escolha == 1 ){resultado = populacao>populaca ? 1 :0;printf("Voce escolheu populacao e");
  } else if (escolha == 2 ){resultado = area>areac ? 1 :0 ;printf("Voce escolheu area e");
  } else if(escolha == 3 ){resultado = PIB>PIBC ? 1 :0 ;printf("Voce escolheu PIB e");
  } else if(escolha == 4 ){resultado = PT>PTC ? 1 :0 ;printf("Voce escolheu pontos turisticos e");
  } else if(escolha == 5 ){resultado = densidade1<densidade2 ? 1 :0 ; printf("Voce escolheu densidade e");
  } else if(escolha == 6 ){resultado = PP1>PP2 ? 1 :0 ; printf("Voce escolheu PIB per capita e");
  } else if(escolha ==7){resultado = SP1>SP2 ? 1 :0 ; printf("Voce escolheu SUPER PODER e");}
 
   if ((escolha1 == 1 )||(escolha2==1)){resultado1 = populacao>populaca ? 1 :0; printf(" populacao.\n");
  } else if ((escolha1 == 2 )||(escolha2==1)){resultado1 = area>areac ? 1 :0 ;printf(" area.\n");
  } else if((escolha1 == 3 )||(escolha2==1)){resultado1 = PIB>PIBC ? 1 :0 ;printf(" PIB.\n");
  } else if((escolha1 == 4 )||(escolha2==1)){resultado1 = PT>PTC ? 1 :0 ;printf(" pontos turisticos.\n");
  } else if((escolha1 == 5 )||(escolha2==1)){resultado1 = densidade1<densidade2 ? 1 :0 ;printf(" densidade.\n");
  } else if((escolha1 == 6 )||(escolha2==1)){resultado1 = PP1>PP2 ? 1 :0 ;printf(" PIB per capita.\n");
  } else if((escolha1 == 7 )||(escolha2==1)){resultado1 = SP1>SP2 ? 1 :0 ;printf(" SUPER PODER.\n");}

      printf(" ______________________             ______________________ \n");
      printf("|Cidade :%s      |          |Cidade :%s     |\n", str,strc);
      printf("|População: %d    |          |População: %d    |\n", populacao,populaca);
      printf("|Área: %d km²         |          |Área: %d km²         |\n",area, areac);
      printf("|PIB (R$): %d bilhões  |          |PIB (R$): %d bilhões  |\n",PIB, PIBC);
      printf("|Pontos turísticos: %d  |          |Pontos turísticos: %d |\n", PT, PTC); 
      printf("|______________________ |          |______________________| \n\n"); 

  if (resultado && resultado1)
  {
    printf("Parabens, voce ganhou!!!");
    break;
  }else if ( resultado != resultado1)
  {
    printf("empatou"); 
    break;
  }else{
    printf("Infelizmente, voce perdeu");
  break;}


  case 2:

    printf("\n\nEscolha os atributos para comparacao\n\n");
    printf("Escolha o primeiro atributo");
    printf("1 Populacao :\n");
    printf("2 Area :\n");
    printf("3 PIB :\n");
    printf("4 Pontos turisticos :\n");
    printf("5 Densidade :\n");
    printf("6 PIB per capita :\n");
    printf("7 Super poder :\n\n");
    printf("Escolah o primeiro atributo\n");
    scanf("%d", &escolha);
    printf("Escolah o segundo atributo\n");
    scanf("%d", &escolha1);
    printf("Escolah o segundo atributo\n");
    scanf("%d", &escolha3);
  
 if (escolha == 1 ){resultado = populacao>populaca ? 1 :0;printf("Voce escolheu populacao,");
  } else if (escolha == 2 ){resultado = area>areac ? 1 :0 ;printf("Voce escolheu area,");
  } else if(escolha == 3 ){resultado = PIB>PIBC ? 1 :0 ;printf("Voce escolheu PIB,");
  } else if(escolha == 4 ){resultado = PT>PTC ? 1 :0 ;printf("Voce escolheu pontos turisticos,");
  } else if(escolha == 5 ){resultado = densidade1<densidade2 ? 1 :0 ; printf("Voce escolheu densidade,");
  } else if(escolha == 6 ){resultado = PP1>PP2 ? 1 :0 ; printf("Voce escolheu PIB per capita,");
  } else if(escolha ==7){resultado = SP1>SP2 ? 1 :0 ; printf("Voce escolheu SUPER PODER,");}
 
   if (escolha1 == 1 ){resultado1 = populacao>populaca ? 1 :0; printf(" populacao e");
  } else if(escolha1 == 2){resultado1 = area>areac ? 1 :0 ;printf(" area e");
  } else if(escolha1 == 3 ){resultado1 = PIB>PIBC ? 1 :0 ;printf(" PIB e");
  } else if(escolha1 == 4 ){resultado1 = PT>PTC ? 1 :0 ;printf(" pontos turisticos e");
  } else if(escolha1 == 5 ){resultado1 = densidade1<densidade2 ? 1 :0 ;printf(" densidade e");
  } else if(escolha1 == 6 ){resultado1 = PP1>PP2 ? 1 :0 ;printf(" PIB per capita e");
  } else if(escolha1 == 7 ){resultado1 = SP1>SP2 ? 1 :0 ;printf(" SUPER PODER e");}
 
  if (escolha3 == 1 ){resultado2 = populacao>populaca ? 1 :0;printf(" populacao.\n");
  } else if (escolha3 == 2 ){resultado2 = area>areac ? 1 :0 ;printf(" area.\n");
  } else if(escolha3 == 3 ){resultado2 = PIB>PIBC ? 1 :0 ;printf(" PIB.\n");
  } else if(escolha3 == 4 ){resultado2 = PT>PTC ? 1 :0 ;printf(" pontos turisticos.\n");
  } else if(escolha3 == 5 ){resultado2 = densidade1<densidade2 ? 1 :0 ; printf(" densidade.\n");
  } else if(escolha3 == 6 ){resultado2 = PP1>PP2 ? 1 :0 ; printf(" PIB per capita.\n");
  } else if(escolha3 ==7){resultado2 = SP1>SP2 ? 1 :0 ; printf(" SUPER PODER.\n");}
    
      printf(" ______________________             ______________________ \n");
      printf("|Cidade :%s      |          |Cidade :%s     |\n", str,strc);
      printf("|População: %d    |          |População: %d    |\n", populacao,populaca);
      printf("|Área: %d km²         |          |Área: %d km²         |\n",area, areac);
      printf("|PIB (R$): %d bilhões  |          |PIB (R$): %d bilhões  |\n",PIB, PIBC);
      printf("|Pontos turísticos: %d  |          |Pontos turísticos: %d |\n", PT, PTC); 
      printf("|______________________ |          |______________________| \n\n"); 

  if ((resultado && resultado1)||(resultado && resultado2)||(resultado1 && resultado2))
  {
    printf("Parabens, voce ganhou!!!");
    break;
  }else{
    printf("Infelizmente, voce perdeu");
  break;}


  case 3:
    printf("\n\nEscolha os atributos para comparacao\n\n");
    printf("Escolha o primeiro atributo");
    printf("1 Populacao :\n");
    printf("2 Area :\n");
    printf("3 PIB :\n");
    printf("4 Pontos turisticos :\n");
    printf("5 Densidade :\n");
    printf("6 PIB per capita :\n");
    printf("7 Super poder :\n\n");
    printf("Escolah o primeiro atributo\n");
    scanf("%d", &escolha);
    printf("Escolah o segundo atributo\n");
    scanf("%d", &escolha1);
    printf("Escolah o segundo atributo\n");
    scanf("%d", &escolha3);
    printf("Escolah o segundo atributo\n");
    scanf("%d", &escolha4);

   if (escolha == 1 ){resultado = populacao>populaca ? 1 :0;printf("Voce escolheu populacao,");
  } else if (escolha == 2 ){resultado = area>areac ? 1 :0 ;printf("Voce escolheu area,");
  } else if(escolha == 3 ){resultado = PIB>PIBC ? 1 :0 ;printf("Voce escolheu PIB,");
  } else if(escolha == 4 ){resultado = PT>PTC ? 1 :0 ;printf("Voce escolheu pontos turisticos,");
  } else if(escolha == 5 ){resultado = densidade1<densidade2 ? 1 :0 ; printf("Voce escolheu densidade,");
  } else if(escolha == 6 ){resultado = PP1>PP2 ? 1 :0 ; printf("Voce escolheu PIB per capita,");
  } else if(escolha ==7){resultado = SP1>SP2 ? 1 :0 ; printf("Voce escolheu SUPER PODER,");}
 
   if (escolha1 == 1 ){resultado1 = populacao>populaca ? 1 :0; printf(" populacao,");
  } else if(escolha1 == 2){resultado1 = area>areac ? 1 :0 ;printf(" area,");
  } else if(escolha1 == 3 ){resultado1 = PIB>PIBC ? 1 :0 ;printf(" PIB,");
  } else if(escolha1 == 4 ){resultado1 = PT>PTC ? 1 :0 ;printf(" pontos turisticos,");
  } else if(escolha1 == 5 ){resultado1 = densidade1<densidade2 ? 1 :0 ;printf(" densidade,");
  } else if(escolha1 == 6 ){resultado1 = PP1>PP2 ? 1 :0 ;printf(" PIB per capita,");
  } else if(escolha1 == 7 ){resultado1 = SP1>SP2 ? 1 :0 ;printf(" SUPER PODER,");}
 
  if (escolha3 == 1 ){resultado2 = populacao>populaca ? 1 :0;printf(" populacao e");
  } else if (escolha3 == 2 ){resultado2 = area>areac ? 1 :0 ;printf(" area e");
  } else if(escolha3 == 3 ){resultado2 = PIB>PIBC ? 1 :0 ;printf(" PIB e");
  } else if(escolha3 == 4 ){resultado2 = PT>PTC ? 1 :0 ;printf(" pontos turisticos e");
  } else if(escolha3 == 5 ){resultado2 = densidade1<densidade2 ? 1 :0 ; printf(" densidade e");
  } else if(escolha3 == 6 ){resultado2 = PP1>PP2 ? 1 :0 ; printf(" PIB per capita e");
  } else if(escolha3 ==7){resultado2 = SP1>SP2 ? 1 :0 ; printf(" SUPER PODER e");}
  
   if (escolha4 == 1 ){resultado3 = populacao>populaca ? 1 :0;printf(" populacao.\n");
  } else if (escolha4 == 2 ){resultado3 = area>areac ? 1 :0 ;printf(" area.\n");
  } else if(escolha4 == 3 ){resultado3 = PIB>PIBC ? 1 :0 ;printf(" PIB.\n");
  } else if(escolha4 == 4 ){resultado3 = PT>PTC ? 1 :0 ;printf(" pontos turisticos.\n");
  } else if(escolha4 == 5 ){resultado3 = densidade1<densidade2 ? 1 :0 ; printf(" densidade.\n");
  } else if(escolha4 == 6 ){resultado3 = PP1>PP2 ? 1 :0 ; printf(" PIB per capita.\n");
  } else if(escolha4 ==7){resultado3 = SP1>SP2 ? 1 :0 ; printf(" SUPER PODER.\n\n");}
    
      printf(" ______________________             ______________________ \n");
      printf("|Cidade :%s      |          |Cidade :%s     |\n", str,strc);
      printf("|População: %d    |          |População: %d    |\n", populacao,populaca);
      printf("|Área: %d km²         |          |Área: %d km²         |\n",area, areac);
      printf("|PIB (R$): %d bilhões  |          |PIB (R$): %d bilhões  |\n",PIB, PIBC);
      printf("|Pontos turísticos: %d  |          |Pontos turísticos: %d |\n", PT, PTC); 
      printf("|______________________ |          |______________________| \n\n"); 


  if ((resultado && resultado1 && resultado2)||(resultado1 && resultado2 && resultado3)||(resultado && resultado1 && resultado3))
  {
    printf("Parabens, voce ganhou!!!");
    break;
  }else if (((resultado||resultado1||resultado2||resultado3) && (resultado||resultado1||resultado2||resultado3))!=((resultado||resultado1||resultado2||resultado3) && (resultado||resultado1||resultado2||resultado3)))
  {
    printf("empatou"); 
    break;
  }else{
    printf("Infelizmente, voce perdeu");
   } break;

  case 'b': 
      printf("regras do jogo ");
      
    /* code */
    break;
 default:
 printf("Opção inválida. Tente novamente.\n");
    break;
 }
}
}