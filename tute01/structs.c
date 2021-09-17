#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define NAME_MAX 100

struct pet {
    char name[NAME_MAX];
    char breed[NAME_MAX];
    double weight;
    int age;
};

void age_up(struct pet *mypet) {
    double old_age = mypet->age;
    mypet->age = mypet->age + 1;
    mypet->weight = (mypet->age/old_age) * mypet->weight;
    return;
}

int main(int argc, char *argv[]) {
    struct pet myPet;
    //pet.name = "Fluffy";
/*
    strcpy(fluffy.name, "Fluffy");
    strcpy(fluffy.breed, "Axolotl"); 
    fluffy.age = 7;
    fluffy.weight = 0.3;
    age_up(&fluffy);
*/
    if (argc != 5) {
        printf("do it right next time\n");
    }
    strcpy(myPet.name, argv[1]);
    strcpy(myPet.breed, argv[2]);
    myPet.age = strtol(argv[3], NULL, 10);
    myPet.weight = strtol(argv[4], NULL, 10);
    printf("%s %s %d %lf\n", myPet.name,  myPet.breed,  myPet.age, myPet.weight);
}
