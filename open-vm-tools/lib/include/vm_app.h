/*********************************************************
 * Copyright (C) 1998 VMware, Inc. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published
 * by the Free Software Foundation version 2.1 and no later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE.  See the Lesser GNU General Public
 * License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin St, Fifth Floor, Boston, MA  02110-1301 USA.
 *
 *********************************************************/

/*
 * Common data structures used by the helper app that runs on the VM
 * and the user process.
 *
 * XXX: avoid including this file. Try to include the vmware/guestrpc
 * equivalent for your feature directly.
 */

#ifndef _VM_APP_H_
#define _VM_APP_H_

#define INCLUDE_ALLOW_USERLEVEL
#define INCLUDE_ALLOW_MODULE
#include "includeCheck.h"

#include "vmware/guestrpc/powerops.h"
#include "vmware/guestrpc/tclodefs.h"
#include "vmware/guestrpc/timesync.h"

#endif
