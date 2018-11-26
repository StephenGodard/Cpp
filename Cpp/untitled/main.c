#include <unistd.h> /* necessaire pour les fonctions exec */
#include <sys/types.h> /* necessaire pour la fonction fork */
#include <unistd.h> /* necessaire pour la fonction fork */
#include <stdio.h> /* necessaire pour la fonction perror */
int main(int argc, char * argv[]) {
int joueur[];
#define Maxjoueurs 4

for (int i=0;i<Maxjoueurs;i++){
    joueur[i]=fork();
    if(joueur[i]==0){
        jouer(i);
        exit(i);

    }
}
