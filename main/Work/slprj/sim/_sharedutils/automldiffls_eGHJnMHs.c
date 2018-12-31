#include "rtwtypes.h"
#include "multiword_types.h"
#include "automldiffls_eGHJnMHs.h"

void automldiffls_eGHJnMHs(const real_T u[4], real_T bw1, real_T bd, real_T bw2,
  real_T Ndiff, real_T shaftSwitch, real_T Jd, real_T Jw1, real_T Jw2, const
  real_T x[2], real_T y[4], real_T xdot[2])
{
  int32_T diffDir;
  real_T term1;
  real_T term2;
  real_T invJ[4];
  real_T diffDir_p[8];
  real_T invJ_p[8];
  int32_T i;
  real_T invJ_e[4];
  real_T invJ_i[2];
  real_T invJ_m[2];
  real_T diffDir_e[8];
  real_T bw1_idx_1;
  real_T bw1_idx_3;
  real_T invJ_tmp;
  if (shaftSwitch != 0.0) {
    diffDir = -1;
  } else {
    diffDir = 1;
  }

  term1 = Ndiff * Ndiff * Jd;
  term2 = (4.0 * Jw1 * Jw2 + term1 * Jw1) + Jw2 * term1;
  invJ[0] = (Jw2 * 4.0 + term1) / term2;
  invJ_tmp = -term1 / term2;
  invJ[2] = invJ_tmp;
  invJ[1] = invJ_tmp;
  invJ[3] = (Jw1 * 4.0 + term1) / term2;
  term1 = (real_T)diffDir / 2.0 * Ndiff;
  diffDir_p[0] = term1;
  diffDir_p[2] = -1.0;
  diffDir_p[4] = 0.0;
  diffDir_p[6] = -0.5;
  diffDir_p[1] = term1;
  diffDir_p[3] = 0.0;
  diffDir_p[5] = -1.0;
  diffDir_p[7] = 0.5;
  term2 = Ndiff * bd;
  invJ_tmp = -(term2 + bw1);
  bw1_idx_1 = -(Ndiff * bd);
  bw1_idx_3 = -(term2 + bw2);
  diffDir_e[0] = term1;
  diffDir_e[4] = term1;
  for (diffDir = 0; diffDir < 2; diffDir++) {
    for (i = 0; i < 4; i++) {
      invJ_p[diffDir + (i << 1)] = 0.0;
      invJ_p[diffDir + (i << 1)] += diffDir_p[i << 1] * invJ[diffDir];
      invJ_p[diffDir + (i << 1)] += diffDir_p[(i << 1) + 1] * invJ[diffDir + 2];
    }

    invJ_e[diffDir] = 0.0;
    invJ_e[diffDir] += invJ[diffDir] * invJ_tmp;
    invJ_e[diffDir] += invJ[diffDir + 2] * bw1_idx_1;
    invJ_e[diffDir + 2] = 0.0;
    invJ_e[diffDir + 2] += invJ[diffDir] * -term2;
    invJ_e[diffDir + 2] += invJ[diffDir + 2] * bw1_idx_3;
    invJ_i[diffDir] = 0.0;
    invJ_i[diffDir] += invJ_p[diffDir] * u[0];
    invJ_i[diffDir] += invJ_p[diffDir + 2] * u[1];
    invJ_i[diffDir] += invJ_p[diffDir + 4] * u[2];
    invJ_i[diffDir] += invJ_p[diffDir + 6] * u[3];
    invJ_m[diffDir] = 0.0;
    invJ_m[diffDir] += invJ_e[diffDir] * x[0];
    invJ_m[diffDir] += invJ_e[diffDir + 2] * x[1];
    xdot[diffDir] = invJ_i[diffDir] + invJ_m[diffDir];
    diffDir_e[1 + (diffDir << 2)] = -1.0 + (real_T)diffDir;
    diffDir_e[2 + (diffDir << 2)] = 0.0 - (real_T)diffDir;
    diffDir_e[3 + (diffDir << 2)] = 0.5 - (real_T)diffDir;
  }

  for (diffDir = 0; diffDir < 4; diffDir++) {
    term1 = 0.0 * u[3] + (0.0 * u[2] + (0.0 * u[1] + 0.0 * u[0]));
    y[diffDir] = (diffDir_e[diffDir + 4] * x[1] + diffDir_e[diffDir] * x[0]) +
      term1;
  }
}
