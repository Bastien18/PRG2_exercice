/*
  ---------------------------------------------------------------------------
  File           :
  Lab name       : 
  Author(s)      : Bastien Pillonel
  Date           : 
  Goal           : le but du programme et non le but du laboratoire !!

  Comment(s) : à compléter

  Compilateur : MingW-w64 g++ 11.2.0
  ---------------------------------------------------------------------------
*/

#include <stdio.h>
#include <stdint.h>

void decimalToBinary(int32_t n, int8_t binary[]);

int main() {

   int8_t tabBinary[8 * sizeof(int32_t)] = {};

   int32_t n = -1;

   decimalToBinary(n, tabBinary);

   return 0;
}

void decimalToBinary(int32_t n, int8_t binary[]){
   for(size_t i = 0; i < 8 * sizeof(n); ++i){
      binary[8 * sizeof(n) -1 - i] = (int8_t)((n >> i) & 1);
   }
   for(size_t i = 0; i < 8 * sizeof(n); ++i)
      printf("%d | ", binary[i]);
}