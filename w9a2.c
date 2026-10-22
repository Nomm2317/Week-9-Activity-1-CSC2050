#include <stdio.h>
#include <stdbool.h>

struct Boat{
  int length;
  int engineSize;
};

int compareBoat(struct Boat boat1, struct Boat boat2 ){
  // compare length of boat and engine size
  if(boat1 == boat2){
    return 0;
  } else {
    return 1;
  }
}

void printBoat(struct Boat myBoat){
  printf("The boat is %d in length and %d in engine size.\n", myBoat.length, myBoat.engineSize);
}

int containsArr(struct Boat boats[], struct Boat target, bool(*compareBoat)(struct Boat)){
  int count = 0;
  for (int i = 0; i < count; i++){
   return true;
  } 
  return false;

}

void printArr(struct Boat boats[], struct Boat target, void(*print)(struct Boat)){
  int count = 0;
  for (int i = 0; i < count; i++){
   print(boats[i]);
  }

}


int main(int argc, char* argv[])
{

}