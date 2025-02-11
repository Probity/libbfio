/*
 * Memory range functions
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

#if !defined( _LIBBFIO_MEMORY_RANGE_H )
#define _LIBBFIO_MEMORY_RANGE_H

#include <common.h>
#include <types.h>

#include "libbfio_extern.h"
#include "libbfio_libcerror.h"
#include "libbfio_types.h"

#if defined( __cplusplus )
extern "C" {
#endif

LIBBFIO_EXTERN \
int libbfio_memory_range_initialize(
     libbfio_handle_t **handle,
     libcerror_error_t **error );

LIBBFIO_EXTERN \
int libbfio_memory_range_get(
     libbfio_handle_t *handle,
     uint8_t **range_start,
     size_t *range_size,
     libcerror_error_t **error );

LIBBFIO_EXTERN \
int libbfio_memory_range_set(
     libbfio_handle_t *handle,
     uint8_t *range_start,
     size_t range_size,
     libcerror_error_t **error );

#if defined( __cplusplus )
}
#endif

#endif /* !defined( _LIBBFIO_MEMORY_RANGE_H ) */

