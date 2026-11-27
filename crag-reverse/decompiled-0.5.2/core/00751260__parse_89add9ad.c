// 00751260 parse

/* <std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::elf::Object>::parse */

void __rustcall
<std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::elf::Object>::parse
          (undefined8 *param_1,int *param_2,ulonglong param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong *puVar15;
  ulonglong *puVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong *puVar19;
  ulonglong *puVar20;
  undefined4 uVar21;
  undefined1 local_b0 [8];
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  ulonglong *local_98;
  ulonglong *puStack_90;
  ulonglong *local_88;
  longlong local_80;
  ulonglong local_78;
  int *local_70;
  ulonglong *local_68;
  undefined4 local_5c;
  ulonglong local_58;
  ulonglong local_50;
  longlong local_48;
  longlong local_40;
  int *local_38;
  
  if (((((param_3 < 0x40) || (*param_2 != 0x464c457f)) || ((char)param_2[1] != '\x02')) ||
      ((1 < (byte)(*(char *)((longlong)param_2 + 5) - 1U) ||
       (*(char *)((longlong)param_2 + 6) != '\x01')))) ||
     (*(char *)((longlong)param_2 + 5) == '\x02')) goto LAB_0075127d;
  uVar3 = *(ulonglong *)(param_2 + 10);
  if (uVar3 != 0) {
    local_58 = (ulonglong)*(ushort *)(param_2 + 0xf);
    if (local_58 == 0) {
      if ((*(short *)((longlong)param_2 + 0x3a) != 0x40) ||
         (uVar10 = param_3 - uVar3, uVar10 < 0x40 || param_3 < uVar3)) goto LAB_0075127d;
      local_58 = *(ulonglong *)((longlong)param_2 + uVar3 + 0x20);
      if (local_58 == 0) goto LAB_00751409;
      if (local_58 >> 0x3a != 0) goto LAB_0075127d;
    }
    else {
      if (*(short *)((longlong)param_2 + 0x3a) != 0x40) goto LAB_0075127d;
      uVar10 = param_3 - uVar3;
    }
    if ((param_3 < uVar3) || (uVar14 = local_58 * 0x40, uVar10 < uVar14)) {
LAB_0075127d:
      *param_1 = 0xffffffffffffffff;
      return;
    }
    local_40 = (longlong)param_2 + uVar3;
    uVar9 = (uint)*(ushort *)((longlong)param_2 + 0x3e);
    if (*(ushort *)((longlong)param_2 + 0x3e) == 0xffff) {
      uVar9 = *(uint *)(local_40 + 0x28);
    }
    if ((uVar9 == 0) || (local_58 <= uVar9)) goto LAB_0075127d;
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
      if (CARRY8(uVar10,local_78)) goto LAB_0075127d;
    }
    uVar18 = 0;
    uVar10 = 0;
    do {
      if (*(int *)((longlong)param_2 + uVar18 + uVar3 + 4) == 2) {
        uVar4 = *(ulonglong *)((longlong)param_2 + uVar18 + 0x20 + uVar3);
        if (uVar4 == 0) {
          local_a8 = (ulonglong *)0x1;
        }
        else {
          uVar13 = *(ulonglong *)((longlong)param_2 + uVar18 + 0x18 + uVar3);
          if ((param_3 < uVar13) || (param_3 - uVar13 < uVar4)) goto LAB_0075127d;
          local_a8 = (ulonglong *)(uVar13 + (longlong)param_2);
        }
        uVar13 = uVar4 / 0x18;
        if (uVar4 != uVar13 * 0x18) goto LAB_0075127d;
        uVar18 = (ulonglong)*(uint *)((longlong)param_2 + uVar18 + 0x28 + uVar3);
        if (uVar18 == 0) {
          local_38 = (int *)0x0;
          local_48 = 0;
          local_50 = 0;
        }
        else {
          if ((local_58 <= uVar18) || (*(int *)((longlong)param_2 + uVar18 * 0x40 + uVar3 + 4) != 3)
             ) goto LAB_0075127d;
          lVar11 = uVar3 + uVar18 * 0x40;
          local_50 = *(ulonglong *)((longlong)param_2 + lVar11 + 0x18);
          uVar18 = *(ulonglong *)((longlong)param_2 + lVar11 + 0x20);
          local_48 = uVar18 + local_50;
          local_38 = param_2;
          if (CARRY8(uVar18,local_50)) goto LAB_0075127d;
        }
        uVar18 = 0;
        goto LAB_007517b0;
      }
      uVar10 = uVar10 + 1;
      uVar18 = uVar18 + 0x40;
    } while (uVar14 != uVar18);
    goto LAB_0075139f;
  }
LAB_00751409:
  local_80 = 0;
  local_78 = 0;
  local_70 = (int *)0x0;
  local_58 = 0;
  local_40 = 1;
LAB_0075143a:
  local_38 = (int *)0x0;
  local_50 = 0;
  local_48 = 0;
  uVar13 = 0;
  local_a8 = (ulonglong *)0x1;
  goto LAB_0075144c;
  while (uVar18 = uVar18 + 0x40, uVar14 != uVar18) {
LAB_007517b0:
    if ((((*(int *)((longlong)param_2 + uVar18 + uVar3 + 4) == 0x12) &&
         (*(uint *)((longlong)param_2 + uVar18 + uVar3 + 0x28) == uVar10)) &&
        (uVar6 = *(ulonglong *)((longlong)param_2 + uVar18 + uVar3 + 0x20), uVar6 != 0)) &&
       ((((uVar6 & 3) != 0 ||
         (uVar5 = *(ulonglong *)((longlong)param_2 + uVar18 + uVar3 + 0x18), param_3 < uVar5)) ||
        (param_3 - uVar5 < uVar6)))) goto LAB_0075127d;
  }
  if (uVar4 < 0x18) {
LAB_0075139f:
    uVar18 = 0;
    uVar10 = 0;
    do {
      if (*(int *)((longlong)param_2 + uVar18 + uVar3 + 4) == 0xb) {
        uVar4 = *(ulonglong *)((longlong)param_2 + uVar18 + 0x20 + uVar3);
        if (uVar4 == 0) {
          local_a8 = (ulonglong *)0x1;
        }
        else {
          uVar13 = *(ulonglong *)((longlong)param_2 + uVar18 + 0x18 + uVar3);
          if ((param_3 < uVar13) || (param_3 - uVar13 < uVar4)) goto LAB_0075127d;
          local_a8 = (ulonglong *)(uVar13 + (longlong)param_2);
        }
        uVar13 = uVar4 / 0x18;
        if (uVar4 != uVar13 * 0x18) goto LAB_0075127d;
        uVar18 = (ulonglong)*(uint *)((longlong)param_2 + uVar18 + 0x28 + uVar3);
        if (uVar18 == 0) {
          local_38 = (int *)0x0;
          local_48 = 0;
          local_50 = 0;
        }
        else {
          if ((local_58 <= uVar18) || (*(int *)(local_40 + 4 + uVar18 * 0x40) != 3))
          goto LAB_0075127d;
          lVar11 = uVar18 * 0x40 + local_40;
          local_50 = *(ulonglong *)(lVar11 + 0x18);
          uVar18 = *(ulonglong *)(lVar11 + 0x20);
          local_48 = uVar18 + local_50;
          local_38 = param_2;
          if (CARRY8(uVar18,local_50)) goto LAB_0075127d;
        }
        uVar18 = 0;
        goto LAB_00751832;
      }
      uVar10 = uVar10 + 1;
      uVar18 = uVar18 + 0x40;
    } while (uVar14 != uVar18);
    goto LAB_0075143a;
  }
  goto LAB_0075144c;
  while (uVar18 = uVar18 + 0x40, uVar14 != uVar18) {
LAB_00751832:
    if ((((*(int *)((longlong)param_2 + uVar18 + uVar3 + 4) == 0x12) &&
         (*(uint *)((longlong)param_2 + uVar18 + uVar3 + 0x28) == uVar10)) &&
        (uVar4 = *(ulonglong *)((longlong)param_2 + uVar18 + uVar3 + 0x20), uVar4 != 0)) &&
       ((((uVar4 & 3) != 0 ||
         (uVar6 = *(ulonglong *)((longlong)param_2 + uVar18 + uVar3 + 0x18), param_3 < uVar6)) ||
        (param_3 - uVar6 < uVar4)))) goto LAB_0075127d;
  }
LAB_0075144c:
  lVar11 = uVar13 * 0x18;
  puVar20 = local_a8 + uVar13 * 3;
  do {
    puVar12 = local_a8;
    if (lVar11 == 0) {
      puStack_90 = (ulonglong *)&DAT_00000008;
      local_98 = (ulonglong *)0x0;
      local_68 = (ulonglong *)0x0;
      goto LAB_007515b4;
    }
    puVar19 = puVar12 + 3;
    lVar11 = lVar11 + -0x18;
    local_a8 = puVar19;
  } while (((byte)((*(byte *)((longlong)puVar12 + 4) & 0xf) - 3) < 0xfe) ||
          (*(short *)((longlong)puVar12 + 6) == 0));
  local_a8._0_4_ = (undefined4)puVar12[1];
  local_a8._4_4_ = *(undefined4 *)((longlong)puVar12 + 0xc);
  uStack_a0 = (undefined4)puVar12[2];
  uStack_9c = *(undefined4 *)((longlong)puVar12 + 0x14);
  local_5c = (undefined4)*puVar12;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar12 = (ulonglong *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar12 == (ulonglong *)0x0) {
    uVar21 = (*(code *)PTR_handle_error_00798ff0)();
  }
  else {
    *(undefined4 *)puVar12 = (undefined4)local_a8;
    *(undefined4 *)((longlong)puVar12 + 4) = local_a8._4_4_;
    *(undefined4 *)(puVar12 + 1) = uStack_a0;
    *(undefined4 *)((longlong)puVar12 + 0xc) = uStack_9c;
    *(undefined4 *)(puVar12 + 2) = local_5c;
    local_98 = (ulonglong *)&DAT_00000004;
    local_88 = (ulonglong *)0x1;
    local_68 = (ulonglong *)0x1;
    uVar21 = (undefined4)local_a8;
    puStack_90 = puVar12;
    while( true ) {
      puVar16 = puVar19;
      if (puVar16 == puVar20) break;
      puVar19 = puVar16 + 3;
      if (0xfd < (byte)((*(byte *)((longlong)puVar16 + 4) & 0xf) - 3)) {
        if (*(short *)((longlong)puVar16 + 6) != 0) {
          local_a8._0_4_ = (undefined4)puVar16[1];
          local_a8._4_4_ = *(undefined4 *)((longlong)puVar16 + 0xc);
          uStack_a0 = (undefined4)puVar16[2];
          uStack_9c = *(undefined4 *)((longlong)puVar16 + 0x14);
          local_5c = (undefined4)*puVar16;
          if (local_68 == local_98) {
            <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
            <alloc[12e961f32105355]::alloc::Global>(&local_98,local_68,1,8,0x18);
            puVar12 = puStack_90;
          }
          puVar16 = puVar12 + (longlong)local_68 * 3;
          *(undefined4 *)puVar16 = (undefined4)local_a8;
          *(undefined4 *)((longlong)puVar16 + 4) = local_a8._4_4_;
          *(undefined4 *)(puVar16 + 1) = uStack_a0;
          *(undefined4 *)((longlong)puVar16 + 0xc) = uStack_9c;
          *(undefined4 *)(puVar12 + (longlong)local_68 * 3 + 2) = local_5c;
          local_68 = (ulonglong *)((longlong)local_68 + 1);
          uVar21 = (undefined4)local_a8;
          local_88 = local_68;
        }
      }
    }
    if (local_68 < (ulonglong *)0x2) {
LAB_007515b4:
      puVar19 = puStack_90;
      puVar20 = local_98;
      goto LAB_007515bc;
    }
    puVar19 = puStack_90;
    puVar20 = local_98;
    if (local_68 < (ulonglong *)0x15) {
      lVar11 = 0x18;
      puVar12 = puStack_90 + 3;
      puVar16 = puStack_90;
      do {
        puVar15 = puVar12;
        uVar3 = puVar16[3];
        if (uVar3 < *puVar16) {
          uVar10 = puVar16[4];
          uVar14 = puVar16[5];
          lVar17 = lVar11;
          do {
            *(undefined8 *)((longlong)puStack_90 + lVar17 + 0x10) =
                 *(undefined8 *)((longlong)puStack_90 + lVar17 + -8);
            puVar2 = (undefined8 *)((longlong)puStack_90 + lVar17 + -0x18);
            uVar7 = puVar2[1];
            *(undefined8 *)((longlong)puStack_90 + lVar17) = *puVar2;
            ((undefined8 *)((longlong)puStack_90 + lVar17))[1] = uVar7;
            if (lVar17 == 0x18) {
              puVar12 = puStack_90;
              goto LAB_007518af;
            }
            lVar1 = lVar17 + -0x18;
            lVar8 = lVar17 + -0x30;
            lVar17 = lVar1;
          } while (uVar3 < *(ulonglong *)((longlong)puStack_90 + lVar8));
          puVar12 = (ulonglong *)(lVar1 + (longlong)puStack_90);
LAB_007518af:
          *puVar12 = uVar3;
          puVar12[1] = uVar10;
          puVar12[2] = uVar14;
        }
        puVar12 = puVar15 + 3;
        lVar11 = lVar11 + 0x18;
        puVar16 = puVar15;
      } while (puVar12 != puStack_90 + (longlong)local_68 * 3);
      goto LAB_007515bc;
    }
  }
  (*(code *)
    PTR_<std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::elf::ParsedSym,<[std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::elf::ParsedSym]>::sort_unstable_by_key<u64,<std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::elf::Object>::parse::_closure_3_>::_closure_0_>_0079aca0
  )(uVar21,local_b0);
LAB_007515bc:
  *param_1 = puVar20;
  param_1[1] = puVar19;
  param_1[2] = local_68;
  param_1[3] = param_2;
  param_1[4] = param_3;
  param_1[5] = local_40;
  param_1[6] = local_58;
  param_1[7] = local_70;
  param_1[8] = param_3;
  param_1[9] = local_78;
  param_1[10] = local_80;
  param_1[0xb] = local_38;
  param_1[0xc] = param_3;
  param_1[0xd] = local_50;
  param_1[0xe] = local_48;
  return;
}


