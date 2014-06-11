#ifndef _STDIO_H
#define _STDIO_H 1

#define L_TMPNAM 16

typedef struct FILE {
	int filedesc;
	int readp;
	int writep;
	int permissions;
	char unget;
} FILE;

FILE *fopen( const char *filename, const char *mode );
FILE *freopen( const char *filename, const char *mode, FILE *stream );
FILE *fflush( FILE *stream );
FILE *fclose( FILE *stream );

int remove( const char *filename );
int rename( const char *oldname, const char *newname );

FILE *tmpfile( void );
char *tmpnam( char s[L_TMPNAM] );
int setvbuf( FILE *stream, char *buf, int mode, size_t size );
void setbuf( FILE *stream, char *buf );

int fprintf( FILE *stream, const char *format, ... );
int printf( const char *format, ... );
int sprintf( har *s, const char *format, ... );

int vprintf( const char *format, va_list arg );
int vfprintf( FILE *stream, const char *format, va_list arg );
int vsprintf( char *s, const char *format, va_list arg );

int fscanf( FILE *stream, const char *format, ... );
int scanf( const char *format, ... );
int sscanf( char *s, const char *format, ... );

int fgetc( FILE *stream );
char *fgets( char *s, int n, FILE *stream );
int fputc( int c, FILE *stream );
int fputs( const char *s, FILE *stream );
int getc( FILE *stream );
int getchar( void );
char *gets( char *s );
int putc( int c, FILE *stream );
int putchar( int c );
int puts( const char *s );
int ungetc( int c, FILE *stream );

size_t fread( void *ptr, size_t size, size_t nobj, FILE *stream );
size_t fwrite( const void *ptr, size_t size, size_t nobj, FILE *stream );
int fseek( FILE *stream, long offset, int origin );
long ftell( FILE *stream );
void rewind( FILE *stream );
int fgetpos( FILE *stream, fpos_t *ptr );
int fsetpos( FILE *stream, const fpos_t *ptr );

void clearerr( FILE *stream );
int feof( FILE *stream );
int ferror( FILE *stream );
void perror ( const char *s );

#endif /* _STDIO_H */
