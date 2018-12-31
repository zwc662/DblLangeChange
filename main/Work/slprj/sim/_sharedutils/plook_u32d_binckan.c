#include "rtwtypes.h"
#include "multiword_types.h"
#include "binsearch_u32d.h"
#include "plook_u32d_binckan.h"

uint32_T plook_u32d_binckan(real_T u, const real_T bp[], uint32_T maxIndex)
{
  uint32_T bpIndex;
  if (u <= bp[0U]) {
    bpIndex = 0U;
  } else if (u < bp[maxIndex]) {
    bpIndex = binsearch_u32d(u, bp, maxIndex >> 1U, maxIndex);
    if (bp[bpIndex + 1U] - u <= u - bp[bpIndex]) {
      bpIndex++;
    }
  } else {
    bpIndex = maxIndex;
  }

  return bpIndex;
}
