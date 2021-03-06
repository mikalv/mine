/*
 * Mine debug methods.
 *
 * Copyright (C) 2010 <Johann Baudy> johann.baudy@gnu-log.net
 * Copyright (C) 2010 <Benoit Gschwind> gschwind@gnu-log.net
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 3.0 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA
 */

#ifndef SYSTEM_LOCALE_H_
#define SYSTEM_LOCALE_H_
/***********************************************************************
 * Includes
 ***********************************************************************/
#include <mine/common.h>
#include <mine/cdefs.h>

#include <wchar.h>
/***********************************************************************
 * Macros
 ***********************************************************************/
/***********************************************************************
 * Variables
 ***********************************************************************/
/***********************************************************************
 * Functions
 ***********************************************************************/
MINEAPI char
		* mine_setlocale(int category, const char *locale) __MINE_SYM(setlocale);
MINEAPI int mine__tolower(int c) __MINE_SYM(__tolower);
MINEAPI size_t mine_mbrtowc(wchar_t *restrict pwc, const char *restrict s,
		size_t n, mbstate_t *restrict ps) __MINE_SYM(mbrtowc);
MINEAPI int mine_mbtowc(wchar_t *pwc, const char *s, size_t n) __MINE_SYM(mbtowc);

#endif /* SYSTEM_LOCALE_H_ */
