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
  else if(strcmp(type, "char") == 0){
    char* lhs = (char*) vlhs;
    char* rhs = (char*) vrhs;
    char* res = (char*) malloc(3 * sizeof(char));

    res[0] = *lhs;
    res[1] = *rhs;
    res[2] = '\0';

    //return res;

    return (void*) (res);
  }
  //return 1;
}

int main(int argc, char* argv[])
{
  int x = 5;
  int y = 10;

  double a = 5.0;
  double b = 10.0;

  char n = 'M';
  char m = 'N';
  // creating the result output for int 
  void* resInt= add("int", &x, &y);
  int* resultInt = (int*)resInt;

  //creating the result output for double
  void* resDouble = add("double", &a, &b);
  double* resultDouble = (double*)resDouble;

  //adding to char together
  void* resChar = add("char", &m, &n);
  char* resultChar = (char*)resChar;

  printf("Result is: %d\n", *resultInt);
  printf("Result for double is: %f\n", *resultDouble);
  printf("Result for char is: %s\n", resultChar);


  free(resInt);
  free(resDouble);
  free(resChar);
}