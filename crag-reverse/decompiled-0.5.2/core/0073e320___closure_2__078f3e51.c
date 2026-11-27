// 0073e320 {closure#2}

/* std[6c98fd8553dbae28]::sys::thread::unix::cgroups::quota_v1::{closure#2} */

undefined1  [16] __rustcall
std[6c98fd8553dbae28]::sys::thread::unix::cgroups::quota_v1::_closure_2_
          (ulonglong *param_1,int **param_2,char *param_3,ulonglong param_4)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong extraout_RDX;
  ulonglong extraout_RDX_00;
  int **ppiVar6;
  char cVar7;
  ulonglong uVar8;
  int **ppiVar9;
  int iVar10;
  int iVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  int *local_1f0;
  undefined1 *local_1e8;
  undefined8 *local_70;
  int local_68;
  int local_64;
  int **local_60;
  undefined8 local_50;
  undefined4 local_48;
  undefined2 local_44;
  int local_40;
  int local_3c;
  int **local_38;
  
  uVar8 = param_1[2];
  if (uVar8 == 0) {
    if (*param_3 == '/') goto LAB_0073e3a6;
    uVar2 = *param_1;
    uVar8 = 0;
  }
  else if (*param_3 == '/') {
LAB_0073e3a6:
    param_1[2] = 0;
    uVar8 = 0;
    uVar2 = *param_1;
  }
  else {
    uVar2 = *param_1;
    uVar5 = param_1[1];
    if (*(char *)((uVar5 - 1) + uVar8) != '/') {
      if (uVar2 == uVar8) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(param_1,uVar8,1,1);
        uVar8 = param_1[2];
        uVar2 = *param_1;
        uVar5 = param_1[1];
      }
      *(undefined1 *)(uVar5 + uVar8) = 0x2f;
      uVar8 = uVar8 + 1;
      param_1[2] = uVar8;
    }
    uVar2 = uVar2 - uVar8;
  }
  if (uVar2 < param_4) {
    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[12e961f32105355]::alloc::Global>(param_1,uVar8,param_4,1);
    uVar8 = param_1[2];
  }
  (*(code *)PTR_memcpy_00799008)();
  ppiVar9 = (int **)(uVar8 + param_4);
  param_1[2] = (ulonglong)ppiVar9;
  param_2[2] = (int *)0x0;
  local_50 = 0x1b600000000;
  local_44 = 0;
  local_48 = 1;
  ppiVar6 = (int **)param_1[1];
  uVar8 = param_1[2];
  local_70 = &local_50;
  if (uVar8 < 0x180) {
    ppiVar9 = &local_1f0;
    (*(code *)PTR_memcpy_00799008)();
    *(undefined1 *)((longlong)&local_1f0 + uVar8) = 0;
    uVar8 = uVar8 + 1;
    uVar2 = uVar8;
    (*(code *)PTR_from_bytes_with_nul_0079abd0)();
    if (local_68 == 1) {
      local_38 = (int **)&DAT_00796450;
      local_40 = 1;
      ppiVar6 = ppiVar9;
    }
    else {
      ppiVar6 = local_60;
      <std[6c98fd8553dbae28]::sys::fs::unix::File>::open_c(&local_40,local_60,&local_50);
      uVar2 = extraout_RDX;
      if (local_40 != 1) goto LAB_0073e488;
    }
LAB_0073e461:
    local_60 = local_38;
    iVar10 = 1;
    ppiVar9 = local_38;
    iVar11 = (int)uVar8;
  }
  else {
    helpers::small_c_string::run_with_cstr_allocating::<std[6c98fd8553dbae28]::sys::fs::unix::File>
              (&local_40,ppiVar6,uVar8,&local_70);
    uVar2 = extraout_RDX_00;
    if (local_40 == 1) goto LAB_0073e461;
LAB_0073e488:
    local_64 = local_3c;
    iVar10 = 0;
    iVar11 = local_3c;
  }
  local_68 = iVar10;
  (*(code *)PTR_pop_0079ada8)();
  if (iVar10 != 0) {
    iVar11 = -1;
    if ((1 < ((uint)ppiVar9 & 3) - 2) && (((ulonglong)ppiVar9 & 3) != 0)) {
      local_1e8 = (undefined1 *)((longlong)ppiVar9 + -1);
      local_1f0 = (int *)CONCAT71(local_1f0._1_7_,3);
      (*(code *)PTR_drop_00799040)();
    }
  }
  if (iVar11 != -1) {
    local_1f0 = &local_40;
    local_40 = iVar11;
    lVar3 = (*(code *)PTR_read_to_string_0079abd8)();
    if (lVar3 != 1) {
      (*(code *)PTR_close_00799030)();
      ppiVar6 = (int **)param_2[2];
      auVar13 = ::<str>::trim_matches::<<char>::is_whitespace>(param_2[1],ppiVar6);
      uVar8 = auVar13._8_8_;
      auVar13._0_8_ = auVar13._0_8_;
      if (uVar8 == 0) {
        uVar4 = 0;
      }
      else {
        if (uVar8 == 1) {
          cVar7 = *auVar13._0_8_;
          uVar4 = 0;
          if ((cVar7 == '+') || (cVar7 == '-')) goto LAB_0073e546;
        }
        else {
          cVar7 = *auVar13._0_8_;
        }
        uVar2 = (ulonglong)(cVar7 == '+');
        if (uVar8 - uVar2 < 0x11) {
          uVar4 = 1;
          if (uVar8 == uVar2) {
            ppiVar6 = (int **)0x0;
          }
          else {
            lVar3 = 0;
            ppiVar6 = (int **)0x0;
            do {
              if (9 < (byte)auVar13._0_8_[lVar3 + uVar2] - 0x30) goto LAB_0073e672;
              ppiVar6 = (int **)((ulonglong)((byte)auVar13._0_8_[lVar3 + uVar2] - 0x30) +
                                (longlong)ppiVar6 * 10);
              lVar3 = lVar3 + 1;
            } while (lVar3 != uVar8 + -uVar2);
          }
        }
        else {
          lVar3 = 0;
          ppiVar6 = (int **)0x0;
          while (lVar3 != uVar8 + -uVar2) {
            auVar13._8_8_ = 0;
            auVar13._0_8_ = ppiVar6;
            uVar5 = SUB168(auVar13 * ZEXT816(10),0);
            if (SUB168(auVar13 * ZEXT816(10),8) != 0) goto LAB_0073e672;
            uVar1 = (byte)auVar13._0_8_[lVar3 + uVar2] - 0x30;
            ppiVar6 = (int **)(uVar5 + uVar1);
            uVar4 = 0;
            if ((9 < uVar1) || (lVar3 = lVar3 + 1, CARRY8(uVar5,(ulonglong)uVar1)))
            goto LAB_0073e546;
          }
          uVar4 = 1;
        }
      }
      goto LAB_0073e546;
    }
    if ((1 < ((uint)uVar2 & 3) - 2) && ((uVar2 & 3) != 0)) {
      local_1e8 = (undefined1 *)(uVar2 - 1);
      local_1f0 = (int *)CONCAT71(local_1f0._1_7_,3);
      (*(code *)PTR_drop_00799040)();
    }
    (*(code *)PTR_close_00799030)();
    ppiVar6 = param_2;
  }
  uVar4 = 0;
LAB_0073e546:
  auVar12._8_8_ = ppiVar6;
  auVar12._0_8_ = uVar4;
  return auVar12;
LAB_0073e672:
  uVar4 = 0;
  goto LAB_0073e546;
}


