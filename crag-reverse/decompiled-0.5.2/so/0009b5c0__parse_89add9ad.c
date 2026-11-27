// 0009b5c0 parse

/* <std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::elf::Object>::parse */

void __rustcall
<std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::elf::Object>::parse
          (longlong *param_1,int *param_2,ulonglong param_3)

{
  longlong lVar1;
  byte *pbVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  qword *pqVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  qword *pqVar15;
  qword *pqVar16;
  longlong lVar17;
  ulonglong uVar18;
  qword *pqVar19;
  qword *pqVar20;
  undefined4 uVar21;
  undefined1 local_b0 [8];
  undefined8 local_a8;
  dword dStack_a0;
  dword dStack_9c;
  qword *local_98;
  qword *pqStack_90;
  char *local_88;
  longlong local_80;
  ulonglong local_78;
  int *local_70;
  char *local_68;
  undefined4 local_5c;
  ulonglong local_58;
  ulonglong local_50;
  longlong local_48;
  longlong local_40;
  int *local_38;
  
  if (((((param_3 < 0x40) || (*param_2 != 0x464c457f)) || ((char)param_2[1] != '\x02')) ||
      ((1 < (byte)(*(char *)((longlong)param_2 + 5) - 1U) ||
       (*(char *)((longlong)param_2 + 6) != '\x01')))) ||
     (*(char *)((longlong)param_2 + 5) == '\x02')) goto LAB_0009b5dd;
  uVar3 = *(ulonglong *)(param_2 + 10);
  if (uVar3 != 0) {
    local_58 = (ulonglong)*(ushort *)(param_2 + 0xf);
    if (local_58 == 0) {
      if ((*(short *)((longlong)param_2 + 0x3a) != 0x40) ||
         (uVar10 = param_3 - uVar3, uVar10 < 0x40 || param_3 < uVar3)) goto LAB_0009b5dd;
      local_58 = *(ulonglong *)((longlong)param_2 + uVar3 + 0x20);
      if (local_58 == 0) goto LAB_0009b769;
      if (local_58 >> 0x3a != 0) goto LAB_0009b5dd;
    }
    else {
      if (*(short *)((longlong)param_2 + 0x3a) != 0x40) goto LAB_0009b5dd;
      uVar10 = param_3 - uVar3;
    }
    if ((param_3 < uVar3) || (uVar14 = local_58 * 0x40, uVar10 < uVar14)) {
LAB_0009b5dd:
      *param_1 = -1;
      return;
    }
    local_40 = (longlong)param_2 + uVar3;
    uVar9 = (uint)*(ushort *)((longlong)param_2 + 0x3e);
    if (*(ushort *)((longlong)param_2 + 0x3e) == 0xffff) {
      uVar9 = *(uint *)(local_40 + 0x28);
    }
    if ((uVar9 == 0) || (local_58 <= uVar9)) goto LAB_0009b5dd;
    lVar11 = (ulonglong)uVar9 * 0x40;
    local_70 = (int *)0x0;
    local_80 = 0;
    local_78 = 0;
    if (*(int *)(local_40 + 4 + lVar11) != 8) {
      lVar11 = lVar11 + local_40;
      local_78 = *(ulonglong *)(lVar11 + 0x18);
      uVar10 = *(ulonglong *)(lVar11 + 0x20);
      local_80 = uVar10 + local_78;
      local_70 = param_2;
      if (CARRY8(uVar10,local_78)) goto LAB_0009b5dd;
    }
    uVar18 = 0;
    uVar10 = 0;
    do {
      if (*(int *)((longlong)param_2 + uVar18 + uVar3 + 4) == 2) {
        uVar4 = *(ulonglong *)((longlong)param_2 + uVar18 + 0x20 + uVar3);
        if (uVar4 == 0) {
          local_a8 = (qword *)Elf64_Ehdr_00000000.e_ident_magic_str;
        }
        else {
          uVar13 = *(ulonglong *)((longlong)param_2 + uVar18 + 0x18 + uVar3);
          if ((param_3 < uVar13) || (param_3 - uVar13 < uVar4)) goto LAB_0009b5dd;
          local_a8 = (qword *)(uVar13 + (longlong)param_2);
        }
        uVar13 = uVar4 / 0x18;
        if (uVar4 != uVar13 * 0x18) goto LAB_0009b5dd;
        uVar18 = (ulonglong)*(uint *)((longlong)param_2 + uVar18 + 0x28 + uVar3);
        if (uVar18 == 0) {
          local_38 = (int *)0x0;
          local_48 = 0;
          local_50 = 0;
        }
        else {
          if ((local_58 <= uVar18) || (*(int *)((longlong)param_2 + uVar18 * 0x40 + uVar3 + 4) != 3)
             ) goto LAB_0009b5dd;
          lVar11 = uVar3 + uVar18 * 0x40;
          local_50 = *(ulonglong *)((longlong)param_2 + lVar11 + 0x18);
          uVar18 = *(ulonglong *)((longlong)param_2 + lVar11 + 0x20);
          local_48 = uVar18 + local_50;
          local_38 = param_2;
          if (CARRY8(uVar18,local_50)) goto LAB_0009b5dd;
        }
        uVar18 = 0;
        goto LAB_0009bb10;
      }
      uVar10 = uVar10 + 1;
      uVar18 = uVar18 + 0x40;
    } while (uVar14 != uVar18);
    goto LAB_0009b6ff;
  }
LAB_0009b769:
  local_80 = 0;
  local_78 = 0;
  local_70 = (int *)0x0;
  local_58 = 0;
  local_40 = 1;
LAB_0009b79a:
  local_38 = (int *)0x0;
  local_50 = 0;
  local_48 = 0;
  uVar13 = 0;
  local_a8 = (qword *)Elf64_Ehdr_00000000.e_ident_magic_str;
  goto LAB_0009b7ac;
  while (uVar18 = uVar18 + 0x40, uVar14 != uVar18) {
LAB_0009bb10:
    if ((((*(int *)((longlong)param_2 + uVar18 + uVar3 + 4) == 0x12) &&
         (*(uint *)((longlong)param_2 + uVar18 + uVar3 + 0x28) == uVar10)) &&
        (uVar6 = *(ulonglong *)((longlong)param_2 + uVar18 + uVar3 + 0x20), uVar6 != 0)) &&
       ((((uVar6 & 3) != 0 ||
         (uVar5 = *(ulonglong *)((longlong)param_2 + uVar18 + uVar3 + 0x18), param_3 < uVar5)) ||
        (param_3 - uVar5 < uVar6)))) goto LAB_0009b5dd;
  }
  if (uVar4 < 0x18) {
LAB_0009b6ff:
    uVar18 = 0;
    uVar10 = 0;
    do {
      if (*(int *)((longlong)param_2 + uVar18 + uVar3 + 4) == 0xb) {
        uVar4 = *(ulonglong *)((longlong)param_2 + uVar18 + 0x20 + uVar3);
        if (uVar4 == 0) {
          local_a8 = (qword *)Elf64_Ehdr_00000000.e_ident_magic_str;
        }
        else {
          uVar13 = *(ulonglong *)((longlong)param_2 + uVar18 + 0x18 + uVar3);
          if ((param_3 < uVar13) || (param_3 - uVar13 < uVar4)) goto LAB_0009b5dd;
          local_a8 = (qword *)(uVar13 + (longlong)param_2);
        }
        uVar13 = uVar4 / 0x18;
        if (uVar4 != uVar13 * 0x18) goto LAB_0009b5dd;
        uVar18 = (ulonglong)*(uint *)((longlong)param_2 + uVar18 + 0x28 + uVar3);
        if (uVar18 == 0) {
          local_38 = (int *)0x0;
          local_48 = 0;
          local_50 = 0;
        }
        else {
          if ((local_58 <= uVar18) || (*(int *)(local_40 + 4 + uVar18 * 0x40) != 3))
          goto LAB_0009b5dd;
          lVar11 = uVar18 * 0x40 + local_40;
          local_50 = *(ulonglong *)(lVar11 + 0x18);
          uVar18 = *(ulonglong *)(lVar11 + 0x20);
          local_48 = uVar18 + local_50;
          local_38 = param_2;
          if (CARRY8(uVar18,local_50)) goto LAB_0009b5dd;
        }
        uVar18 = 0;
        goto LAB_0009bb92;
      }
      uVar10 = uVar10 + 1;
      uVar18 = uVar18 + 0x40;
    } while (uVar14 != uVar18);
    goto LAB_0009b79a;
  }
  goto LAB_0009b7ac;
  while (uVar18 = uVar18 + 0x40, uVar14 != uVar18) {
LAB_0009bb92:
    if ((((*(int *)((longlong)param_2 + uVar18 + uVar3 + 4) == 0x12) &&
         (*(uint *)((longlong)param_2 + uVar18 + uVar3 + 0x28) == uVar10)) &&
        (uVar4 = *(ulonglong *)((longlong)param_2 + uVar18 + uVar3 + 0x20), uVar4 != 0)) &&
       ((((uVar4 & 3) != 0 ||
         (uVar6 = *(ulonglong *)((longlong)param_2 + uVar18 + uVar3 + 0x18), param_3 < uVar6)) ||
        (param_3 - uVar6 < uVar4)))) goto LAB_0009b5dd;
  }
LAB_0009b7ac:
  lVar11 = uVar13 * 0x18;
  pqVar20 = local_a8 + uVar13 * 3;
  do {
    pqVar12 = local_a8;
    if (lVar11 == 0) {
      pqStack_90 = (qword *)&Elf64_Ehdr_00000000.e_ident_abiversion;
      local_98 = (qword *)0x0;
      local_68 = (char *)0x0;
      goto LAB_0009b914;
    }
    pqVar19 = pqVar12 + 3;
    lVar11 = lVar11 + -0x18;
    local_a8 = pqVar19;
  } while (((byte)((*(byte *)((longlong)pqVar12 + 4) & 0xf) - 3) < 0xfe) ||
          (*(short *)((longlong)pqVar12 + 6) == 0));
  local_a8._0_4_ = (undefined4)pqVar12[1];
  local_a8._4_4_ = *(dword *)((longlong)pqVar12 + 0xc);
  dStack_a0 = (dword)pqVar12[2];
  dStack_9c = *(dword *)((longlong)pqVar12 + 0x14);
  local_5c = (undefined4)*pqVar12;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
  pqVar12 = (qword *)(*(code *)PTR___rust_alloc_000c3a90)();
  if (pqVar12 == (qword *)0x0) {
    uVar21 = (*(code *)PTR_handle_error_000c3a98)();
  }
  else {
    *(undefined4 *)pqVar12 = (undefined4)local_a8;
    *(dword *)((longlong)pqVar12 + 4) = local_a8._4_4_;
    *(dword *)(pqVar12 + 1) = dStack_a0;
    *(dword *)((longlong)pqVar12 + 0xc) = dStack_9c;
    *(undefined4 *)(pqVar12 + 2) = local_5c;
    local_98 = (qword *)&Elf64_Ehdr_00000000.e_ident_class;
    local_88 = Elf64_Ehdr_00000000.e_ident_magic_str;
    local_68 = Elf64_Ehdr_00000000.e_ident_magic_str;
    uVar21 = (undefined4)local_a8;
    pqStack_90 = pqVar12;
    while( true ) {
      pqVar16 = pqVar19;
      if (pqVar16 == pqVar20) break;
      pqVar19 = pqVar16 + 3;
      if (0xfd < (byte)((*(byte *)((longlong)pqVar16 + 4) & 0xf) - 3)) {
        if (*(short *)((longlong)pqVar16 + 6) != 0) {
          local_a8._0_4_ = (undefined4)pqVar16[1];
          local_a8._4_4_ = *(dword *)((longlong)pqVar16 + 0xc);
          dStack_a0 = *(dword *)(pqVar16 + 2);
          dStack_9c = *(dword *)((longlong)pqVar16 + 0x14);
          local_5c = (undefined4)*pqVar16;
          if ((qword *)local_68 == local_98) {
            <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
            <alloc[12e961f32105355]::alloc::Global>(&local_98,local_68,1,8,0x18);
            pqVar12 = pqStack_90;
          }
          pqVar16 = pqVar12 + (longlong)local_68 * 3;
          *(undefined4 *)pqVar16 = (undefined4)local_a8;
          *(dword *)((longlong)pqVar16 + 4) = local_a8._4_4_;
          *(dword *)(pqVar16 + 1) = dStack_a0;
          *(dword *)((longlong)pqVar16 + 0xc) = dStack_9c;
          *(undefined4 *)(pqVar12 + (longlong)local_68 * 3 + 2) = local_5c;
          local_68 = local_68 + 1;
          uVar21 = (undefined4)local_a8;
          local_88 = local_68;
        }
      }
    }
    if (local_68 <= Elf64_Ehdr_00000000.e_ident_magic_str) {
LAB_0009b914:
      pqVar19 = pqStack_90;
      pqVar20 = local_98;
      goto LAB_0009b91c;
    }
    pqVar19 = pqStack_90;
    pqVar20 = local_98;
    if (local_68 <= &Elf64_Ehdr_00000000.e_version) {
      lVar11 = 0x18;
      pqVar12 = pqStack_90 + 3;
      pqVar16 = pqStack_90;
      do {
        pqVar15 = pqVar12;
        uVar3 = pqVar16[3];
        if (uVar3 < *pqVar16) {
          uVar10 = pqVar16[4];
          uVar14 = pqVar16[5];
          lVar17 = lVar11;
          do {
            *(undefined8 *)((longlong)pqStack_90 + lVar17 + 0x10) =
                 *(undefined8 *)((longlong)pqStack_90 + lVar17 + -8);
            pbVar2 = (byte *)((longlong)pqStack_90 + lVar17 + -0x18);
            uVar7 = *(undefined8 *)(pbVar2 + 8);
            *(undefined8 *)((longlong)pqStack_90 + lVar17) = *(undefined8 *)pbVar2;
            *(undefined8 *)((byte *)((longlong)pqStack_90 + lVar17) + 8) = uVar7;
            if (lVar17 == 0x18) {
              pqVar12 = pqStack_90;
              goto LAB_0009bc0f;
            }
            lVar1 = lVar17 + -0x18;
            lVar8 = lVar17 + -0x30;
            lVar17 = lVar1;
          } while (uVar3 < *(ulonglong *)((longlong)pqStack_90 + lVar8));
          pqVar12 = (qword *)(lVar1 + (longlong)pqStack_90);
LAB_0009bc0f:
          *pqVar12 = uVar3;
          pqVar12[1] = uVar10;
          pqVar12[2] = uVar14;
        }
        pqVar12 = pqVar15 + 3;
        lVar11 = lVar11 + 0x18;
        pqVar16 = pqVar15;
      } while (pqVar12 != pqStack_90 + (longlong)local_68 * 3);
      goto LAB_0009b91c;
    }
  }
  (*(code *)
    PTR_<std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::elf::ParsedSym,<[std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::elf::ParsedSym]>::sort_unstable_by_key<u64,<std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::elf::Object>::parse::_closure_3_>::_closure_0_>_000c4178
  )(uVar21,local_b0);
LAB_0009b91c:
  *param_1 = (longlong)pqVar20;
  param_1[1] = (longlong)pqVar19;
  param_1[2] = (longlong)local_68;
  param_1[3] = (longlong)param_2;
  param_1[4] = param_3;
  param_1[5] = local_40;
  param_1[6] = local_58;
  param_1[7] = (longlong)local_70;
  param_1[8] = param_3;
  param_1[9] = local_78;
  param_1[10] = local_80;
  param_1[0xb] = (longlong)local_38;
  param_1[0xc] = param_3;
  param_1[0xd] = local_50;
  param_1[0xe] = local_48;
  return;
}


