// 006e8560 poll

/* <tokio[d7d91d38da47d894]::runtime::time::wheel::Wheel>::poll */

longlong * __rustcall
<tokio[d7d91d38da47d894]::runtime::time::wheel::Wheel>::poll(longlong *param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  code *pcVar5;
  byte bVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  ulonglong *puVar14;
  ulonglong *puVar15;
  ulonglong *puVar16;
  bool bVar17;
  undefined4 uVar18;
  ulonglong local_78;
  ulonglong *local_70;
  code *local_68;
  undefined1 *local_60;
  code *local_58;
  int local_50 [2];
  ulonglong local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  plVar11 = (longlong *)param_1[3];
  if (plVar11 == (longlong *)0x0) {
    puVar1 = (ulonglong *)(param_1 + 1);
    if (param_2 == 0xffffffffffffffff) {
      do {
        uVar18 = next_expiration(local_50,param_1);
        if ((char)local_50[0] == '\0') goto LAB_006e88d2;
        if (5 < local_48) goto LAB_006e898f;
        lVar10 = *param_1;
        bVar6 = (byte)local_40 & 0x3f;
        puVar3 = (ulonglong *)(lVar10 + 0x408 + local_48 * 0x410);
        *puVar3 = *puVar3 & (-2L << bVar6 | 0xfffffffffffffffeU >> 0x40 - bVar6);
        uVar18 = 0;
        if (0x3f < local_40) goto LAB_006e89a1;
        lVar10 = lVar10 + local_48 * 0x410;
        puVar3 = *(ulonglong **)(lVar10 + 8 + local_40 * 0x10);
        puVar2 = (undefined8 *)(lVar10 + local_40 * 0x10);
        *puVar2 = 0;
        puVar2[1] = 0;
        if (puVar3 != (ulonglong *)0x0) {
          puVar12 = (ulonglong *)param_1[3];
          puVar15 = (ulonglong *)param_1[2];
          do {
            puVar14 = puVar3;
            puVar3 = (ulonglong *)*puVar14;
            if (puVar3 != (ulonglong *)0x0) {
              puVar3[1] = 0;
            }
            *puVar14 = 0;
            puVar14[1] = 0;
            uVar9 = puVar14[3];
            do {
              if (0xfffffffffffffffd < uVar9) goto LAB_006e88b9;
              LOCK();
              uVar13 = puVar14[3];
              bVar17 = uVar9 == uVar13;
              if (bVar17) {
                puVar14[3] = 0xfffffffffffffffe;
              }
              else {
                uVar9 = uVar13;
              }
              UNLOCK();
            } while (!bVar17);
            puVar14[2] = 0xffffffffffffffff;
            local_70 = puVar14;
            if (puVar15 == puVar14) goto LAB_006e891f;
            puVar14[1] = (ulonglong)puVar15;
            *puVar14 = 0;
            if (puVar15 != (ulonglong *)0x0) {
              *puVar15 = (ulonglong)puVar14;
            }
            param_1[2] = (longlong)puVar14;
            if (puVar12 == (ulonglong *)0x0) {
              param_1[3] = (longlong)puVar14;
              puVar12 = puVar14;
            }
            puVar15 = puVar14;
          } while (puVar3 != (ulonglong *)0x0);
        }
        plVar11 = (longlong *)param_1[3];
      } while (plVar11 == (longlong *)0x0);
    }
    else {
      do {
        uVar18 = next_expiration(local_50,param_1);
        if ((local_50[0] != 1) || (param_2 < local_38)) goto LAB_006e88d2;
        if (5 < local_48) goto LAB_006e898f;
        lVar10 = *param_1;
        bVar6 = (byte)local_40 & 0x3f;
        puVar3 = (ulonglong *)(lVar10 + 0x408 + local_48 * 0x410);
        *puVar3 = *puVar3 & (-2L << bVar6 | 0xfffffffffffffffeU >> 0x40 - bVar6);
        uVar18 = 0;
        if (0x3f < local_40) goto LAB_006e89a1;
        lVar8 = local_48 * 0x410 + lVar10;
        puVar12 = (ulonglong *)(local_40 * 0x10);
        puVar3 = *(ulonglong **)(lVar8 + 8 + (longlong)puVar12);
        puVar2 = (undefined8 *)(lVar8 + (longlong)puVar12);
        *puVar2 = 0;
        puVar2[1] = 0;
        if (puVar3 != (ulonglong *)0x0) {
          puVar15 = (ulonglong *)param_1[2];
          puVar14 = (ulonglong *)param_1[3];
LAB_006e866d:
          puVar16 = puVar3;
          puVar3 = (ulonglong *)*puVar16;
          if (puVar3 != (ulonglong *)0x0) {
            puVar3[1] = 0;
          }
          *puVar16 = 0;
          puVar16[1] = 0;
          uVar9 = puVar16[3];
LAB_006e8690:
          if (uVar9 < 0xfffffffffffffffe) {
            if (uVar9 <= local_38) goto code_r0x006e869f;
            puVar16[2] = uVar9;
            uVar13 = 5;
            if ((uVar9 ^ local_38) >> 0x24 == 0) {
              uVar9 = uVar9 ^ local_38 | 0x3f;
              lVar8 = 0x3f;
              if (uVar9 != 0) {
                for (; uVar9 >> lVar8 == 0; lVar8 = lVar8 + -1) {
                }
              }
              uVar13 = (ulonglong)((uint)(byte)((byte)lVar8 ^ 1) * 0x2b >> 8);
            }
            lVar8 = lVar10 + uVar13 * 0x410;
            uVar7 = (uint)(puVar16[2] >>
                          ((char)*(undefined4 *)(lVar10 + 0x400 + uVar13 * 0x410) * '\x06' & 0x3fU))
                    & 0x3f;
            puVar12 = (ulonglong *)(ulonglong)uVar7;
            puVar2 = (undefined8 *)((ulonglong)(uVar7 << 4) + lVar8);
            puVar4 = *(ulonglong **)((ulonglong)(uVar7 << 4) + lVar8);
            local_70 = puVar16;
            if (puVar4 != puVar16) {
              puVar16[1] = (ulonglong)puVar4;
              *puVar16 = 0;
              if (puVar4 != (ulonglong *)0x0) {
                *puVar4 = (ulonglong)puVar16;
              }
              *puVar2 = puVar16;
              if (puVar2[1] == 0) {
                puVar2[1] = puVar16;
              }
              *(ulonglong *)(lVar8 + 0x408) = *(ulonglong *)(lVar8 + 0x408) | 1L << (sbyte)uVar7;
              goto joined_r0x006e86e6;
            }
            goto LAB_006e893f;
          }
          goto LAB_006e88b9;
        }
LAB_006e87a0:
        local_78 = local_38;
        if (local_38 < *puVar1) goto LAB_006e8958;
        if (*puVar1 < local_38) {
          *puVar1 = local_38;
        }
        plVar11 = (longlong *)param_1[3];
      } while (plVar11 == (longlong *)0x0);
    }
  }
  lVar10 = *plVar11;
  param_1[3] = lVar10;
joined_r0x006e88f8:
  if (lVar10 == 0) {
    param_1[2] = 0;
  }
  else {
    *(undefined8 *)(lVar10 + 8) = 0;
  }
  *plVar11 = 0;
  plVar11[1] = 0;
  return plVar11;
code_r0x006e869f:
  LOCK();
  uVar13 = puVar16[3];
  bVar17 = uVar9 == uVar13;
  if (bVar17) {
    puVar16[3] = 0xfffffffffffffffe;
  }
  else {
    uVar9 = uVar13;
  }
  UNLOCK();
  if (bVar17) goto code_r0x006e86a7;
  goto LAB_006e8690;
code_r0x006e86a7:
  puVar16[2] = 0xffffffffffffffff;
  local_70 = puVar16;
  if (puVar15 == puVar16) goto LAB_006e891f;
  puVar16[1] = (ulonglong)puVar15;
  *puVar16 = 0;
  if (puVar15 != (ulonglong *)0x0) {
    *puVar15 = (ulonglong)puVar16;
  }
  param_1[2] = (longlong)puVar16;
  puVar15 = puVar16;
  if (puVar14 == (ulonglong *)0x0) {
    param_1[3] = (longlong)puVar16;
    puVar14 = puVar16;
  }
joined_r0x006e86e6:
  local_70 = puVar16;
  if (puVar3 == (ulonglong *)0x0) goto LAB_006e87a0;
  goto LAB_006e866d;
LAB_006e88b9:
  (*(code *)PTR_panic_fmt_007991a8)
            (puVar12,&anon_880d723ff0f66ce4ced63274bf095def_27_llvm_12887403613343987975);
LAB_006e88d2:
  local_78 = param_2;
  if (param_2 < *puVar1) goto LAB_006e8958;
  if (*puVar1 < param_2) {
    *puVar1 = param_2;
  }
  plVar11 = (longlong *)param_1[3];
  if (plVar11 == (longlong *)0x0) {
    return (longlong *)0x0;
  }
  lVar10 = *plVar11;
  param_1[3] = lVar10;
  goto joined_r0x006e88f8;
LAB_006e891f:
  (*(code *)
    PTR_<core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::ptr::non_null::NonNull<tokio[d7d91d38da47d894]::runtime::time::entry::TimerShared>>,core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::ptr::non_null::NonNull<tokio[d7d91d38da47d894]::runtime::time::entry::TimerShared>>>_0079a840
  )(0,&local_70);
LAB_006e893f:
  (*(code *)
    PTR_<core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::ptr::non_null::NonNull<tokio[d7d91d38da47d894]::runtime::time::entry::TimerShared>>,core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::ptr::non_null::NonNull<tokio[d7d91d38da47d894]::runtime::time::entry::TimerShared>>>_0079a840
  )(0,&local_70);
LAB_006e8958:
  local_68 = <u64_as_core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt;
  local_58 = <u64_as_core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt;
  local_70 = puVar1;
  local_60 = (undefined1 *)&local_78;
  uVar18 = (*(code *)PTR_panic_fmt_007991a8)
                     (&local_78,
                      &
                      PTR_anon_1c7207ea9655bfcf55d918eab6d9918c_29_llvm_17559541839288726608_00793ec8
                     );
LAB_006e898f:
  uVar18 = (*(code *)PTR_panic_bounds_check_00799520)
                     (uVar18,&
                             PTR_anon_1c7207ea9655bfcf55d918eab6d9918c_29_llvm_17559541839288726608_00793ef8
                     );
LAB_006e89a1:
  (*(code *)PTR_panic_bounds_check_00799520)
            (uVar18,&PTR_anon_3e483e6b3ccbdca1751358c89510dd96_6_llvm_15764310632135838254_00793f10)
  ;
  pcVar5 = (code *)swi(3);
  plVar11 = (longlong *)(*pcVar5)();
  return plVar11;
}


