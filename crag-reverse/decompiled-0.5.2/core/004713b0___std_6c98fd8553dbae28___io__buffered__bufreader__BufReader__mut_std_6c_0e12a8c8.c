// 004713b0 <std[6c98fd8553dbae28]::io::buffered::bufreader::BufReader<&mut_std[6c98fd8553dbae28]::fs::File>>

/* WARNING: Removing unreachable block (ram,0x00471585) */
/* std[6c98fd8553dbae28]::io::read_until::<std[6c98fd8553dbae28]::io::buffered::bufreader::BufReader<&mut
   std[6c98fd8553dbae28]::fs::File>> */

undefined1  [16] __rustcall
std[6c98fd8553dbae28]::io::read_until::
<std[6c98fd8553dbae28]::io::buffered::bufreader::BufReader<&mut_std[6c98fd8553dbae28]::fs::File>>
          (longlong *param_1,char param_2,longlong *param_3)

{
  ulonglong uVar1;
  byte bVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 auVar13 [16];
  ulonglong local_88;
  ulonglong local_50;
  
  lVar3 = *param_1;
  uVar9 = param_1[2];
  local_50 = param_1[3];
  bVar2 = *(byte *)(param_1 + 4);
  uVar11 = (ulonglong)bVar2;
  uVar10 = 0;
LAB_004713f5:
  uVar12 = local_50;
  local_88 = uVar9;
  if (uVar9 < local_50) goto LAB_004714b9;
LAB_00471434:
  local_50 = 0;
  uVar6 = (*(code *)PTR_read_buf_007999a0)();
  param_1[2] = 0;
  param_1[3] = 0;
  *(byte *)(param_1 + 4) = bVar2;
  uVar12 = local_50;
  if (uVar6 == 0) {
    local_88 = 0;
    uVar9 = 0;
    goto LAB_004714b9;
  }
  uVar9 = 0;
  local_88 = 0;
  switch((uint)uVar6 & 3) {
  case 1:
    goto switchD_004714a8_caseD_1;
  case 2:
    goto switchD_004714a8_caseD_2;
  case 3:
    goto switchD_004714a8_caseD_3;
  }
switchD_004714a8_caseD_0:
  if (*(char *)(uVar6 + 0x10) == '#') {
LAB_0047142b:
    if (uVar9 < uVar12) {
LAB_004714b9:
      do {
        uVar6 = uVar12 - uVar9;
        if (lVar3 != 0) {
          uVar1 = lVar3 + uVar9;
          if (uVar6 < 0x10) {
            if (uVar6 != 0) {
              uVar12 = uVar12 - uVar9;
              uVar9 = 0;
              goto LAB_00471560;
            }
            uVar9 = 0;
            lVar7 = 0;
          }
          else {
            uVar9 = uVar6;
            lVar7 = (*(code *)PTR_memchr_aligned_00799490)();
            uVar12 = uVar1;
          }
          if (lVar7 != 1) goto LAB_004715be;
          goto LAB_00471665;
        }
        switch((uint)uVar6 & 3) {
        case 0:
          goto switchD_004714a8_caseD_0;
        case 1:
switchD_004714a8_caseD_1:
          if (*(char *)(uVar6 + 0x1f) != '#') goto LAB_0047164e;
          (*(code *)PTR_drop_00799040)();
          if (uVar12 <= uVar9) goto LAB_00471434;
          break;
        case 2:
          goto switchD_004714a8_caseD_2;
        case 3:
          goto switchD_004714a8_caseD_3;
        }
      } while( true );
    }
    goto LAB_00471434;
  }
LAB_0047164e:
  uVar10 = uVar6;
  uVar8 = 1;
  goto LAB_00471656;
  while (uVar9 = uVar9 + 1, uVar12 != uVar9) {
LAB_00471560:
    if (*(char *)(uVar1 + uVar9) == param_2) goto LAB_00471665;
  }
LAB_004715be:
  lVar7 = param_3[2];
  if ((ulonglong)(*param_3 - lVar7) < uVar6) {
    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[12e961f32105355]::alloc::Global>(param_3,lVar7,uVar6,1,1);
    lVar7 = param_3[2];
  }
  else if (uVar6 == 0) {
    bVar4 = true;
    goto LAB_004715ee;
  }
  (*(code *)PTR_memcpy_00799008)();
  bVar4 = false;
LAB_004715ee:
  uVar9 = local_88 + uVar6;
  if (local_50 < local_88 + uVar6) {
    uVar9 = local_50;
  }
  param_3[2] = lVar7 + uVar6;
  param_1[2] = uVar9;
  uVar10 = uVar10 + uVar6;
  if (bVar4) {
LAB_004716b0:
    uVar8 = 0;
LAB_00471656:
    auVar13._8_8_ = uVar10;
    auVar13._0_8_ = uVar8;
    return auVar13;
  }
  goto LAB_004713f5;
LAB_00471665:
  if (uVar9 < uVar6) {
    uVar6 = uVar9 + 1;
    uVar12 = param_3[2];
    uVar11 = local_88;
    if (uVar9 < *param_3 - uVar12) goto LAB_00471683;
  }
  else {
    (*(code *)PTR_slice_index_fail_007993c8)
              (&PTR_anon_ed01ef58651a73351ccd2244bf431f77_42_llvm_1588049147593173555_0078aaa8,uVar6
              );
  }
  <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
  <alloc[12e961f32105355]::alloc::Global>(param_3,uVar12,uVar6,1,1);
  uVar12 = param_3[2];
LAB_00471683:
  (*(code *)PTR_memcpy_00799008)();
  param_3[2] = uVar12 + uVar6;
  uVar9 = uVar11 + uVar6;
  if (local_50 < uVar11 + uVar6) {
    uVar9 = local_50;
  }
  param_1[2] = uVar9;
  uVar10 = uVar10 + uVar6;
  goto LAB_004716b0;
switchD_004714a8_caseD_3:
  cVar5 = (char)(uVar6 >> 0x20);
  if (0x2a < uVar6 >> 0x20) {
    cVar5 = -1;
  }
  if (cVar5 != '#') goto LAB_0047164e;
  goto LAB_0047142b;
switchD_004714a8_caseD_2:
  lVar7 = (*(code *)PTR_get_os_functions_007992e0)();
  cVar5 = (**(code **)(lVar7 + 0x10))();
  if (cVar5 == '\0') goto LAB_0047164e;
  goto LAB_0047142b;
}


