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
 * @brief Function declaration and documentation for statistical
 *        analysis of an array
 *
 *
 * @author Novelio Putra Indarto
 * @date 2023-09-21
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief Print statistics information of an array
 *
 *
 * @param array The array to be analyzed
 * @param length The length of the array
 *
 * @return void
 */
void print_statistics(unsigned char *array, unsigned int length);

/**
 * @brief Print the array
 *
 *
 * @param array The array to be printed
 * @param length The length of the array
 *
 * @return void
 */
void print_array(unsigned char *array, unsigned int length);

/**
 * @brief Find the median of an array
 *
 *
 * @param array The array to be analyzed
 * @param length The length of the array
 *
 * @return The median of the array
 */
unsigned char find_median(unsigned char *array, unsigned int length);

/**
 * @brief Find the mean of an array
 *
 *
 * @param array The array to be analyzed
 * @param length The length of the array
 *
 * @return The mean of the array
 */
unsigned char find_mean(unsigned char *array, unsigned int length);

/**
 * @brief Find the maximum of an array
 *
 *
 * @param array The array to be analyzed
 * @param length The length of the array
 *
 * @return The maximum of the array
 */
unsigned char find_maximum(unsigned char *array, unsigned int length);

/**
 * @brief Find the minimum of an array
 *
 *
 * @param array The array to be analyzed
 * @param length The length of the array
 *
 * @return The minimum of the array
 */
unsigned char find_minimum(unsigned char *array, unsigned int length);

/**
 * @brief Sort the array from largest to smallest
 *
 *
 * @param array The array to be sorted
 * @param length The length of the array
 *
 * @return void
 */
void sort_array(unsigned char *array, unsigned int length);


#endif /* __STATS_H__ */
