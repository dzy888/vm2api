// 006087a0 sample

/* <craggemini_core[66f3c71560d70857]::admission::MemoryAdmission>::sample */

ulonglong * __rustcall
<craggemini_core[66f3c71560d70857]::admission::MemoryAdmission>::sample
          (ulonglong *param_1,byte *param_2,int *param_3,longlong param_4)

{
  int *piVar1;
  ulonglong **ppuVar2;
  ulonglong **ppuVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ulonglong **ppuVar6;
  ulonglong uVar7;
  ulonglong **ppuVar8;
  ulonglong **ppuVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong *puVar14;
  byte bVar15;
  ulonglong **ppuVar16;
  longlong lVar17;
  byte bVar18;
  undefined *puVar19;
  ulonglong uVar20;
  uint uVar22;
  uint uVar21;
  bool bVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  ulonglong **local_120;
  uint local_118;
  ulonglong local_108;
  ulonglong **local_100;
  ulonglong local_f8;
  ulonglong local_d8;
  ulonglong *local_c0;
  code *local_b8;
  ulonglong *local_b0;
  ulonglong **local_a8;
  ulonglong local_a0;
  ulonglong **local_98;
  ulonglong local_90;
  ulonglong **local_88;
  ulonglong **local_80;
  ulonglong local_78;
  ulonglong local_70;
  undefined8 local_68;
  ulonglong **local_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong **local_48;
  ulonglong local_40;
  ulonglong **local_38;
  
  ppuVar6 = *(ulonglong ***)(param_2 + 0x48);
  ppuVar8 = *(ulonglong ***)(param_2 + 0x50);
  auVar24 = craggemini_core[66f3c71560d70857]::admission::read_meminfo(ppuVar6,ppuVar8);
  ppuVar16 = auVar24._8_8_;
  ppuVar9 = auVar24._0_8_;
  local_80 = ppuVar6;
  craggemini_core[66f3c71560d70857]::admission::read_cgroup_memory(&local_50,ppuVar6,ppuVar8);
  piVar1 = param_3 + param_4;
  local_108 = 0;
  local_d8 = 0;
  local_120 = (ulonglong **)0x0;
  while (param_3 != piVar1) {
    iVar11 = *param_3;
    param_3 = param_3 + 1;
    if (iVar11 != 0) {
      ppuVar6 = ppuVar8;
      auVar25 = craggemini_core[66f3c71560d70857]::admission::read_pid_rss_bytes_at(local_80);
      uVar12 = auVar25._8_8_;
      if (auVar25._0_8_ == 1) {
        bVar23 = CARRY8((ulonglong)local_120,uVar12);
        local_120 = (ulonglong **)((longlong)local_120 + uVar12);
        if (bVar23) {
          local_120 = (ulonglong **)0xffffffffffffffff;
        }
        if (local_d8 < uVar12) {
          local_d8 = uVar12;
        }
        local_108 = local_108 + 1;
      }
    }
  }
  ppuVar2 = *(ulonglong ***)(param_2 + 8);
  uVar12 = (ulonglong)(ppuVar9 != (ulonglong **)0x0);
  local_118 = (uint)local_50;
  if ((ppuVar2 != (ulonglong **)0x0 & *param_2) == 1) {
    local_a0 = local_50;
    local_98 = local_48;
    local_90 = uVar12;
    local_88 = ppuVar9;
    uVar21 = 1;
    uVar13 = 0x10;
    local_100 = ppuVar2;
    uVar22 = local_118;
joined_r0x006089a6:
    if (uVar22 == 1) {
      ppuVar3 = *(ulonglong ***)((longlong)&local_a8 + uVar13);
      ppuVar6 = ppuVar3;
      if (local_100 < ppuVar3) {
        ppuVar6 = local_100;
      }
      if (ppuVar3 != (ulonglong **)0x0) {
        local_100 = ppuVar6;
      }
    }
    local_90 = uVar12;
    local_88 = ppuVar9;
    if ((uVar21 != 2 && ppuVar9 != (ulonglong **)0x0) && (ppuVar9 <= local_100)) {
      local_100 = ppuVar9;
    }
LAB_006089b1:
    local_98 = local_48;
    local_a0 = local_50;
    local_f8 = 1;
  }
  else {
    bVar15 = local_48 != (ulonglong **)0x0 & (byte)local_50;
    bVar18 = ppuVar9 != (ulonglong **)0x0 | bVar15;
    ppuVar6 = (ulonglong **)CONCAT71((int7)((ulonglong)ppuVar6 >> 8),bVar18);
    if (bVar18 == 1) {
      local_a0 = local_50;
      local_98 = local_48;
      local_90 = uVar12;
      local_88 = ppuVar9;
      local_100 = ppuVar9;
      if (bVar15 != 0) {
        uVar21 = bVar15 ^ 3;
        uVar13 = (ulonglong)(uVar21 << 4);
        local_100 = local_48;
        uVar22 = *(uint *)((longlong)&local_b0 + uVar13);
        goto joined_r0x006089a6;
      }
      goto LAB_006089b1;
    }
    local_f8 = 0;
  }
  uVar22 = (uint)local_40;
  uVar21 = uVar22 & local_118;
  ppuVar9 = (ulonglong **)0x0;
  if (local_38 <= local_48) {
    ppuVar9 = (ulonglong **)((longlong)local_48 - (longlong)local_38);
  }
  if (*param_2 == 0) {
    if ((byte)((byte)uVar21 | ppuVar16 != (ulonglong **)0x0) == 1) {
      bVar23 = (local_118 & uVar22) == 0;
      ppuVar6 = ppuVar9;
      if (bVar23) {
        ppuVar6 = ppuVar16;
      }
      uVar12 = (ulonglong)bVar23 | 2;
      local_b0 = (ulonglong *)0x0;
      ppuVar8 = (ulonglong **)(ulonglong)uVar21;
      goto LAB_00608bc4;
    }
    puVar19 = (undefined *)0x0;
    iVar11 = *(int *)(param_2 + 0x10);
  }
  else {
    (*(code *)PTR__join_00799210)(&DAT_001834d0,ppuVar8,0x10);
    (*(code *)PTR_inner_007998c0)();
    puVar14 = local_c0;
    if (local_c0 != (ulonglong *)0x0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    local_60 = ppuVar2;
    if (local_78 == 0xffffffffffffffff) {
      if ((1 < ((uint)local_70 & 3) - 2) && ((local_70 & 3) != 0)) {
        local_b8 = (code *)(local_70 - 1);
        local_c0 = (ulonglong *)CONCAT71(local_c0._1_7_,3);
        (*(code *)PTR_drop_00799040)();
      }
      ppuVar8 = local_120;
    }
    else {
      auVar25 = craggemini_core[66f3c71560d70857]::admission::parse_proc_kib_field
                          (local_70,local_68,"VmRSS:",6);
      puVar14 = auVar25._0_8_;
      if (local_78 != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      ppuVar8 = (ulonglong **)0xffffffffffffffff;
      if (!CARRY8(auVar25._8_8_,(ulonglong)local_120)) {
        ppuVar8 = (ulonglong **)(auVar25._8_8_ + (longlong)local_120);
      }
      if (((ulonglong)puVar14 & 1) == 0) {
        ppuVar8 = local_120;
      }
    }
    ppuVar6 = (ulonglong **)0x0;
    if (ppuVar8 <= local_60) {
      ppuVar6 = (ulonglong **)((longlong)local_60 - (longlong)ppuVar8);
    }
    ppuVar8 = (ulonglong **)CONCAT71((int7)((ulonglong)puVar14 >> 8),1);
    uVar12 = 1;
    local_b0 = (ulonglong *)0x1;
LAB_00608bc4:
    local_a8 = ppuVar6;
    local_a0 = (ulonglong)uVar21;
    local_98 = ppuVar9;
    local_90 = (ulonglong)(ppuVar16 != (ulonglong **)0x0);
    local_88 = ppuVar16;
    if ((char)ppuVar8 != '\0') {
      iVar11 = (int)uVar12;
      ppuVar9 = ppuVar6;
      if ((uVar12 & 1) == 0) {
        uVar12 = uVar12 | 1;
        uVar13 = (ulonglong)(uint)(iVar11 << 4);
        ppuVar9 = *(ulonglong ***)((longlong)&local_a8 + uVar13);
        if (ppuVar6 < ppuVar9) {
          ppuVar9 = ppuVar6;
        }
        ppuVar8 = ppuVar9;
        if (*(char *)((longlong)&local_b0 + uVar13) == '\0') {
          ppuVar9 = ppuVar6;
          ppuVar8 = ppuVar6;
        }
      }
      ppuVar6 = ppuVar8;
      if (iVar11 != 2) {
        puVar14 = (ulonglong *)((longlong)&local_98 + (ulonglong)(uint)((int)uVar12 << 4));
        do {
          ppuVar6 = (ulonglong **)puVar14[-2];
          if (ppuVar9 < (ulonglong **)puVar14[-2]) {
            ppuVar6 = ppuVar9;
          }
          if ((char)puVar14[-3] == '\0') {
            ppuVar6 = ppuVar9;
          }
          ppuVar8 = ppuVar6;
          if ((ulonglong **)*puVar14 <= ppuVar6) {
            ppuVar8 = (ulonglong **)*puVar14;
          }
          uVar12 = uVar12 + 2;
          ppuVar9 = ppuVar6;
          if ((char)puVar14[-1] != '\0') {
            ppuVar9 = ppuVar8;
          }
          puVar14 = puVar14 + 4;
          ppuVar6 = ppuVar9;
        } while (uVar12 != 3);
      }
    }
    puVar19 = (undefined *)0x1;
    iVar11 = *(int *)(param_2 + 0x10);
  }
  if (iVar11 == 1) {
    uVar13 = *(ulonglong *)(param_2 + 0x18);
    bVar23 = uVar13 < 0x4000001;
    uVar12 = 0x4000000;
LAB_00608c78:
    if (!bVar23) {
      uVar12 = uVar13;
    }
  }
  else {
    uVar12 = 0x80000000;
    if (local_f8 != 0) {
      uVar12 = 0x20000000;
      if (0x20000000 < (ulonglong)local_100 >> 3) {
        uVar12 = (ulonglong)local_100 >> 3;
      }
      uVar13 = 0x100000000;
      bVar23 = uVar12 < 0x100000000;
      goto LAB_00608c78;
    }
  }
  ppuVar8 = *(ulonglong ***)(param_2 + 0x30);
  uVar13 = 0x2000000;
  if (0x2000000 < *(ulonglong *)(param_2 + 0x38)) {
    uVar13 = *(ulonglong *)(param_2 + 0x38);
  }
  uVar10 = uVar13;
  if (local_108 == 0) {
LAB_00608ce9:
    if (local_f8 == 0) {
      if (puVar19 != (undefined *)0x0) goto LAB_00608dc3;
      if (*(int *)(param_2 + 0x20) == 1) {
        uVar10 = 0xffffffffffffffff;
        bVar15 = 0;
        goto LAB_00608e89;
      }
      bVar15 = 0;
      bVar23 = false;
      uVar20 = 0x40;
      if (((uVar22 & local_118) == 0) || (local_48 == (ulonglong **)0x0)) goto LAB_00608f11;
LAB_00608ec4:
      auVar25._8_8_ = 0;
      auVar25._0_8_ = local_38;
      uVar13 = SUB168(auVar25 * ZEXT816(100),0);
      if (SUB168(auVar25 * ZEXT816(100),8) != 0) goto LAB_00608fda;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_48;
      auVar4 = auVar4 * ZEXT816(0x55);
      goto joined_r0x00608ee7;
    }
    uVar20 = 0;
    if (ppuVar8 <= local_100) {
      uVar20 = (longlong)local_100 - (longlong)ppuVar8;
    }
    if ((uVar20 | uVar13) >> 0x20 == 0) {
      uVar13 = (uVar20 & 0xffffffff) / (uVar13 & 0xffffffff);
      uVar13 = uVar13 + (uVar13 == 0);
      if (puVar19 == (undefined *)0x0) goto LAB_00608de4;
LAB_00608dc3:
      uVar20 = (longlong)ppuVar6 - (longlong)ppuVar8;
      if (ppuVar6 < ppuVar8) {
        uVar20 = (longlong)ppuVar8 - (longlong)ppuVar6;
        if ((uVar20 | uVar10) >> 0x20 == 0) {
          uVar7 = (uVar20 & 0xffffffff) / (uVar10 & 0xffffffff);
          uVar20 = (uVar20 & 0xffffffff) % (uVar10 & 0xffffffff);
        }
        else {
          uVar7 = uVar20 / uVar10;
          uVar20 = uVar20 % uVar10;
        }
        uVar10 = (uVar7 + 1) - (ulonglong)(uVar20 == 0);
        lVar17 = 0;
        if (uVar10 <= local_108) {
          lVar17 = local_108 - uVar10;
        }
      }
      else {
        if ((uVar20 | uVar10) >> 0x20 == 0) {
          uVar20 = (uVar20 & 0xffffffff) / (uVar10 & 0xffffffff);
        }
        else {
          uVar20 = uVar20 / uVar10;
        }
        lVar17 = -1;
        if (!CARRY8(uVar20,local_108)) {
          lVar17 = uVar20 + local_108;
        }
      }
      uVar10 = lVar17 + (ulonglong)(lVar17 == 0);
      bVar15 = 1;
      if ((char)local_f8 == '\0') {
        bVar18 = param_2[0x20];
      }
      else {
        if (uVar10 < uVar13) {
          uVar13 = uVar10;
        }
        bVar18 = param_2[0x20];
        uVar10 = uVar13;
      }
    }
    else {
      uVar13 = uVar20 / uVar13 + (ulonglong)(uVar20 / uVar13 == 0);
      if (puVar19 != (undefined *)0x0) goto LAB_00608dc3;
LAB_00608de4:
      bVar15 = 0;
      bVar18 = param_2[0x20];
      uVar10 = uVar13;
    }
    if (bVar18 != 0) {
LAB_00608e89:
      uVar13 = *(longlong *)(param_2 + 0x28) + (ulonglong)(*(longlong *)(param_2 + 0x28) == 0);
      if (uVar13 < uVar10) {
        uVar10 = uVar13;
      }
    }
    uVar20 = 0x40;
    if (uVar10 != 0xffffffffffffffff) {
      uVar20 = uVar10 + (uVar10 == 0);
    }
    if (((uVar22 & local_118) != 0) && (local_48 != (ulonglong **)0x0)) goto LAB_00608ec4;
    if (bVar15 == 0) {
      bVar23 = false;
      goto LAB_00608f11;
    }
  }
  else {
    uVar20 = uVar13 >> 1;
    uVar10 = uVar13 * 4;
    if (uVar20 <= uVar10) {
      if (((ulonglong)local_120 | local_108) >> 0x20 == 0) {
        uVar7 = ((ulonglong)local_120 & 0xffffffff) / (local_108 & 0xffffffff);
      }
      else {
        uVar7 = (ulonglong)local_120 / local_108;
      }
      if (uVar7 < uVar10) {
        uVar10 = uVar7;
      }
      if (uVar10 <= uVar13) {
        uVar10 = uVar13;
      }
      if (uVar7 < uVar20) {
        uVar10 = uVar13;
      }
      goto LAB_00608ce9;
    }
    local_c0 = &local_58;
    local_b8 = <u64_as_core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt;
    local_b0 = &local_78;
    local_a8 = (ulonglong **)<u64_as_core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt;
    puVar19 = &DAT_00188e61;
    ppuVar6 = &local_c0;
    local_78 = uVar10;
    local_58 = uVar20;
    (*(code *)PTR_panic_fmt_007991a8)(local_b0,&PTR_s_src_admission_rs_0078f350);
    bVar15 = (byte)uVar10;
LAB_00608fda:
    uVar13 = 0xffffffffffffffff;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = local_48;
    auVar4 = auVar5 * ZEXT816(0x55);
joined_r0x00608ee7:
    uVar10 = auVar4._0_8_;
    if (auVar4._8_8_ != 0) {
      uVar10 = 0xffffffffffffffff;
    }
    bVar23 = uVar13 >= uVar10;
    if ((bVar15 & uVar13 < uVar10) == 0) goto LAB_00608f11;
  }
  bVar23 = ppuVar6 < ppuVar8;
LAB_00608f11:
  *(undefined1 (*) [16])(param_1 + 8) = auVar24;
  *param_1 = local_50;
  param_1[1] = (ulonglong)local_48;
  param_1[2] = local_40;
  param_1[3] = (ulonglong)local_38;
  param_1[4] = local_f8;
  param_1[5] = (ulonglong)local_100;
  param_1[6] = (ulonglong)puVar19;
  param_1[7] = (ulonglong)ppuVar6;
  param_1[10] = (ulonglong)local_120;
  param_1[0xb] = local_d8;
  param_1[0xc] = local_108;
  param_1[0xd] = uVar20;
  param_1[0xe] = uVar12;
  *(bool *)(param_1 + 0xf) = bVar23;
  return param_1;
}


