
#include <deque>
#include <stdio.h>

namespace glslang {

struct Slot {
  void *ptr;
};

static std::deque<Slot> storage;

//
// Thread Local Storage Operations
//
typedef void* OS_TLSIndex;
#define OS_INVALID_TLS_INDEX ((void*)0)

OS_TLSIndex OS_AllocTLSIndex() { 
  storage.emplace_back();
  auto idx = storage.size();
  return reinterpret_cast<OS_TLSIndex>(idx);
}

bool OS_SetTLSValue(OS_TLSIndex nIndex, void *lpvValue) { 
  // printf("set tls value %p\n", lpvValue);
  auto idx = reinterpret_cast<size_t>(nIndex);
  storage[idx].ptr = lpvValue;
  return true; 
}

bool OS_FreeTLSIndex(OS_TLSIndex nIndex) { 
  // well it seem that this is not called much so lazy mode for now
  // as with wasi we cleanup the sandboxed process
  return true; 
}

void* OS_GetTLSValue(OS_TLSIndex nIndex) { 
  auto idx = reinterpret_cast<size_t>(nIndex);
  auto val = storage[idx].ptr;
  // printf("get tls value %p\n", val);
  return val;
 }

void InitGlobalLock() {}

void GetGlobalLock() {}

void ReleaseGlobalLock() {}

typedef unsigned int (*TThreadEntrypoint)(void*);

void OS_CleanupThreadData() {}

void OS_DumpMemoryCounters() {}

} // end namespace glslang