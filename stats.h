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
 * @file stats.h 
 * @brief Calculates statistics of an array
 *
 * Calculates and prints statistics of a given array and its lenght
 *
 * @author Cihan Senyuz
 * @date 19.07.2023
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief Prints minimum, maximum, mean, and median of an array
 *
 * Takes an array and its lenght. Calculates each statistics and prints them
 *
 * @param array whose statistics will be calculated
 * @param lenght the lenght of the array
 *
 * @return nothing
 */
void print_statistics(unsigned char* array, int lenght);

/**
 * @brief Prints the array to the screen
 *
 * Takes an array and its lenght. Prints each elements value
 *
 * @param array whose elements will be printed
 * @param lenght the lenght of the array
 *
 * @return nothing
 */
void print_array(unsigned char* array, int lenght);

/**
 * @brief Returns the median value
 *
 * Takes an array and its lenght. Calculates the median value
 *
 * @param array element values will be calculated
 * @param lenght the lenght of the array
 *
 * @return the median of the array
 */
unsigned char find_median(unsigned char* array, int lenght);

/**
 * @brief Returns the mean value
 *
 * Takes an array and its lenght. Calculates the mean value
 *
 * @param array element values will be calculated
 * @param lenght the lenght of the array
 *
 * @return the mean of the array
 */
unsigned char find_mean(unsigned char* array, int lenght);

/**
 * @brief Returns the maximum value
 *
 * Takes an array and its lenght. Calculates the maximum value
 *
 * @param array element values will be calculated
 * @param lenght the lenght of the array
 *
 * @return the maximum of the array
 */
unsigned char find_maximum(unsigned char* array, int lenght);

/**
 * @brief Returns the minimum value
 *
 * Takes an array and its lenght. Calculates the minimum value
 *
 * @param array element values will be calculated
 * @param lenght the lenght of the array
 *
 * @return the minimum of the array
 */
unsigned char find_minimum(unsigned char* array, int lenght);

/**
 * @brief Sorts the array from largest to smallest
 *
 * Takes an array and its lenght. Sorts elemants comparing each other.
 *
 * @param array element values will be sorted
 * @param lenght the lenght of the array
 *
 * @return nothing
 */
void sort_array(unsigned char* array, int lenght); // sorts the array from largest to smallest

#endif /* __STATS_H__ */
