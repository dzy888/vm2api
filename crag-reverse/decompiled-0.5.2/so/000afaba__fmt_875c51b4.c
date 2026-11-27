// 000afaba fmt

/* WARNING: Switch with 1 destination removed at 0x000afbca */
/* WARNING: Switch with 1 destination removed at 0x000affc5 */
/* <rustc_demangle[a2bba03bad1b7f1a]::v0::Ident as core[c0acaeba6ab4c2e0]::fmt::Display>::fmt */

char __rustcall
<rustc_demangle[a2bba03bad1b7f1a]::v0::Ident_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt
          (undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  byte *pbVar1;
  int *piVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  char cVar7;
  byte bVar8;
  char cVar9;
  byte *pbVar10;
  ulonglong uVar11;
  byte *pbVar12;
  int *piVar13;
  undefined8 uVar14;
  undefined *puVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  int *piVar20;
  longlong lVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  uint *puVar24;
  qword *pqVar25;
  ulonglong uVar26;
  char *pcVar27;
  bool bVar28;
  int **ppiStack_2c8;
  undefined *puStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  int *piStack_2a0;
  undefined1 uStack_291;
  undefined8 uStack_290;
  ulonglong uStack_288;
  code *pcStack_280;
  uint local_278 [128];
  longlong local_78;
  byte *local_70;
  char *local_68;
  longlong local_60;
  longlong local_58;
  char *local_50;
  ulonglong local_48;
  longlong local_40;
  uint local_34;
  
  pcStack_280 = (code *)0xafae8;
  (*(code *)PTR_memset_000c3cd8)(param_4,0x200);
  puVar15 = PTR_fmt_000c4030;
  local_60 = param_1[3];
  if (local_60 != 0) {
    local_58 = param_2;
    local_50 = (char *)param_1[2];
    cVar9 = *local_50;
    pbVar12 = (byte *)*param_1;
    local_78 = param_1[1];
    local_70 = pbVar12;
    if (local_78 == 0) {
      piVar20 = (int *)0x0;
    }
    else {
      pbVar10 = pbVar12 + local_78;
      piVar20 = (int *)0x0;
      do {
        bVar8 = *pbVar12;
        uVar18 = (uint)bVar8;
        if ((char)bVar8 < '\0') {
          uVar16 = bVar8 & 0x1f;
          pbVar1 = pbVar12 + 1;
          if (bVar8 < 0xe0) {
            pbVar12 = pbVar12 + 2;
            uVar18 = uVar16 << 6 | *pbVar1 & 0x3f;
          }
          else {
            uVar18 = pbVar12[2] & 0x3f | (*pbVar1 & 0x3f) << 6;
            if (bVar8 < 0xf0) {
              pbVar12 = pbVar12 + 3;
              uVar18 = uVar18 | uVar16 << 0xc;
            }
            else {
              pbVar1 = pbVar12 + 3;
              pbVar12 = pbVar12 + 4;
              uVar18 = *pbVar1 & 0x3f | uVar18 << 6 | (bVar8 & 7) << 0x12;
            }
          }
        }
        else {
          pbVar12 = pbVar12 + 1;
        }
        if ((qword *)piVar20 == &Elf64_Phdr_ARRAY_00000040[1].p_offset) goto LAB_000afdc2;
        local_278[(longlong)piVar20] = uVar18;
        piVar20 = (int *)((longlong)piVar20 + 1);
      } while (pbVar12 != pbVar10);
    }
    local_68 = local_50 + local_60;
    local_40 = (longlong)piVar20 * 4 + 4;
    local_48 = 700;
    uVar23 = 0x48;
    pqVar25 = &Elf64_Phdr_ARRAY_00000040[1].p_offset;
    uVar19 = 0;
    pcVar27 = local_50;
    do {
      pcVar27 = pcVar27 + 1;
      uVar17 = 1;
      bVar28 = false;
      uVar26 = 0x24;
      pbVar12 = (byte *)0x0;
      while( true ) {
        lVar21 = 0;
        if (uVar23 <= uVar26) {
          lVar21 = uVar26 - uVar23;
        }
        uVar22 = lVar21 + (ulonglong)(lVar21 == 0);
        if (0x19 < uVar22) {
          uVar22 = 0x1a;
        }
        if (bVar28) {
          if (pcVar27 == local_68) goto LAB_000afdc2;
          cVar7 = *pcVar27;
          pcVar27 = pcVar27 + 1;
        }
        else {
          cVar7 = cVar9;
        }
        bVar8 = cVar7 + 0x9f;
        if (0x19 < bVar8) {
          if (9 < (byte)(cVar7 - 0x30U)) goto LAB_000afdc2;
          bVar8 = cVar7 - 0x16;
        }
        auVar3._8_8_ = 0;
        auVar3._0_8_ = CONCAT71(0,bVar8);
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uVar17;
        uVar11 = SUB168(auVar3 * auVar5,0);
        if ((SUB168(auVar3 * auVar5,8) != 0) ||
           (bVar28 = CARRY8((ulonglong)pbVar12,uVar11), pbVar12 = pbVar12 + uVar11, bVar28))
        goto LAB_000afdc2;
        if (CONCAT71(0,bVar8) < uVar22) break;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar17;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = 0x24 - uVar22;
        uVar17 = SUB168(auVar4 * auVar6,0);
        if (SUB168(auVar4 * auVar6,8) != 0) goto LAB_000afdc2;
        uVar26 = uVar26 + 0x24;
        bVar28 = true;
      }
      if (CARRY8(uVar19,(ulonglong)pbVar12)) goto LAB_000afdc2;
      piVar2 = (int *)((longlong)piVar20 + 1);
      uVar23 = (ulonglong)(pbVar12 + uVar19) / (ulonglong)piVar2;
      piVar13 = (int *)((ulonglong)(pbVar12 + uVar19) % (ulonglong)piVar2);
      bVar28 = CARRY8((ulonglong)pqVar25,uVar23);
      pqVar25 = (qword *)((longlong)pqVar25 + uVar23);
      if ((((bVar28) || ((ulonglong)pqVar25 >> 0x20 != 0)) ||
          (((uint)pqVar25 ^ 0xd800) - 0x110000 < 0xffef0800)) ||
         ((int *)((longlong)&Elf64_Phdr_ARRAY_00000040[1].p_flags + 3) < piVar20))
      goto LAB_000afdc2;
      if (piVar13 < piVar20) {
        do {
          local_278[(longlong)piVar20] = local_278[(longlong)piVar20 + -1];
          piVar20 = (int *)((longlong)piVar20 + -1);
        } while (piVar13 < piVar20);
      }
      else if ((int *)((longlong)&Elf64_Phdr_ARRAY_00000040[1].p_flags + 3) < piVar13) {
        pcStack_280 = <rustc_demangle[a2bba03bad1b7f1a]::Demangle_as_core[c0acaeba6ab4c2e0]::fmt::Display>
                      ::fmt;
        (*(code *)PTR_panic_bounds_check_000c3dd8)
                  (pbVar12,&PTR_s__rust_deps_rustc_demangle_0_1_27_000c24d0);
        uStack_290 = 0x1a;
        uStack_288 = uVar26;
        if (*piVar13 == 1) {
          piStack_2a0 = piVar13 + 2;
          uStack_2b8 = 0;
          uStack_2b0 = 1000000;
          uStack_2a8 = 0x80;
          ppiStack_2c8 = &piStack_2a0;
          if (((uint)Elf64_Phdr_ARRAY_00000040[1].p_paddr >> 0x17 & 1) == 0) {
            puVar15 = &DAT_0000a44b;
          }
          else {
            puVar15 = &DAT_00016b64;
          }
          puStack_2c0 = PTR_fmt_000c46e8;
          pcStack_280 = (code *)(local_278 + 0x9c);
          cVar9 = (*(code *)PTR_write_000c3f70)(&ppiStack_2c8,puVar15);
          if ((int)uStack_2b8 == 1) {
            if (cVar9 == '\0') {
              (*(code *)PTR_unwrap_failed_000c3c78)
                        (&DAT_000c25b8,&uStack_291,&PTR_s__rust_deps_rustc_demangle_0_1_27_000c2910)
              ;
              uVar14 = *(undefined8 *)
                        (&DAT_00016ce0 +
                        (ulonglong)*(byte *)s__fmt__Error__from__SizeLimitedFm_00016b7e._0_8_ * 8);
              param_2 = 0x37;
              goto 
              <core[c0acaeba6ab4c2e0]::fmt::Formatter_as_core[c0acaeba6ab4c2e0]::fmt::Write>_write_str
              ;
            }
            cVar9 = (*(code *)PTR_write_str_000c3d28)();
          }
          if (cVar9 != '\0') {
            return '\x01';
          }
        }
        else {
          pcStack_280 = (code *)(local_278 + 0x9c);
          cVar9 = (*(code *)PTR_write_str_000c3d28)();
          if (cVar9 != '\0') {
            return '\x01';
          }
        }
        cVar9 = (*(code *)PTR_write_str_000c3d28)();
        return cVar9;
      }
      local_278[(longlong)piVar13] = (uint)pqVar25;
      if (pcVar27 == local_68) {
        puVar24 = local_278;
        do {
          local_34 = *puVar24;
          pcStack_280 = (code *)0xafe75;
          cVar9 = (*(code *)puVar15)();
          if (cVar9 != '\0') {
            return cVar9;
          }
          puVar24 = puVar24 + 1;
          local_40 = local_40 + -4;
        } while (local_40 != 0);
        return '\0';
      }
      uVar23 = ((ulonglong)pbVar12 / local_48) / (ulonglong)piVar2 + (ulonglong)pbVar12 / local_48;
      if (uVar23 < 0x1c8) {
        lVar21 = 0;
      }
      else {
        lVar21 = 0;
        uVar19 = uVar23;
        do {
          uVar23 = uVar19 / 0x23;
          lVar21 = lVar21 + 0x24;
          bVar28 = 0x3e57 < uVar19;
          uVar19 = uVar23;
        } while (bVar28);
      }
      uVar19 = (longlong)piVar13 + 1;
      cVar9 = *pcVar27;
      uVar23 = (ulonglong)(ushort)(((int)uVar23 * 0x24 & 0xffffU) / ((int)uVar23 + 0x26U & 0xffff))
               + lVar21;
      local_40 = local_40 + 4;
      local_48 = 2;
      piVar20 = piVar2;
    } while( true );
  }
  uVar14 = param_1[1];
<core[c0acaeba6ab4c2e0]::fmt::Formatter_as_core[c0acaeba6ab4c2e0]::fmt::Write>_write_str:
  UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_2 + 8) + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000b6ade. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  cVar9 = (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE,uVar14);
  return cVar9;
LAB_000afdc2:
  param_2 = local_58;
  pcStack_280 = (code *)0xafddb;
  cVar9 = (*(code *)PTR_write_str_000c3d28)(pbVar12,9);
  if (cVar9 != '\0') {
    return '\x01';
  }
  if (local_78 != 0) {
    pcStack_280 = (code *)0xafdf8;
    cVar9 = (*(code *)PTR_write_str_000c3d28)();
    if (cVar9 != '\0') {
      return '\x01';
    }
    pcStack_280 = (code *)0xafe11;
    cVar9 = (*(code *)PTR_write_str_000c3d28)();
    if (cVar9 != '\0') {
      return '\x01';
    }
  }
  pcStack_280 = (code *)0xafe26;
  cVar9 = (*(code *)PTR_write_str_000c3d28)();
  if (cVar9 != '\0') {
    return '\x01';
  }
  uVar14 = 1;
  goto <core[c0acaeba6ab4c2e0]::fmt::Formatter_as_core[c0acaeba6ab4c2e0]::fmt::Write>_write_str;
}


