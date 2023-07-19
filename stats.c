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
 * @file test.c
 * @brief Calculates statistics of an array
 *
 * Calculates and prints statistics of a given array and its lenght
 *
 * @author Cihan Senyuz
 * @date 19.07.2023
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
  print_statistics(test,SIZE);
}

/* Add other Implementation File Code Here */
void print_statistics(unsigned char* array, int lenght){
  
  print_array(array,lenght);
  printf("\nMinimum value is %d\n", find_minimum(array,lenght));
  printf("Maximum value is %d\n", find_maximum(array,lenght));
  printf("Mean value is %d\n", find_mean(array,lenght));
  printf("Meadian value is %d\n", find_median(array,lenght));
}

void print_array(unsigned char* array, int lenght){
  for (int i = 0; i < lenght; i++)
  {
    printf("%d. element is %d\n", i+1, array[i]);
  }
}

unsigned char find_median(unsigned char* array, int lenght){
  sort_array(array, lenght);    // need to be sorted to find median
  if((lenght % 2) == 0)         // if lenght is 2 times something
    return (array[lenght/2-1] + array[lenght/2] / 2);   // find 2 elements in the middle and return average of it
  else                          // if not 2 times something
    return array[lenght/2];     // then the one in the middle is median
}

unsigned char find_mean(unsigned char* array, int lenght){
  if(lenght == 0)   // if there is no member, return 0 to prevent division by zero
    return 0;
  
  int result = 0;
  for (int i = 0; i < lenght; i++)  // sweep all array elements
  {
    result += array[i];       // accumulate all values
  }
  return result/lenght;       // return average by dividing accumulation by number of elements
}

unsigned char find_maximum(unsigned char* array, int lenght){
  sort_array(array, lenght);    // sort it to find max
  return array[0];
}

unsigned char find_minimum(unsigned char* array, int lenght){
  sort_array(array, lenght);    // sort it to find min
  return array[lenght-1];
}

void sort_array(unsigned char* array, int lenght){
  unsigned char temp;
  for(int j = 0; j < lenght; j++)       // swep through array each time
  {
    for (int i = 0; i < lenght-1; i++)  // compare until the last element of the array
    {
      if(array[i] < array[i+1])         // comparison and changing order
      {
        temp = array[i+1];
        array[i+1] = array[i];
        array[i] = temp;
      }
    }
  }
}
