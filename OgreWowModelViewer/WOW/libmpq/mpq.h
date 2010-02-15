/*!
 * \file  mpq.h
 * \brief ��� �⺻ Ÿ�԰� ����
 */

#ifndef _MPQ_H_
#define _MPQ_H_

#ifdef _WIN32
#include <io.h>
#define snprintf _snprintf
#define PATH_MAX 259
#else
#include <dirent.h>
#include <unistd.h>
#include <stdlib.h>
#define  0_BINARY 0
#endif

#ifdef __cplusplus
extern "C" {
#endif

#define LIBMPQ_MAJOR_VERSION 0	   // �� ���� ��ȣ
#define LIBMPQ_MINOR_VERSION 3     // �� ���� ��ȣ ���� �ٲ���� ������
#define LIBMPQ_PATCH_VERSION 2	   // ���װ� �����Ǿ�����

#define LIBMPQ_TOOLS_SUCCESS 0	   // �Լ��� �����Ǿ�����
#define LIBMPQ_TOOLS_BUFSIZE 0x500 // �ص��� ���� ������ ũ��

#define LIBMPQ_EFILE         -1    // ���� �۾��� ���� ����
#define LIBMPQ_EFILE_FORMAT  -2    // �߸��� ���� �����϶�
#define LIBMPQ_EFILE_CORRUPT -3    // �ջ�� ����
#define LIBMPQ_EFILE_NOT_FOUND -4  // ������ ã�� �� ������
#define LIBMPQ_EFILE_READ    -5    // �����б� ����
#define LIBMPQ_EALLOCMEM     -6    // �޸� ������
#define LIBMPQ_EFREEMEM      -7    // �޸� ���� ���н�
#define LIBMPQ_EINV_RANGE    -8    // �־��� ���Ϲ�ȣ�� ������ �������
#define LIBMPQ_EHASHTABLE    -9    // �ؽ� ���̺� �б� ����
#define LIBMPQ_EBLOCKTABLE   -10   // �� ���̺� �б� ����

#define LIBMPQ_FLAG_CHANGED      0x00000001
#define LIBMPQ_FLAG_PROTECTED    0x00000002 // MPQ������ ��ȣ ����
#define LIBMPQ_FLAG_FIXSEED      0x00020000
#define LIBMPQ_FLAG_SINGLEUNIT   0x01000000
#define LIBMPQ_FLAG_UNKNOWN_0200 0x02000000 // �ؽ� ���̺���� ���� �̸��� 1����Ʈ�� ������
#define LIBMPQ_FLAG_UNKNOWN_0400 0X04000000 // �Ϳ��� �ֽŹ����� ��������?

#define LIBMPQ_ID_MPQ             0x1A51504D // MPQ ������ ���ID��
#define LIBMPQ_HEADER_W3M         0x6D9E4B86 // W3M �� ��ȣ�ڿ� ���Ǵ� ��
#define LIBMPQ_HASH_ENTRY_DELETED 0xFFFFFFFE // ������ �ؽ� �������� ���� �� �ε���
#define LIBMPQ_LISTFILE_HASH1     0xfd657910 // MPQ�ȿ����� ������ �ؽø��
#define LIBMPQ_LISTFILE_HASH2	  0x4e9b98a7
#define LIBMPQ_ATTRFILE_HASH1	  0xd38437cb
#define LIBMPQ_ATTRFILE_HASH2	  0x07dfeaec

#define LIBMPQ_FILE_COMPRESS_PKWARE 0x00000100 // PKWARE ���� ���̺귯���� ������� ���� ������
#define LIBMPQ_FILE_COMPRESS_MULTI  0x00000200 // ���� ����
#define LIBMPQ_FILE_COMPRESSED      0x0000FF00 // ������ ���� �Ǿ��ִ°�
#define LIBMPQ_FILE_ENCRYPTED       0x00010000 // ������ ��ȣȭ ����
#define LIBMPQ_FILE_METADATA        0x04000000 // ������ ��Ÿ������ ����
#define LIBMPQ_FILE_EXISTS          0x80000000 // ������ �����Ǿ��ٸ� �ʱ�ȭ ��Ų��

#define LIBMPQ_FILE_COMPRESSED_SIZE   1 // MPQ������ �־��� ũ��� ����Ǿ���
#define LIBMPQ_FILE_UNCOMPRESSED_SIZE 2 // MPQ������ �־��� ũ��� ���� ���� �Ǿ���
#define LIBMPQ_FILE_COMPRESSION_TYPE  3 // MPQ ������ ���� ������ ��Ÿ��
#define LIBMPQ_FILE_TYPE_INT          4 // ������ ��ȣ
#define LIBMPQ_FILE_TYPE_CHAR		  5 // ������ �̸�
#define LIBMPQ_FILE_HASH1			  6 // �ؽð�1
#define LIBMPQ_FILE_HASH2			  7 // �ؽð�2

#define LIBMPQ_MPQ_ARCHIVE_SIZE		  1 // MPQ ������ ũ��
#define LIBMPQ_MPQ_HASHTABLE_SIZE	  2 // MPQ ������ �ؽ����̺� ũ��
#define LIBMPQ_MPQ_BLOCKTABLE_SIZE    3 // MPQ ������ �����̺� ũ��
#define LIBMPQ_MPQ_BLOCKSIZE          4 // MPQ ������ ��ũ��
#define LIBMPQ_MPQ_NUMFILES			  5 // MPQ �������ϳ��� ���� ����
#define LIBMPQ_MPQ_COMPRESSED_SIZE    6 // ���������� ũ��
#define LIBMPQ_MPQ_UNCOMPRESSED_SIZE  7 // ���������� ũ��

#define LIBMPQ_HUFF_DECOMPRESS		  0 // ������ ���� �˰����� ����

#define LIBMPQ_CONF_EFILE_OPEN		  -1 // Ư�� ����Ʈ������ ���� ������
#define LIBMPQ_CONF_EFILE_CORRUPT	  -2 // ����Ʈ������ ������ �߻�������



#endif
