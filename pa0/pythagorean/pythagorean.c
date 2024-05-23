#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]) {

  // Open the filename given as the first command line argument for reading
  FILE* fp = fopen(argv[1], "r");
  if (!fp) {
    perror("fopen failed");
    return EXIT_FAILURE;
  }

  char buf[256];

  char* string = fgets(buf, 256, fp);
  int x = atoi(string);
  string = fgets(buf, 256, fp);
  int y = atoi(string);
  
  //printf("this is the value of x: %d\n", x);
  //printf("this is the value of y: %d\n", y);
  
  int c = sqrt(x*x + y*y);
  int d = sqrt(x*x - y*y);
  int e = sqrt(y*y - x*x);
  int f = -1;
  
  if (c*c == x*x + y*y) {
  
  // Printing in C.
  // %d is the format specifier for integer numbers.
  // \n is the newline character
  	printf( "%d\n", c);
  	return EXIT_SUCCESS;
  }
  else if (d*d == x*x - y*y) {
  	printf( "%d\n", d);
  	return EXIT_SUCCESS;
  }
  else if (e*e == y*y - x*x){
	printf( "%d\n", e);
  	return EXIT_SUCCESS;
  }
  else {
	printf( "%d\n", f);
  }
}
