// $Date$ 
// $Revision$
// $Author$

#ifndef FILE_UTIL_H_DEFINED
#define FILE_UTIL_H_DEFINED
#include <time.h>
#include "string_util.h"

EXTERNCPP char *get_smokezippath(char *progdir);
EXTERNCPP int filecat(char *file_in1, char *file_in2, char *file_out);
EXTERNCPP void make_outfile(char *outfile, char *destdir, char *file1, char *ext);
EXTERNCPP void fullfile(char *fileout, char *dir, char *file);
EXTERNCPP char *setdir(char *argdir);
EXTERNCPP int getfileinfo(char *filename, char *sourcedir, int *filesize);
EXTERNCPP int listdir(const char *path);
EXTERNCPP char *get_zonefilename(char *buffer);
EXTERNCPP int can_write_to_dir(char *dir);
EXTERNCPP int file_exists(char *filename);
EXTERNCPP int getfilesize(char *filename);

EXTERNCPP char *which(char *progname);
EXTERNCPP FILE_SIZE get_filesize(const char *filename);
EXTERNCPP time_t file_modtime(char *filename);
EXTERNCPP int is_file_newer(char *file1, char *file2);
EXTERNCPP char *getprogdir(char *progname, char **svpath);

EXTERNCPP char *lastname(char *argi);

#ifndef STREXTERN
#ifdef WIN32
STREXTERN char STRDECL(dirseparator[],"\\");
#else
STREXTERN char STRDECL(dirseparator[],"/");
#endif
#endif
#endif