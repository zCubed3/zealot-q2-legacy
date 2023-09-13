/*
Copyright (C) 1997-2001 Id Software, Inc.
Copyright (C) 2023 zCubed3 (Liam R.)

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.

*/

//
// qstr.h - Common string manipulation functions
//

#ifndef ZEALOT_QSTR_H
#define ZEALOT_QSTR_H

//============================================================================

int 	Q_stricmp(char *s1, char *s2);
int 	Q_strcasecmp(char *s1, char *s2);
int 	Q_strncasecmp(char *s1, char *s2, int n);

//============================================================================

#endif//ZEALOT_QSTR_H
