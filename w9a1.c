#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void* add(char* type, void* vlhs, void* vrhs ) 
{
  if( strcmp(type, "int") == 0) {
  int* lhs = (int*) vlhs; 
  int* rhs = (int*) vrhs; 
  int* res = (int*) malloc(sizeof(int));
  *res = *lhs + *rhs;
  return (void*)( res );
  //eturn (lhs + rhs);
} else if (strcmp(type, "double") == 0) {
    double * lhs = (double *) vlhs; 
    double * rhs = (double *) vrhs;
    double* res = (double*) malloc(sizeof(double));
    *res = *lhs + *rhs;
    return (void*)( res);
  }
  //return 1;
}

}
int main(int argc, char* argv[])
{
  addInt(5,4,"int");
  printf("The answer is: %d", addInt(5,4,"int"));
}