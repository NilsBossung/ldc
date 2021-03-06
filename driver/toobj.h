//===-- driver/toobj.h - Object file emission -------------------*- C++ -*-===//
//
//                         LDC – the LLVM D compiler
//
// This file is distributed under the BSD-style LDC license. See the LICENSE
// file for details.
//
//===----------------------------------------------------------------------===//
//
// Handles emission of "finished" LLVM modules to on-disk object files.
//
//===----------------------------------------------------------------------===//

#ifndef LDC_GEN_TOOBJ_H
#define LDC_GEN_TOOBJ_H

void writeModule(llvm::Module* m, std::string filename);

#endif
