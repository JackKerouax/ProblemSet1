#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

system("afplay -h"); 

system("afplay -q 1 -t 5 -r 2 -v 0.5 heartbeat.wav"); 

  return 0; 
}
