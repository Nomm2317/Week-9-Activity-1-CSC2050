#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct Boat{
  int length;
  int engineSize;
} Boat;

int compareBoat(Boat* lhs, Boat* rhs ){

  if(lhs == NULL || rhs == NULL){
    return -1;}

  struct Boat* boat1 = (struct Boat*) lhs;
  struct Boat* boat2 = (struct Boat*) rhs;

  if (boat1->length == boat2->length && boat1->engineSize == boat2->engineSize) {
    return 0;
  }
  return -1;
}

void printBoat(Boat* myBoat){
  if( myBoat != NULL){
    printf("The boat is %d in length and %d in engine size.\n", 
      myBoat->length, myBoat->engineSize);
  }
  
}

int containsArr(Boat **myBoat, int size, Boat* target, int(*compareBoat)(Boat*, Boat*)){
  for (int i = 0; i< size; i++){
    if(compareBoat(myBoat[i], target) == 0){
      return 1;
    }
    return 0;
  }
}

void printArr(Boat **myBoat, int size, void (*printBoat)(Boat*))
{
  if(myBoat != NULL){
    for (int i = 0; i < size; i++){
      printBoat(myBoat[i]);
    }
  }
}


int main(int argc, char* argv[])
{
  Boat* boat1 = (Boat*)malloc(sizeof(Boat));
  boat1->length = 10;
  boat1->engineSize = 20;
  Boat* boat2 = (Boat*)malloc(sizeof(Boat));
  boat2->length = 20;
  boat2->engineSize = 45;
  Boat* boat3 = (Boat*)malloc(sizeof(Boat));
  boat3->length = 30;
  boat3->engineSize = 50;
  Boat* boat4 = (Boat*)malloc(sizeof(Boat));
  boat4->length = 45;
  boat4->engineSize = 30;

  Boat** boats = (Boat**)malloc(sizeof(Boat*)*3);
  boats[0] = boat1;
  boats[1] = boat2;
  boats[2] = boat3;

  printArr(boats, 3, printBoat);
  printf("Does the boat array contain boat 2? %d\n", containsArr(boats, 3, boat2, compareBoat));
  printf("Does the boat array contain boat 1? %d\n", containsArr(boats, 3, boat1, compareBoat));
  return 0;
 
}