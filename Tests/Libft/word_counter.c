/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   word_counter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soeder85 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 11:54:49 by soeder85          #+#    #+#             */
/*   Updated: 2024/10/12 11:56:41 by soeder85         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

static int word_counter(char const *s, char c) {
    int i;
    int words;

    i = 0;
    words = 0;
    while (s[i] != '\0') {
        if (((s[i] != c)) && ((i == 0) || (s[i - 1] == (char)c))) {
            words++;
        }
        i++;
    }
    return (words);
}

int main() {
    char str[] = "Hello,world!Thisisatest.";
    int count = word_counter(str, ' ');

    printf("Number of words: %d\n", count);

    return 0;
}
