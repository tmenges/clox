#ifndef LOX_COMPILER_H
#define LOX_COMPILER_H

#include "object.h"
#include "vm.h"

ObjFunction* compile(const char* source);
void markCompilerRoots();

#endif //LOX_COMPILER_H
