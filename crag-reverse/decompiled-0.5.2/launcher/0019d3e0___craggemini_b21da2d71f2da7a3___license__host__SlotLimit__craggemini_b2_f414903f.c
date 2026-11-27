// 0019d3e0 <craggemini[b21da2d71f2da7a3]::license::host::SlotLimit,<craggemini[b21da2d71f2da7a3]::license::host::SlotLimit>::saturating_union>

/* <core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::iter::adapters::filter::Filter<core[c0acaeba6ab4c2e0]::slice::iter::Iter<craggemini[b21da2d71f2da7a3]::license::host::HostGrant>,
   <craggemini[b21da2d71f2da7a3]::license::GrantMetadata>::check_at::{closure#0}>,
   <craggemini[b21da2d71f2da7a3]::license::GrantMetadata>::check_at::{closure#1}> as
   core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>::fold::<craggemini[b21da2d71f2da7a3]::license::host::SlotLimit,
   <craggemini[b21da2d71f2da7a3]::license::host::SlotLimit>::saturating_union> */

uint __rustcall
<core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::iter::adapters::filter::Filter<core[c0acaeba6ab4c2e0]::slice::iter::Iter<craggemini[b21da2d71f2da7a3]::license::host::HostGrant>,<craggemini[b21da2d71f2da7a3]::license::GrantMetadata>::check_at::{closure#0}>,<craggemini[b21da2d71f2da7a3]::license::GrantMetadata>::check_at::{closure#1}>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
::fold::
<craggemini[b21da2d71f2da7a3]::license::host::SlotLimit,<craggemini[b21da2d71f2da7a3]::license::host::SlotLimit>::saturating_union>
          (longlong *param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  uint *puVar3;
  ulonglong uVar4;
  uint uVar5;
  bool bVar6;
  
  lVar2 = *param_1;
  if (lVar2 != param_1[1]) {
    uVar4 = (ulonglong)(param_1[1] - lVar2) >> 4;
    puVar3 = (uint *)(lVar2 + 8);
    uVar5 = param_2;
    do {
      if (*(longlong *)param_1[2] < *(longlong *)(puVar3 + -2)) {
        param_2 = 0;
        if ((uVar5 != 0) && (uVar1 = *puVar3, uVar1 != 0)) {
          bVar6 = CARRY4(uVar5,uVar1);
          uVar5 = uVar5 + uVar1;
          if (bVar6) {
            uVar5 = 0xffffffff;
          }
          if (0x7ffffffe < uVar5) {
            uVar5 = 0x7fffffff;
          }
          goto LAB_0019d410;
        }
      }
      else {
LAB_0019d410:
        param_2 = uVar5;
      }
      puVar3 = puVar3 + 4;
      uVar4 = uVar4 - 1;
      uVar5 = param_2;
    } while (uVar4 != 0);
  }
  return param_2;
}


