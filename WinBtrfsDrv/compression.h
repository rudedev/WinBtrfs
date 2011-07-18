/* WinBtrfsDrv/compression.h
 * data compression algorithms
 *
 * WinBtrfs
 * Copyright (c) 2011 Justin Gottula
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the Free
 * Software Foundation; either version 2 of the License, or (at your option)
 * any later version.
 */

#ifndef WINBTRFSDRV_COMPRESSION_H
#define WINBTRFSDRV_COMPRESSION_H

namespace WinBtrfsDrv
{
	int lzoDecompress(const unsigned char *compressed, unsigned char *decompressed,
		unsigned __int64 cSize, unsigned __int64 dSize);
	int zlibDecompress(const unsigned char *compressed, unsigned char *decompressed,
		unsigned __int64 cSize, unsigned __int64 dSize);
}

#endif
