/******************************************************
Copyright (c) 2019 Percona LLC and/or its affiliates.

LZ4 decompression interface for XtraBackup.

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; version 2 of the License.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA

*******************************************************/

#ifndef DS_DECOMPRESS_LZ4_H
#define DS_DECOMPRESS_LZ4_H

#include "datasink.h"

extern uint ds_decompress_lz4_threads;

extern datasink_t datasink_decompress_lz4;

#endif
