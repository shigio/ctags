/*
*   Copyright (c) 2002-2003, Darren Hiebert
*
*   This source code is released for free distribution under the terms of the
*   GNU General Public License.
*
*   Configures ctags for Microsoft environment.
*/
#ifndef E_MSOFT_H
#define E_MSOFT_H

/*  MS-DOS/Windows doesn't allow manipulation of standard error,
 *  so we send it to stdout instead.
 */
#define errout  stdout

#define CASE_INSENSITIVE_FILENAMES 1
#define MANUAL_GLOBBING 1
#define MSDOS_STYLE_PATH 1
#define HAVE_FCNTL_H 1
#define HAVE_IO_H 1
#define HAVE_STDLIB_H 1
#define HAVE_SYS_STAT_H 1
#define HAVE_SYS_TYPES_H 1
#define HAVE_TIME_H 1
#define HAVE_CLOCK 1
#define HAVE_CHSIZE 1
#define HAVE_FGETPOS 1
#define HAVE_STRICMP 1
#define HAVE_STRNICMP 1
#define HAVE_STRSTR 1
#define HAVE_STRERROR 1
#define HAVE_FINDNEXT 1
#define HAVE_TEMPNAM 1
#define HAVE_FNMATCH 1
#define HAVE_FNMATCH_H 1
#define HAVE_PUTENV 1
#define tempnam(dir,pfx) _tempnam(dir,pfx)
#define TMPDIR "\\"

#ifdef _MSC_VER

# define HAVE__FINDFIRST 1
# define HAVE_DIRECT_H 1
# if _MSC_VER < 1900
#  define snprintf _snprintf
# endif
# define findfirst_t intptr_t

# ifndef _CRT_SECURE_NO_DEPRECATE
#  define _CRT_SECURE_NO_DEPRECATE 1
# endif
# pragma warning(disable : 4996)

#elif defined (__MINGW32__)

# include <_mingw.h>
# define HAVE_DIR_H 1
# define HAVE_DIRENT_H 1
# define HAVE__FINDFIRST 1
# define findfirst_t long
# define ffblk _finddata_t
# define FA_DIREC _A_SUBDIR
# define ff_name name

#endif

#endif
