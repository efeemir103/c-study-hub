#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PlayerNum 3

typedef enum{
  global=1,goldnova,silver,bronze
}rank;

typedef struct{
  char name[100];
  rank Rank;
  int kills;
  int deaths;
}player;

player createPlayer();

void printPlayers(player p[],int n);

void sortPlayers(player p[],int n,char *option);

int main(){
  int i;
  char *sortMethod = "k/d";
  player players[PlayerNum];
  for(i=0;i<PlayerNum;i++){
    players[i] = createPlayer();
  }
  sortPlayers(players,PlayerNum,sortMethod);
  printPlayers(players,PlayerNum);
  return 0;
}

player createPlayer(){
  player temp;
  char tempRank[9];
  printf("\nEnter player\'s name: ");
  scanf("%s",temp.name);
  printf("Enter player\'s rank: ");
  scanf("%s",tempRank);
  if(tempRank=="global"){
    temp.Rank=1;
  }
  if(tempRank=="goldnova"){
    temp.Rank=2;
  }
  if(tempRank=="silver"){
    temp.Rank=3;
  }
  if(tempRank=="bronze"){
    temp.Rank=4;
  }
  printf("Enter player\'s kills: ");
  scanf("%d",&temp.kills);
  printf("Enter player\'s deaths: ");
  scanf("%d",&temp.deaths);
  return temp;
}

void printPlayers(player p[],int n){
  int i;
  printf("\n-----LEADERBOARD-----\nName          Rank          Kills          Deaths          K/D\n");
  for(i=0;i<n;i++){
    printf("%s       ",p[i].name);
    if(p[i].Rank==global){
      printf("Global       ");
    }
    if(p[i].Rank==goldnova){
      printf("Goldnova     ");
    }
    if(p[i].Rank==silver){
      printf("Silver       ");
    }
    if(p[i].Rank==bronze){
      printf("Bronze       ");
    }
    printf("%d       %d       %f\n",p[i].deaths,p[i].kills,(float)p[i].kills/p[i].deaths);
  }
}

void sortPlayers(player p[],int n,char *option){
  int i,j;
  player swap;
  if(option=="name"){
    for(i=0;i<n-1;i++){
      for(j=0;j<n;j++){
        if(strcmp(p[i].name,p[i+1].name)>0){
          swap = p[i];
          p[i] = p[i+1];
          p[i+1] = swap;
        }
      }
    }
  }
  if(option=="rank"){
    for(i=0;i<n-1;i++){
      for(j=0;j<n;j++){
        if(p[i].Rank>p[i+1].Rank){
          swap = p[i];
          p[i] = p[i+1];
          p[i+1] = swap;
        }
      }
    }
  }
  if(option=="kills"){
    for(i=0;i<n-1;i++){
      for(j=0;j<n;j++){
        if(p[i].kills<p[i+1].kills){
          swap = p[i];
          p[i] = p[i+1];
          p[i+1] = swap;
        }
      }
    }
  }
  if(option=="deaths"){
    for(i=0;i<n-1;i++){
      for(j=0;j<n;j++){
        if(p[i].deaths>p[i+1].deaths){
          swap = p[i];
          p[i] = p[i+1];
          p[i+1] = swap;
        }
      }
    }
  }
  if(option=="k/d"){
    for(i=0;i<n-1;i++){
      for(j=0;j<n;j++){
        if(p[i].kills/p[i].deaths>p[i+1].kills/p[i].deaths){
          swap = p[i];
          p[i] = p[i+1];
          p[i+1] = swap;
        }
      }
    }
  }
}
