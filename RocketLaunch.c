#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

void countdown(int seconds){
    for(int i=seconds;i>0;i--){
        printf("%d\n",i);
   sleep(1);
    }
    
}

int main(){
    printf("Initialize Rocket system....\n");
    sleep(2);

    printf("Rocket System Initialized. Starting Countdown...\n");
    countdown(10);

    printf("Ignition sequence started.Rocket Launching...\n");
sleep(5);
    printf("Rocket has Launched succesfully !!!!");
    
    return 0;
}