/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garevalo <garevalo@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 18:05:39 by garevalo          #+#    #+#             */
/*   Updated: 2025/07/07 18:05:39 by garevalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//sort numbers following the rules.

//getting max value in the array
int getMaxint(int nums[], int n)
{
    int max;
    int i;

    max = nums[0];
    i = 0;
    while (i < n)
    {
        if (nums[i] > max)
            max = nums[i++];
    }
    return (max);
}

//Counting Sort based on the digit represented by exp (10^i)
void    countingSort()
{

}

//Radix sort function
void    radixSort()
{
    
}
