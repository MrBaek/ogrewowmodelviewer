//------------------------------------------------------
// ���ϸ� : MPQ_libmpq.h
//
// �ۼ��� : ���μ�, bt2103@naver.com
//
// ��  �� : �Ϳ� *.MPQ����
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

	// ��
	bool operator < (const FileTreeItem &i) const {
		return fn < i.fn;
	}

	bool operator > (const FileTreeItem &i) const {
		return fn < i.fn;
	}
};

class MPQArchive
{
	// MPQArchive �ڵ�
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

	// ���� ����
	MPQFile(const MPQFile &f) {}
	void operator=(const MPQFile &f) {}
};


#endif