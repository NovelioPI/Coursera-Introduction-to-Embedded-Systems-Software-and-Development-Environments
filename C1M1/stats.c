/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c
 * @brief Function prototype for statistical analysis of an array 
 *        and main function 
 *
 *
 * @author Novelio Putra Indarto
 * @date 2023-09-21
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  print_array(test, SIZE);
  print_statistics(test, SIZE);
}

/* Add other Implementation File Code Here */
void print_statistics(unsigned char *array, unsigned int length){
  printf("The median of the array is %d\n", find_median(array, length));
  printf("The mean of the array is %d\n", find_mean(array, length));
  printf("The maximum of the array is %d\n", find_maximum(array, length));
  printf("The minimum of the array is %d\n", find_minimum(array, length));
}

void print_array(unsigned char *array, unsigned int length){
  printf("The array is: ");
  printf("[ ");
  for(int i = 0; i < length; i++){
    printf("%d ", array[i]);
  }
  printf("]\n");
}

unsigned char find_median(unsigned char *array, unsigned int length){
  sort_array(array, length);
  if(length % 2 == 0){
    return (array[length/2] + array[length/2 - 1])/2;
  }
  else{
    return array[length/2];
  }
}

unsigned char find_mean(unsigned char *array, unsigned int length){
  unsigned int sum = 0;
  for(int i = 0; i < length; i++){
    sum += array[i];
  }
  return sum/length;
}

unsigned char find_maximum(unsigned char *array, unsigned int length){
  unsigned char max = array[0];
  for(int i = 1; i < length; i++){
    if(array[i] > max){
      max = array[i];
    }
  }
  return max;
}

unsigned char find_minimum(unsigned char *array, unsigned int length){
  unsigned char min = array[0];
  for(int i = 1; i < length; i++){
    if(array[i] < min){
      min = array[i];
    }
  }
  return min;
}

void sort_array(unsigned char *array, unsigned int length){
  unsigned char temp;
  for(int i = 0; i < length; i++){
    for(int j = i + 1; j < length; j++){
      if(array[i] < array[j]){
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
      }
    }
  }
}