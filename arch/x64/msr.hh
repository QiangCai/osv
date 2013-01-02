#ifndef MSR_HH_
#define MSR_HH_

#include "processor.hh"

enum class msr : uint32_t {
    IA32_APIC_BASE = 0x0000001b,
    IA32_FS_BASE = 0xc0000100,
};

namespace processor {

inline void wrmsr(msr index, u64 value)
{
    wrmsr(static_cast<u32>(index), value);
}

inline u64 rdmsr(msr index)
{
    return rdmsr(static_cast<u32>(index));
}

}

#endif /* MSR_HH_ */
