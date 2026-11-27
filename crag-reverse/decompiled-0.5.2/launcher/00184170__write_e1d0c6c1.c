// 00184170 write

/* <craggemini[b21da2d71f2da7a3]::license::files::PrivateDir>::write */

ulonglong __rustcall
<craggemini[b21da2d71f2da7a3]::license::files::PrivateDir>::write
          (uint *param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,undefined8 param_5,
          char param_6)

{
  uint uVar1;
  undefined4 **ppuVar2;
  undefined1 *puVar3;
  undefined4 **ppuVar4;
  int iVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined4 **ppuVar10;
  undefined4 **ppuVar11;
  uint7 uVar12;
  undefined4 uVar13;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined4 **local_98;
  undefined4 *local_88;
  code *local_80;
  uint *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 **local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  local_48 = 0;
  uStack_40 = 0;
  local_78 = param_1;
  local_70 = param_4;
  local_68 = param_5;
  (*(code *)PTR_fill_bytes_00219da8)(0,0x10);
  craggemini[b21da2d71f2da7a3]::license::hex(&local_a8,&local_48,0x10);
  local_80 = <alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
  ppuVar11 = &local_88;
  local_88 = &local_a8;
  uVar13 = (*(code *)PTR_format_inner_00219db0)();
  if (CONCAT44(uStack_a4,local_a8) != 0) {
    ppuVar11 = (undefined4 **)0x1;
    uVar13 = (*(code *)PTR___rust_dealloc_00219c40)();
  }
  ppuVar4 = local_50;
  ppuVar2 = (undefined4 **)CONCAT44(uStack_5c,local_60);
  puVar7 = (undefined1 *)CONCAT44(uStack_54,uStack_58);
  if (&DAT_0000000f < local_50) {
    ppuVar11 = local_50;
    uVar6 = (*(code *)PTR_memchr_aligned_00219d40)();
    uVar13 = extraout_XMM0_Da;
  }
  else {
    uVar6 = 0;
    if (local_50 != (undefined4 **)0x0) {
      ppuVar10 = (undefined4 **)0x0;
      do {
        if (puVar7[(longlong)ppuVar10] == '\0') goto LAB_00184252;
        ppuVar10 = (undefined4 **)((longlong)ppuVar10 + 1);
      } while (local_50 != ppuVar10);
    }
  }
  if ((uVar6 & 1) == 0) {
    local_98 = local_50;
    local_a8 = local_60;
    uStack_a4 = uStack_5c;
    uStack_a0 = (undefined1 *)CONCAT44(uStack_54,uStack_58);
    puVar7 = (undefined1 *)(*(code *)PTR__from_vec_unchecked_0021a060)();
    uVar13 = extraout_XMM0_Da_00;
  }
  else {
LAB_00184252:
    ppuVar11 = ppuVar4;
    if (ppuVar2 != (undefined4 **)0xffffffffffffffff) {
      uVar6 = CONCAT71((int7)(param_3 >> 8),3);
      ppuVar11 = ppuVar2;
      goto joined_r0x00184368;
    }
  }
  uVar13 = (*(code *)PTR_spec_new_impl_0021a068)(uVar13,param_3);
  ppuVar4 = local_98;
  puVar3 = uStack_a0;
  ppuVar2 = (undefined4 **)CONCAT44(uStack_a4,local_a8);
  if (ppuVar2 == (undefined4 **)0xffffffffffffffff) {
    uVar1 = *local_78;
    param_3 = (ulonglong)uVar1;
    iVar5 = (*(code *)PTR_openat_0021a070)(0x180,0xa00c1);
    if (-1 < iVar5) {
      local_88 = (undefined4 *)CONCAT44(local_88._4_4_,iVar5);
      iVar5 = (*(code *)PTR_fchmod_00219f10)();
      uVar12 = (uint7)(uint3)(uVar1 >> 8);
      uVar6 = CONCAT71(uVar12,3);
      if (iVar5 == 0) {
        uVar8 = <std[6c98fd8553dbae28]::fs::File_as_std[6c98fd8553dbae28]::io::Write>::write_all
                          (&local_88,local_70,local_68);
        if (uVar8 == 0) {
          uVar8 = (*(code *)PTR_sync_all_0021a080)();
          if (uVar8 == 0) {
            if (param_6 == '\0') {
              iVar5 = (*(code *)PTR_renameat2_0021a090)(puVar3,uVar1,1);
            }
            else {
              iVar5 = (*(code *)PTR_renameat_0021a088)(puVar3,uVar1);
            }
            if (iVar5 == 0) {
              lVar9 = (*(code *)PTR_sync_all_0021a080)();
              if (lVar9 == 0) {
                uVar6 = CONCAT71(uVar12,0xff);
              }
              else {
                core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::io::error::Error>
                          (lVar9,puVar7);
              }
            }
          }
          else if ((1 < ((uint)uVar8 & 3) - 2) && ((uVar8 & 3) != 0)) {
            uStack_a0 = (undefined1 *)(uVar8 - 1);
            local_a8 = CONCAT31(local_a8._1_3_,3);
            (*(code *)PTR_drop_00219c58)();
          }
        }
        else if ((1 < ((uint)uVar8 & 3) - 2) && ((uVar8 & 3) != 0)) {
          uStack_a0 = (undefined1 *)(uVar8 - 1);
          local_a8 = CONCAT31(local_a8._1_3_,3);
          (*(code *)PTR_drop_00219c58)();
        }
      }
      uVar13 = (*(code *)PTR_close_00219d60)();
      uVar13 = (*(code *)PTR_unlinkat_0021a078)(uVar13,0);
      *puVar3 = 0;
      if (ppuVar4 != (undefined4 **)0x0) {
        uVar13 = (*(code *)PTR___rust_dealloc_00219c40)(uVar13,1);
      }
      *puVar7 = 0;
      goto joined_r0x00184368;
    }
    *puVar3 = 0;
    uVar13 = extraout_XMM0_Da_01;
    ppuVar2 = ppuVar4;
  }
  if (ppuVar2 != (undefined4 **)0x0) {
    uVar13 = (*(code *)PTR___rust_dealloc_00219c40)(uVar13,1);
  }
  *puVar7 = 0;
  uVar6 = CONCAT71((int7)(param_3 >> 8),3);
joined_r0x00184368:
  if (ppuVar11 != (undefined4 **)0x0) {
    (*(code *)PTR___rust_dealloc_00219c40)(uVar13,1);
  }
  return uVar6 & 0xffffffff;
}


