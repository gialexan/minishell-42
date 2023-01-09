/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scanner.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gialexan <gialexan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 14:21:41 by gialexan          #+#    #+#             */
/*   Updated: 2023/01/09 14:52:21 by gialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCANNER_H
# define SCANNER_H
# include <stdio.h>
# include <stdlib.h>

typedef enum s_tk_type
{
	TK_EOF,
	TK_WORD,
	TK_PIPE,
	TK_LESS,
	TK_GREAT,
	TK_DLESS,
	TK_DGREAT,
}	t_tk_type;

typedef struct s_token
{
	t_tk_type	token;
	char		*lexema;
	int			size;
}	t_token;
#endif