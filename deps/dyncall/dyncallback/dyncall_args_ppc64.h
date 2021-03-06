/*

 Package: dyncall
 Library: dyncallback
 File: dyncallback/dyncall_args_ppc64.h
 Description: Callback's Arguments VM - Header for ppc64
 License:

   Copyright (c) 2014-2015 Masanori Mitsugi <mitsugi@linux.vnet.ibm.com>

   Permission to use, copy, modify, and distribute this software for any
   purpose with or without fee is hereby granted, provided that the above
   copyright notice and this permission notice appear in all copies.

   THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
   WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
   MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
   ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
   WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
   ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
   OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.

*/

#ifndef DYNCALLBACK_ARGS_PPC64_H
#define DYNCALLBACK_ARGS_PPC64_H

#include "dyncall_args.h"

struct DCArgs
{
  long long      ireg_data[8];
  double         freg_data[13];
  unsigned char* stackptr;
  int            ireg_count;
  int            freg_count;
};

#endif /* DYNCALLBACK_ARGS_PPC64_H */

