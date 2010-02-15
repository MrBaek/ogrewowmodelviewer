/*!
 * \file  mpq.h
 * \brief 몇몇 기본 타입과 정의
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

#define LIBMPQ_MAJOR_VERSION 0	   // 주 버전 번호
#define LIBMPQ_MINOR_VERSION 3     // 부 버전 번호 몇몇개의 바뀐것이 있을때
#define LIBMPQ_PATCH_VERSION 2	   // 버그가 수정되었을떄

#define LIBMPQ_TOOLS_SUCCESS 0	   // 함수가 성공되었을때
#define LIBMPQ_TOOLS_BUFSIZE 0x500 // 해독을 위한 버퍼의 크기

#define LIBMPQ_EFILE         -1    // 파일 작업에 대한 오류
#define LIBMPQ_EFILE_FORMAT  -2    // 잘못된 파일 포멧일때
#define LIBMPQ_EFILE_CORRUPT -3    // 손상된 파일
#define LIBMPQ_EFILE_NOT_FOUND -4  // 파일을 찾을 수 없을떄
#define LIBMPQ_EFILE_READ    -5    // 파일읽기 오류
#define LIBMPQ_EALLOCMEM     -6    // 메모리 부족시
#define LIBMPQ_EFREEMEM      -7    // 메모리 해제 실패시
#define LIBMPQ_EINV_RANGE    -8    // 주어진 파일번호가 범위를 벗어났을때
#define LIBMPQ_EHASHTABLE    -9    // 해시 테이블 읽기 오류
#define LIBMPQ_EBLOCKTABLE   -10   // 블럭 테이블 읽기 오류

#define LIBMPQ_FLAG_CHANGED      0x00000001
#define LIBMPQ_FLAG_PROTECTED    0x00000002 // MPQ파일을 보호 모드로
#define LIBMPQ_FLAG_FIXSEED      0x00020000
#define LIBMPQ_FLAG_SINGLEUNIT   0x01000000
#define LIBMPQ_FLAG_UNKNOWN_0200 0x02000000 // 해시 테이블안의 파일 이름은 1바이트의 길이임
#define LIBMPQ_FLAG_UNKNOWN_0400 0X04000000 // 와우의 최신버전이 나왔을때?

#define LIBMPQ_ID_MPQ             0x1A51504D // MPQ 압축의 헤더ID값
#define LIBMPQ_HEADER_W3M         0x6D9E4B86 // W3M 맵 보호자에 사용되는 값
#define LIBMPQ_HASH_ENTRY_DELETED 0xFFFFFFFE // 삭제된 해시 진입점에 대한 블럭 인덱스
#define LIBMPQ_LISTFILE_HASH1     0xfd657910 // MPQ안에서의 파일의 해시목록
#define LIBMPQ_LISTFILE_HASH2	  0x4e9b98a7
#define LIBMPQ_ATTRFILE_HASH1	  0xd38437cb
#define LIBMPQ_ATTRFILE_HASH2	  0x07dfeaec

#define LIBMPQ_FILE_COMPRESS_PKWARE 0x00000100 // PKWARE 압축 라이브러리에 만들어진 압축 데이터
#define LIBMPQ_FILE_COMPRESS_MULTI  0x00000200 // 다중 압축
#define LIBMPQ_FILE_COMPRESSED      0x0000FF00 // 파일이 압축 되어있는가
#define LIBMPQ_FILE_ENCRYPTED       0x00010000 // 파일의 암호화 여부
#define LIBMPQ_FILE_METADATA        0x04000000 // 파일의 메타데이터 여부
#define LIBMPQ_FILE_EXISTS          0x80000000 // 파일이 삭제되었다면 초기화 시킨다

#define LIBMPQ_FILE_COMPRESSED_SIZE   1 // MPQ파일은 주어진 크기로 압축되었다
#define LIBMPQ_FILE_UNCOMPRESSED_SIZE 2 // MPQ파일은 주어진 크기로 압축 해제 되었다
#define LIBMPQ_FILE_COMPRESSION_TYPE  3 // MPQ 파일의 압축 종류를 나타냄
#define LIBMPQ_FILE_TYPE_INT          4 // 파일의 번호
#define LIBMPQ_FILE_TYPE_CHAR		  5 // 파일의 이름
#define LIBMPQ_FILE_HASH1			  6 // 해시값1
#define LIBMPQ_FILE_HASH2			  7 // 해시값2

#define LIBMPQ_MPQ_ARCHIVE_SIZE		  1 // MPQ 압축의 크기
#define LIBMPQ_MPQ_HASHTABLE_SIZE	  2 // MPQ 압축의 해시테이블 크기
#define LIBMPQ_MPQ_BLOCKTABLE_SIZE    3 // MPQ 압축의 블럭테이블 크기
#define LIBMPQ_MPQ_BLOCKSIZE          4 // MPQ 압축의 블럭크기
#define LIBMPQ_MPQ_NUMFILES			  5 // MPQ 압축파일내의 파일 개수
#define LIBMPQ_MPQ_COMPRESSED_SIZE    6 // 압축파일의 크기
#define LIBMPQ_MPQ_UNCOMPRESSED_SIZE  7 // 압축해제된 크기

#define LIBMPQ_HUFF_DECOMPRESS		  0 // 허프만 압축 알고리즘을 사용시

#define LIBMPQ_CONF_EFILE_OPEN		  -1 // 특정 리스트파일을 열수 없을때
#define LIBMPQ_CONF_EFILE_CORRUPT	  -2 // 리스트파일이 오류가 발생했을떄



#endif
