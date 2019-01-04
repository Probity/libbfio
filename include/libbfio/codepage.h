/*
 * Codepage definitions for libbfio
 *
 * Copyright (C) 2009-2019, Joachim Metz <joachim.metz@gmail.com>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This software is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this software.  If not, see <http://www.gnu.org/licenses/>.
 */

#if !defined( _LIBBFIO_CODEPAGE_H )
#define _LIBBFIO_CODEPAGE_H

#include <libbfio/types.h>

#if defined( __cplusplus )
extern "C" {
#endif

/* The codepage definitions
 */
enum LIBBFIO_CODEPAGES
{
	LIBBFIO_CODEPAGE_ASCII				= 20127,

	LIBBFIO_CODEPAGE_ISO_8859_1			= 28591,
	LIBBFIO_CODEPAGE_ISO_8859_2			= 28592,
	LIBBFIO_CODEPAGE_ISO_8859_3			= 28593,
	LIBBFIO_CODEPAGE_ISO_8859_4			= 28594,
	LIBBFIO_CODEPAGE_ISO_8859_5			= 28595,
	LIBBFIO_CODEPAGE_ISO_8859_6			= 28596,
	LIBBFIO_CODEPAGE_ISO_8859_7			= 28597,
	LIBBFIO_CODEPAGE_ISO_8859_8			= 28598,
	LIBBFIO_CODEPAGE_ISO_8859_9			= 28599,
	LIBBFIO_CODEPAGE_ISO_8859_10			= 28600,
	LIBBFIO_CODEPAGE_ISO_8859_11			= 28601,
	LIBBFIO_CODEPAGE_ISO_8859_13			= 28603,
	LIBBFIO_CODEPAGE_ISO_8859_14			= 28604,
	LIBBFIO_CODEPAGE_ISO_8859_15			= 28605,
	LIBBFIO_CODEPAGE_ISO_8859_16			= 28606,

	LIBBFIO_CODEPAGE_KOI8_R				= 20866,
	LIBBFIO_CODEPAGE_KOI8_U				= 21866,

	LIBBFIO_CODEPAGE_WINDOWS_874			= 874,
	LIBBFIO_CODEPAGE_WINDOWS_932			= 932,
	LIBBFIO_CODEPAGE_WINDOWS_936			= 936,
	LIBBFIO_CODEPAGE_WINDOWS_949			= 949,
	LIBBFIO_CODEPAGE_WINDOWS_950			= 950,
	LIBBFIO_CODEPAGE_WINDOWS_1250			= 1250,
	LIBBFIO_CODEPAGE_WINDOWS_1251			= 1251,
	LIBBFIO_CODEPAGE_WINDOWS_1252			= 1252,
	LIBBFIO_CODEPAGE_WINDOWS_1253			= 1253,
	LIBBFIO_CODEPAGE_WINDOWS_1254			= 1254,
	LIBBFIO_CODEPAGE_WINDOWS_1255			= 1255,
	LIBBFIO_CODEPAGE_WINDOWS_1256			= 1256,
	LIBBFIO_CODEPAGE_WINDOWS_1257			= 1257,
	LIBBFIO_CODEPAGE_WINDOWS_1258			= 1258
};

#define LIBBFIO_CODEPAGE_US_ASCII			LIBBFIO_CODEPAGE_ASCII

#define LIBBFIO_CODEPAGE_ISO_WESTERN_EUROPEAN		LIBBFIO_CODEPAGE_ISO_8859_1
#define LIBBFIO_CODEPAGE_ISO_CENTRAL_EUROPEAN		LIBBFIO_CODEPAGE_ISO_8859_2
#define LIBBFIO_CODEPAGE_ISO_SOUTH_EUROPEAN		LIBBFIO_CODEPAGE_ISO_8859_3
#define LIBBFIO_CODEPAGE_ISO_NORTH_EUROPEAN		LIBBFIO_CODEPAGE_ISO_8859_4
#define LIBBFIO_CODEPAGE_ISO_CYRILLIC			LIBBFIO_CODEPAGE_ISO_8859_5
#define LIBBFIO_CODEPAGE_ISO_ARABIC			LIBBFIO_CODEPAGE_ISO_8859_6
#define LIBBFIO_CODEPAGE_ISO_GREEK			LIBBFIO_CODEPAGE_ISO_8859_7
#define LIBBFIO_CODEPAGE_ISO_HEBREW			LIBBFIO_CODEPAGE_ISO_8859_8
#define LIBBFIO_CODEPAGE_ISO_TURKISH			LIBBFIO_CODEPAGE_ISO_8859_9
#define LIBBFIO_CODEPAGE_ISO_NORDIC			LIBBFIO_CODEPAGE_ISO_8859_10
#define LIBBFIO_CODEPAGE_ISO_THAI			LIBBFIO_CODEPAGE_ISO_8859_11
#define LIBBFIO_CODEPAGE_ISO_BALTIC			LIBBFIO_CODEPAGE_ISO_8859_13
#define LIBBFIO_CODEPAGE_ISO_CELTIC			LIBBFIO_CODEPAGE_ISO_8859_14

#define LIBBFIO_CODEPAGE_ISO_LATIN_1			LIBBFIO_CODEPAGE_ISO_8859_1
#define LIBBFIO_CODEPAGE_ISO_LATIN_2			LIBBFIO_CODEPAGE_ISO_8859_2
#define LIBBFIO_CODEPAGE_ISO_LATIN_3			LIBBFIO_CODEPAGE_ISO_8859_3
#define LIBBFIO_CODEPAGE_ISO_LATIN_4			LIBBFIO_CODEPAGE_ISO_8859_4
#define LIBBFIO_CODEPAGE_ISO_LATIN_5			LIBBFIO_CODEPAGE_ISO_8859_9
#define LIBBFIO_CODEPAGE_ISO_LATIN_6			LIBBFIO_CODEPAGE_ISO_8859_10
#define LIBBFIO_CODEPAGE_ISO_LATIN_7			LIBBFIO_CODEPAGE_ISO_8859_13
#define LIBBFIO_CODEPAGE_ISO_LATIN_8			LIBBFIO_CODEPAGE_ISO_8859_14
#define LIBBFIO_CODEPAGE_ISO_LATIN_9			LIBBFIO_CODEPAGE_ISO_8859_15
#define LIBBFIO_CODEPAGE_ISO_LATIN_10			LIBBFIO_CODEPAGE_ISO_8859_16

#define LIBBFIO_CODEPAGE_KOI8_RUSSIAN			LIBBFIO_CODEPAGE_KOI8_R
#define LIBBFIO_CODEPAGE_KOI8_UKRAINIAN			LIBBFIO_CODEPAGE_KOI8_U

#define LIBBFIO_CODEPAGE_WINDOWS_THAI			LIBBFIO_CODEPAGE_WINDOWS_874
#define LIBBFIO_CODEPAGE_WINDOWS_JAPANESE		LIBBFIO_CODEPAGE_WINDOWS_932
#define LIBBFIO_CODEPAGE_WINDOWS_CHINESE_SIMPLIFIED	LIBBFIO_CODEPAGE_WINDOWS_936
#define LIBBFIO_CODEPAGE_WINDOWS_KOREAN			LIBBFIO_CODEPAGE_WINDOWS_949
#define LIBBFIO_CODEPAGE_WINDOWS_CHINESE_TRADITIONAL	LIBBFIO_CODEPAGE_WINDOWS_950
#define LIBBFIO_CODEPAGE_WINDOWS_CENTRAL_EUROPEAN	LIBBFIO_CODEPAGE_WINDOWS_1250
#define LIBBFIO_CODEPAGE_WINDOWS_CYRILLIC		LIBBFIO_CODEPAGE_WINDOWS_1251
#define LIBBFIO_CODEPAGE_WINDOWS_WESTERN_EUROPEAN	LIBBFIO_CODEPAGE_WINDOWS_1252
#define LIBBFIO_CODEPAGE_WINDOWS_GREEK			LIBBFIO_CODEPAGE_WINDOWS_1253
#define LIBBFIO_CODEPAGE_WINDOWS_TURKISH		LIBBFIO_CODEPAGE_WINDOWS_1254
#define LIBBFIO_CODEPAGE_WINDOWS_HEBREW			LIBBFIO_CODEPAGE_WINDOWS_1255
#define LIBBFIO_CODEPAGE_WINDOWS_ARABIC			LIBBFIO_CODEPAGE_WINDOWS_1256
#define LIBBFIO_CODEPAGE_WINDOWS_BALTIC			LIBBFIO_CODEPAGE_WINDOWS_1257
#define LIBBFIO_CODEPAGE_WINDOWS_VIETNAMESE		LIBBFIO_CODEPAGE_WINDOWS_1258

#if defined( __cplusplus )
}
#endif

#endif /* !defined( _LIBBFIO_CODEPAGE_H ) */

