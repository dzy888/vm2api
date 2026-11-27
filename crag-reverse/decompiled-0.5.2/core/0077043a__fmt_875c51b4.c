// 0077043a fmt

/* WARNING: Switch with 1 destination removed at 0x0077054a */
/* WARNING: Switch with 1 destination removed at 0x00770945 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
  undefined *puVar7;
  char cVar8;
  byte bVar9;
  char cVar10;
  byte *pbVar11;
  ulonglong uVar12;
  byte *pbVar13;
  int *piVar14;
  undefined8 uVar15;
  undefined2 *puVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  undefined1 *puVar20;
  int *piVar21;
  longlong lVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  uint *puVar25;
  undefined1 *puVar26;
  ulonglong uVar27;
  char *pcVar28;
  bool bVar29;
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
  
  pcStack_280 = (code *)0x770468;
  (*(code *)PTR_memset_00799090)(param_4,0x200);
  puVar7 = PTR_fmt_0079a6b8;
  local_60 = param_1[3];
  if (local_60 != 0) {
    local_58 = param_2;
    local_50 = (char *)param_1[2];
    cVar10 = *local_50;
    pbVar13 = (byte *)*param_1;
    local_78 = param_1[1];
    local_70 = pbVar13;
    if (local_78 == 0) {
      piVar21 = (int *)0x0;
    }
    else {
      pbVar11 = pbVar13 + local_78;
      piVar21 = (int *)0x0;
      do {
        bVar9 = *pbVar13;
        uVar19 = (uint)bVar9;
        if ((char)bVar9 < '\0') {
          uVar17 = bVar9 & 0x1f;
          pbVar1 = pbVar13 + 1;
          if (bVar9 < 0xe0) {
            pbVar13 = pbVar13 + 2;
            uVar19 = uVar17 << 6 | *pbVar1 & 0x3f;
          }
          else {
            uVar19 = pbVar13[2] & 0x3f | (*pbVar1 & 0x3f) << 6;
            if (bVar9 < 0xf0) {
              pbVar13 = pbVar13 + 3;
              uVar19 = uVar19 | uVar17 << 0xc;
            }
            else {
              pbVar1 = pbVar13 + 3;
              pbVar13 = pbVar13 + 4;
              uVar19 = *pbVar1 & 0x3f | uVar19 << 6 | (bVar9 & 7) << 0x12;
            }
          }
        }
        else {
          pbVar13 = pbVar13 + 1;
        }
        if (piVar21 == (int *)&DAT_00000080) goto LAB_00770742;
        local_278[(longlong)piVar21] = uVar19;
        piVar21 = (int *)((longlong)piVar21 + 1);
      } while (pbVar13 != pbVar11);
    }
    local_68 = local_50 + local_60;
    local_40 = (longlong)piVar21 * 4 + 4;
    local_48 = 700;
    uVar24 = 0x48;
    puVar26 = &DAT_00000080;
    puVar20 = (undefined1 *)0x0;
    pcVar28 = local_50;
    do {
      pcVar28 = pcVar28 + 1;
      uVar18 = 1;
      bVar29 = false;
      uVar27 = 0x24;
      pbVar13 = (byte *)0x0;
      while( true ) {
        lVar22 = 0;
        if (uVar24 <= uVar27) {
          lVar22 = uVar27 - uVar24;
        }
        uVar23 = lVar22 + (ulonglong)(lVar22 == 0);
        if (0x19 < uVar23) {
          uVar23 = 0x1a;
        }
        if (bVar29) {
          if (pcVar28 == local_68) goto LAB_00770742;
          cVar8 = *pcVar28;
          pcVar28 = pcVar28 + 1;
        }
        else {
          cVar8 = cVar10;
        }
        bVar9 = cVar8 + 0x9f;
        if (0x19 < bVar9) {
          if (9 < (byte)(cVar8 - 0x30U)) goto LAB_00770742;
          bVar9 = cVar8 - 0x16;
        }
        auVar3._8_8_ = 0;
        auVar3._0_8_ = CONCAT71(0,bVar9);
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uVar18;
        uVar12 = SUB168(auVar3 * auVar5,0);
        if ((SUB168(auVar3 * auVar5,8) != 0) ||
           (bVar29 = CARRY8((ulonglong)pbVar13,uVar12), pbVar13 = pbVar13 + uVar12, bVar29))
        goto LAB_00770742;
        if (CONCAT71(0,bVar9) < uVar23) break;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar18;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = 0x24 - uVar23;
        uVar18 = SUB168(auVar4 * auVar6,0);
        if (SUB168(auVar4 * auVar6,8) != 0) goto LAB_00770742;
        uVar27 = uVar27 + 0x24;
        bVar29 = true;
      }
      if (CARRY8((ulonglong)puVar20,(ulonglong)pbVar13)) goto LAB_00770742;
      piVar2 = (int *)((longlong)piVar21 + 1);
      uVar24 = (ulonglong)(pbVar13 + (longlong)puVar20) / (ulonglong)piVar2;
      piVar14 = (int *)((ulonglong)(pbVar13 + (longlong)puVar20) % (ulonglong)piVar2);
      bVar29 = CARRY8((ulonglong)puVar26,uVar24);
      puVar26 = puVar26 + uVar24;
      if ((((bVar29) || ((ulonglong)puVar26 >> 0x20 != 0)) ||
          (((uint)puVar26 ^ 0xd800) - 0x110000 < 0xffef0800)) || ((int *)0x7f < piVar21))
      goto LAB_00770742;
      if (piVar14 < piVar21) {
        do {
          local_278[(longlong)piVar21] = local_278[(longlong)((longlong)piVar21 + -1)];
          piVar21 = (int *)((longlong)piVar21 + -1);
        } while (piVar14 < piVar21);
      }
      else if ((int *)0x7f < piVar14) {
        pcStack_280 = <rustc_demangle[a2bba03bad1b7f1a]::Demangle_as_core[c0acaeba6ab4c2e0]::fmt::Display>
                      ::fmt;
        (*(code *)PTR_panic_bounds_check_00799520)
                  (pbVar13,&PTR_s__rust_deps_rustc_demangle_0_1_27_00797780);
        uStack_290 = 0x1a;
        uStack_288 = uVar27;
        if (*piVar14 == 1) {
          piStack_2a0 = piVar14 + 2;
          uStack_2b8 = 0;
          uStack_2b0 = 1000000;
          uStack_2a8 = 0x80;
          ppiStack_2c8 = &piStack_2a0;
          if ((_DAT_00000090 >> 0x17 & 1) == 0) {
            puVar16 = &anon_e1419182c2f95519b50f33ebe2147d9d_32_llvm_4643690396931717954;
          }
          else {
            puVar16 = (undefined2 *)&DAT_001c1160;
          }
          puStack_2c0 = PTR_fmt_0079b2e0;
          pcStack_280 = (code *)(local_278 + 0x9c);
          cVar10 = (*(code *)PTR_write_007994b0)(&ppiStack_2c8,puVar16);
          if ((int)uStack_2b8 == 1) {
            if (cVar10 == '\0') {
              (*(code *)PTR_unwrap_failed_00799028)
                        (&DAT_00797868,&uStack_291,&PTR_s__rust_deps_rustc_demangle_0_1_27_00797bc0)
              ;
              uVar15 = *(undefined8 *)
                        (&DAT_001c12e0 +
                        (ulonglong)*(byte *)s__fmt__Error__from__SizeLimitedFm_001c117a._0_8_ * 8);
              param_2 = 0x37;
              goto 
              <core[c0acaeba6ab4c2e0]::fmt::Formatter_as_core[c0acaeba6ab4c2e0]::fmt::Write>_write_str
              ;
            }
            cVar10 = (*(code *)PTR_write_str_00799488)();
          }
          if (cVar10 != '\0') {
            return '\x01';
          }
        }
        else {
          pcStack_280 = (code *)(local_278 + 0x9c);
          cVar10 = (*(code *)PTR_write_str_00799488)();
          if (cVar10 != '\0') {
            return '\x01';
          }
        }
        cVar10 = (*(code *)PTR_write_str_00799488)();
        return cVar10;
      }
      local_278[(longlong)piVar14] = (uint)puVar26;
      if (pcVar28 == local_68) {
        puVar25 = local_278;
        do {
          local_34 = *puVar25;
          pcStack_280 = (code *)0x7707f5;
          cVar10 = (*(code *)puVar7)();
          if (cVar10 != '\0') {
            return cVar10;
          }
          puVar25 = puVar25 + 1;
          local_40 = local_40 + -4;
        } while (local_40 != 0);
        return '\0';
      }
      uVar24 = ((ulonglong)pbVar13 / local_48) / (ulonglong)piVar2 + (ulonglong)pbVar13 / local_48;
      if (uVar24 < 0x1c8) {
        lVar22 = 0;
      }
      else {
        lVar22 = 0;
        uVar18 = uVar24;
        do {
          uVar24 = uVar18 / 0x23;
          lVar22 = lVar22 + 0x24;
          bVar29 = 0x3e57 < uVar18;
          uVar18 = uVar24;
        } while (bVar29);
      }
      puVar20 = (undefined1 *)((longlong)piVar14 + 1);
      cVar10 = *pcVar28;
      uVar24 = (ulonglong)(ushort)(((int)uVar24 * 0x24 & 0xffffU) / ((int)uVar24 + 0x26U & 0xffff))
               + lVar22;
      local_40 = local_40 + 4;
      local_48 = 2;
      piVar21 = piVar2;
    } while( true );
  }
  uVar15 = param_1[1];
<core[c0acaeba6ab4c2e0]::fmt::Formatter_as_core[c0acaeba6ab4c2e0]::fmt::Write>_write_str:
  UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_2 + 8) + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00778dbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  cVar10 = (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE,uVar15);
  return cVar10;
LAB_00770742:
  param_2 = local_58;
  pcStack_280 = (code *)0x77075b;
  cVar10 = (*(code *)PTR_write_str_00799488)(pbVar13,9);
  if (cVar10 != '\0') {
    return '\x01';
  }
  if (local_78 != 0) {
    pcStack_280 = (code *)0x770778;
    cVar10 = (*(code *)PTR_write_str_00799488)();
    if (cVar10 != '\0') {
      return '\x01';
    }
    pcStack_280 = (code *)0x770791;
    cVar10 = (*(code *)PTR_write_str_00799488)();
    if (cVar10 != '\0') {
      return '\x01';
    }
  }
  pcStack_280 = (code *)0x7707a6;
  cVar10 = (*(code *)PTR_write_str_00799488)();
  if (cVar10 != '\0') {
    return '\x01';
  }
  uVar15 = 1;
  goto <core[c0acaeba6ab4c2e0]::fmt::Formatter_as_core[c0acaeba6ab4c2e0]::fmt::Write>_write_str;
}


