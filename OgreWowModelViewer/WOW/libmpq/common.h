#ifndef _COMMON_H_
#define _COMMON_H_

#define LIBMPQ_CONF_FL_INCREMENT 512
#define LIBMPQ_CONF_EXT          ".conf"
#define LIBMPQ_CONF_HEADER       "LIBMPQ_VERSION"
#define LIBMPQ_CONF_BUFSIZE      4096

#define LIBMPQ_CONF_TYPE_CHAR    1
#define LIBMPQ_CONF_TYPE_INT     2

#define LIBMPQ_CONF_EOPEN_DIR    -1
#define LIBMPQ_CONF_EVALUE_NOT_FOUND -2

extern int libmpq_init_buffer(mpq_archive *mpq_a);
extern int libmpq_read_hashtable(mpq_archive *mpq_a);
extern int libmpq_read_blocktable(mpq_archive *mpq_a);
extern int libmpq_file_read_block(mpq_archive *mpq_a, mpq_file *mpq_f, unsigned int blockpos, char *buffer, unsigned int blockbytes);
extern int libmpq_file_read_file(mpq_archive *mpq_a, mpq_file *mpq_f, unsigned int filepos, char *buffer, unsigned int toread);

#endif