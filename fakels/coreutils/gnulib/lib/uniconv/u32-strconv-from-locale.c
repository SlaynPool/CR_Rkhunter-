/* Conversion to UTF-32 from the locale encoding.
   Copyright (C) 2002, 2006-2007, 2009-2019 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify it
   under the terms of the GNU Lesser General Public License as published
   by the Free Software Foundation; either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* Written by Bruno Haible <bruno@clisp.org>.  */

#include <config.h>

/* Specification.  */
#include "uniconv.h"

uint32_t *
u32_strconv_from_locale (const char *string)
{
  const char *encoding = locale_charset ();
  return u32_strconv_from_encoding (string, encoding, iconveh_question_mark);
}