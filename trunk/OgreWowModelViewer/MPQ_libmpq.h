//------------------------------------------------------
// 파일명 : MPQ_libmpq.h
//
// 작성자 : 백인선, bt2103@naver.com
//
// 설  명 : 와우 *.MPQ관련
//------------------------------------------------------
#ifndef _MPQ_H_
#define _MPQ_H_

#include "libmpq/mpq.h"

#include <string>
#include <set>
#include <vector>

struct FileTreeItem
{
	std::string fn;
	int col;

	// 비교
	bool operator < (const FileTreeItem &i) const {
		return fn < i.fn;
	}

	bool operator > (const FileTreeItem &i) const {
		return fn < i.fn;
	}
};

class MPQArchive
{
	// MPQArchive 핸들
	mpq_archive mpq_a;

public:
	MPQArchive(const char *filename);
	~MPQArchive();

	void close();
};

class MPQFile
{
	bool eof;
	unsigned char *buffer;
	size_t pointer, size;

	// 복사 방지
	MPQFile(const MPQFile &f) {}
	void operator=(const MPQFile &f) {}
};


#endif