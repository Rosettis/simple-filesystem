/*
 *  Simple Filesystem
 *  Copyright (C) 2014 Patrick S., Robert C., Aaron P., Matthew R.
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along
 *  with this program; if not, write to the Free Software Foundation, Inc.,
 *  51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#include "dbg.h"
#include "sfs_internal.h"

int sfs_gettype(char *pathname) {

    int err_code = 0;

    File *file;
    check_err(File_find_by_path(&file, pathname));

    if (File_is_directory(file)) {
        return 1;
    }
    else {
        return 0;
    }

error:
    return err_code;
}