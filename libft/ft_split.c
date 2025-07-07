/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garevalo <garevalo@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 19:53:43 by garevalo          #+#    #+#             */
/*   Updated: 2025/04/17 20:12:28 by garevalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_allocate_result(char **result, size_t s_word, size_t len)
{
	result[s_word] = malloc((len + 1) * sizeof(char));
	if (!result[s_word])
	{
		while (s_word > 0)
		{
			s_word--;
			free(result[s_word]);
		}
		free(result);
		return (NULL);
	}
	return (result);
}

char	**ft_split_parse(size_t max_words, char **result, char const *s, char c)
{
	size_t	s_word;
	size_t	i;
	size_t	j;

	s_word = -1;
	i = 0;
	while (++s_word < max_words)
	{
		while (s[i] == c)
			i++;
		j = 0;
		while (s[i + j] != c && s[i + j])
			j++;
		if (!(ft_allocate_result(result, s_word, j)))
			return (NULL);
		j = 0;
		while (s[i + j] != c && s[i + j] != '\0')
		{
			result[s_word][j] = s[i + j];
			j++;
		}
		result[s_word][j] = '\0';
		i += j;
	}
	return (result);
}

char	**ft_split(char const *s, char c)
{
	size_t	max_words;
	size_t	i;
	char	**result;

	if (!s)
		return (NULL);
	max_words = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			max_words++;
		i++;
	}
	result = malloc((max_words + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	result = ft_split_parse(max_words, result, s, c);
	if (!result)
		return (NULL);
	result[max_words] = NULL;
	return (result);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    const char *str = "Hola, soy un ejemplo de cadena";
    char delimiter = ' ';

	char **result = ft_split(str, delimiter);
	if (result == NULL) {
        printf("Error al dividir la cadena.\n");
        return 1;
    }
    for (int i = 0; result[i] != NULL; i++) {
        printf("Parte %d: %s\n", i, result[i]);
        free(result[i]);
    }
    free(result);
    return 0;
}
*/
