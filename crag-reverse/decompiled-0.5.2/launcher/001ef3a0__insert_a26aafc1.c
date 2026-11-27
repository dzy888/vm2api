// 001ef3a0 insert

/* <alloc[12e961f32105355]::collections::btree::map::BTreeMap<std[6c98fd8553dbae28]::ffi::os_str::OsString,
   core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::ffi::os_str::OsString>>>::insert */

void __rustcall
<alloc[12e961f32105355]::collections::btree::map::BTreeMap<std[6c98fd8553dbae28]::ffi::os_str::OsString,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::ffi::os_str::OsString>>>
::insert(undefined8 *param_1,undefined8 *param_2,longlong *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  ushort uVar3;
  ushort uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined *puVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  short sVar21;
  undefined8 *puVar22;
  ulonglong uVar23;
  longlong lVar24;
  longlong lVar25;
  ulonglong uVar26;
  bool bVar27;
  undefined4 uVar28;
  longlong local_d8;
  undefined8 local_d0;
  undefined8 local_a8;
  longlong local_88;
  undefined8 local_80;
  undefined8 *local_50;
  ulonglong local_40;
  
  local_50 = (undefined8 *)*param_2;
  if (local_50 != (undefined8 *)0x0) {
    local_88 = param_2[1];
    puVar13 = (undefined8 *)param_3[1];
    uVar23 = param_3[2];
    do {
      puVar15 = local_50 + 1;
      uVar3 = *(ushort *)((longlong)local_50 + 0x21a);
      lVar25 = (ulonglong)((uint)uVar3 * 8) * 3;
      puVar22 = (undefined8 *)0xffffffffffffffff;
      puVar14 = puVar15;
      do {
        if (lVar25 == 0) {
          puVar22 = (undefined8 *)(ulonglong)uVar3;
          goto LAB_001ef477;
        }
        puVar1 = puVar14 + 3;
        uVar26 = puVar14[2];
        uVar17 = uVar26;
        if (uVar23 < uVar26) {
          uVar17 = uVar23;
        }
        iVar12 = (*(code *)PTR_memcmp_00219ed8)(puVar14,uVar17);
        lVar18 = uVar23 - uVar26;
        if (iVar12 != 0) {
          lVar18 = (longlong)iVar12;
        }
        puVar22 = (undefined8 *)((longlong)puVar22 + 1);
        lVar25 = lVar25 + -0x18;
        puVar14 = puVar1;
      } while ((char)((0 < lVar18) - (lVar18 < 0)) == '\x01');
      if (0 < lVar18 == lVar18 < 0) {
        if (*param_3 != 0) {
          (*(code *)PTR___rust_dealloc_00219c40)(puVar1,1);
        }
        goto LAB_001ef4b8;
      }
LAB_001ef477:
      bVar27 = local_88 == 0;
      local_88 = local_88 + -1;
      if (bVar27) goto LAB_001ef5e0;
      local_50 = (undefined8 *)local_50[(longlong)puVar22 + 0x44];
    } while( true );
  }
  lVar25 = *param_3;
  local_50 = (undefined8 *)param_3[1];
  if (lVar25 != -1) {
    lVar18 = param_3[2];
    uVar5 = *param_4;
    uVar6 = param_4[1];
    uVar7 = param_4[2];
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
    puVar13 = (undefined8 *)(*(code *)PTR___rust_alloc_00219c88)();
    if (puVar13 == (undefined8 *)0x0) {
      (*(code *)PTR_handle_alloc_error_00219eb0)();
      goto LAB_001f021b;
    }
    *puVar13 = 0;
    *param_2 = puVar13;
    param_2[1] = 0;
    *(undefined2 *)((longlong)puVar13 + 0x21a) = 1;
    puVar13[1] = lVar25;
    puVar13[2] = local_50;
    puVar13[3] = lVar18;
    puVar13[0x22] = uVar5;
    puVar13[0x23] = uVar6;
    puVar13[0x24] = uVar7;
    goto LAB_001ef5b7;
  }
LAB_001ef4bc:
  uVar5 = local_50[(longlong)param_2 * 3 + 0x24];
  uVar6 = local_50[(longlong)param_2 * 3 + 0x22];
  uVar7 = (local_50 + (longlong)param_2 * 3 + 0x22)[1];
  local_50[(longlong)param_2 * 3 + 0x24] = param_4[2];
  uVar19 = param_4[1];
  local_50[(longlong)param_2 * 3 + 0x22] = *param_4;
  (local_50 + (longlong)param_2 * 3 + 0x22)[1] = uVar19;
  param_1[2] = uVar5;
  *param_1 = uVar6;
  param_1[1] = uVar7;
  return;
LAB_001ef5e0:
  lVar25 = *param_3;
  if (lVar25 != -1) {
    uVar5 = *param_4;
    uVar6 = param_4[1];
    uVar7 = param_4[2];
    if (uVar3 < 0xb) {
      plVar2 = puVar15 + (longlong)puVar22 * 3;
      if (puVar22 < (undefined8 *)(ulonglong)uVar3) {
        lVar18 = (ulonglong)(((uint)uVar3 - (int)puVar22) * 8) * 3;
        (*(code *)PTR_memmove_00219fb0)(lVar25,lVar18,puVar15);
        (*(code *)PTR_memmove_00219fb0)((longlong)puVar22 * 0x18,lVar18);
      }
      *plVar2 = lVar25;
      plVar2[1] = (longlong)puVar13;
      plVar2[2] = uVar23;
      local_50[(longlong)puVar22 * 3 + 0x22] = uVar5;
      local_50[(longlong)puVar22 * 3 + 0x23] = uVar6;
      local_50[(longlong)puVar22 * 3 + 0x24] = uVar7;
      *(ushort *)((longlong)local_50 + 0x21a) = uVar3 + 1;
LAB_001ef5b7:
      param_2[2] = param_2[2] + 1;
      *param_1 = 0xfffffffffffffffe;
      return;
    }
    if (puVar22 < (undefined8 *)0x5) {
      uVar26 = 4;
      bVar27 = false;
    }
    else if (puVar22 == (undefined8 *)&DAT_00000005) {
      bVar27 = false;
      uVar26 = 5;
    }
    else if (puVar22 == (undefined8 *)0x6) {
      uVar26 = 5;
      bVar27 = true;
      puVar22 = (undefined8 *)0x0;
    }
    else {
      puVar22 = (undefined8 *)((longlong)puVar22 + -7);
      uVar26 = 6;
      bVar27 = true;
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
    puVar14 = (undefined8 *)(*(code *)PTR___rust_alloc_00219c88)();
    if (puVar14 == (undefined8 *)0x0) {
      (*(code *)PTR_handle_alloc_error_00219eb0)();
    }
    else {
      *puVar14 = 0;
      uVar17 = ~uVar26 + (ulonglong)*(ushort *)((longlong)local_50 + 0x21a);
      *(short *)((longlong)puVar14 + 0x21a) = (short)uVar17;
      lVar18 = puVar15[uVar26 * 3];
      local_80 = local_50[uVar26 * 3 + 2];
      uVar19 = local_50[uVar26 * 3 + 0x22];
      uVar20 = local_50[uVar26 * 3 + 0x23];
      if (uVar17 < 0xc) {
        local_a8 = local_50[uVar26 * 3 + 0x24];
        local_d0 = (puVar15 + uVar26 * 3)[2];
        (*(code *)PTR_memcpy_00219c60)(puVar15 + uVar26 * 3,uVar17 * 0x18);
        (*(code *)PTR_memcpy_00219c60)(uVar26 * 3,uVar17 * 0x18);
        *(short *)((longlong)local_50 + 0x21a) = (short)uVar26;
        puVar15 = puVar14;
        if (!bVar27) {
          puVar15 = local_50;
        }
        uVar3 = *(ushort *)((longlong)puVar15 + 0x21a);
        if (puVar22 < (undefined8 *)(ulonglong)uVar3) {
          lVar24 = (ulonglong)(((uint)uVar3 - (int)puVar22) * 8) * 3;
          uVar28 = (*(code *)PTR_memmove_00219fb0)((longlong)puVar22 * 0x18,lVar24);
          (*(code *)PTR_memmove_00219fb0)(uVar28,lVar24);
        }
        puVar15[(longlong)puVar22 * 3 + 1] = lVar25;
        puVar15[(longlong)puVar22 * 3 + 2] = puVar13;
        puVar15[(longlong)puVar22 * 3 + 3] = uVar23;
        puVar15[(longlong)puVar22 * 3 + 0x22] = uVar5;
        puVar15[(longlong)puVar22 * 3 + 0x23] = uVar6;
        puVar15[(longlong)puVar22 * 3 + 0x24] = uVar7;
        *(ushort *)((longlong)puVar15 + 0x21a) = uVar3 + 1;
        if (lVar18 != -1) {
          local_d8 = 0;
          do {
            puVar13 = (undefined8 *)*local_50;
            if (puVar13 == (undefined8 *)0x0) {
              puVar13 = (undefined8 *)*param_2;
              if (puVar13 == (undefined8 *)0x0) {
                (*(code *)PTR_unwrap_failed_00219e58)();
                goto LAB_001f021b;
              }
              lVar25 = param_2[1];
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
              puVar15 = (undefined8 *)(*(code *)PTR___rust_alloc_00219c88)();
              if (puVar15 == (undefined8 *)0x0) {
                (*(code *)PTR_handle_alloc_error_00219eb0)();
                goto LAB_001f021b;
              }
              *puVar15 = 0;
              *(undefined2 *)((longlong)puVar15 + 0x21a) = 0;
              puVar15[0x44] = puVar13;
              lVar24 = lVar25 + 1;
              if (lVar24 == 0) {
                (*(code *)PTR_unwrap_failed_00219e58)();
                goto LAB_001f021b;
              }
              *puVar13 = puVar15;
              *(undefined2 *)(puVar13 + 0x43) = 0;
              *param_2 = puVar15;
              param_2[1] = lVar24;
              if (local_d8 != lVar25) {
                (*(code *)PTR_panic_00219ca8)
                          (param_2,&
                                   PTR_anon_0a2e2ea1a26f4ece9c568db345fec2ca_0_llvm_16814989741381496278_00217ca8
                          );
                goto LAB_001f021b;
              }
              *(undefined2 *)((longlong)puVar15 + 0x21a) = 1;
              puVar15[1] = lVar18;
              puVar15[2] = local_80;
              puVar15[3] = local_d0;
              puVar15[0x22] = uVar19;
              puVar15[0x23] = uVar20;
              puVar15[0x24] = local_a8;
              puVar15[0x45] = puVar14;
              *puVar14 = puVar15;
              *(undefined2 *)(puVar14 + 0x43) = 1;
              break;
            }
            uVar3 = *(ushort *)(local_50 + 0x43);
            local_40 = (ulonglong)uVar3;
            uVar4 = *(ushort *)((longlong)puVar13 + 0x21a);
            uVar23 = (ulonglong)uVar4;
            if (uVar23 < 0xb) {
              lVar25 = local_40 + 1;
              if (uVar3 < uVar4) {
                lVar24 = (uVar23 - local_40) * 0x18;
                uVar28 = (*(code *)PTR_memmove_00219fb0)(local_40,lVar24);
                (*(code *)PTR_memmove_00219fb0)(uVar28,lVar24);
              }
              puVar13[local_40 * 3 + 1] = lVar18;
              puVar13[local_40 * 3 + 2] = local_80;
              puVar13[local_40 * 3 + 3] = local_d0;
              puVar13[local_40 * 3 + 0x22] = uVar19;
              puVar13[local_40 * 3 + 0x23] = uVar20;
              puVar13[local_40 * 3 + 0x24] = local_a8;
              if (uVar3 < uVar4) {
                (*(code *)PTR_memmove_00219fb0)(local_40,(uVar23 - local_40) * 8);
              }
              puVar13[local_40 + 0x45] = puVar14;
              *(ushort *)((longlong)puVar13 + 0x21a) = uVar4 + 1;
              if ((uint)lVar25 < (uint)(uVar23 + 2)) {
                uVar16 = ((uint)uVar4 - (uint)uVar3) + 1 & 3;
                if (uVar16 != 0) {
                  uVar26 = 0;
                  do {
                    puVar15 = (undefined8 *)puVar13[local_40 + uVar26 + 0x45];
                    *puVar15 = puVar13;
                    *(short *)(puVar15 + 0x43) = (short)lVar25 + (short)uVar26;
                    uVar26 = uVar26 + 1;
                  } while (uVar16 != uVar26);
                  lVar25 = lVar25 + uVar26;
                }
                if (2 < (uint)uVar4 - (uint)uVar3) {
                  do {
                    puVar15 = (undefined8 *)puVar13[lVar25 + 0x44];
                    *puVar15 = puVar13;
                    sVar21 = (short)lVar25;
                    *(short *)(puVar15 + 0x43) = sVar21;
                    puVar15 = (undefined8 *)puVar13[lVar25 + 0x45];
                    *puVar15 = puVar13;
                    *(short *)(puVar15 + 0x43) = sVar21 + 1;
                    puVar15 = (undefined8 *)puVar13[lVar25 + 0x46];
                    *puVar15 = puVar13;
                    *(short *)(puVar15 + 0x43) = sVar21 + 2;
                    puVar15 = (undefined8 *)puVar13[lVar25 + 0x47];
                    *puVar15 = puVar13;
                    *(short *)(puVar15 + 0x43) = sVar21 + 3;
                    lVar25 = lVar25 + 4;
                  } while (lVar25 != uVar23 + 2);
                }
              }
              break;
            }
            if (uVar3 < 5) {
              uVar23 = 4;
              bVar27 = false;
            }
            else if (local_40 == 5) {
              bVar27 = false;
              uVar23 = 5;
            }
            else if (uVar3 == 6) {
              bVar27 = true;
              uVar23 = 5;
              local_40 = 0;
            }
            else {
              local_40 = local_40 - 7;
              bVar27 = true;
              uVar23 = 6;
            }
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
            puVar15 = (undefined8 *)(*(code *)PTR___rust_alloc_00219c88)();
            if (puVar15 == (undefined8 *)0x0) {
              (*(code *)PTR_handle_alloc_error_00219eb0)();
              goto LAB_001f021b;
            }
            *puVar15 = 0;
            uVar26 = ~uVar23 + (ulonglong)*(ushort *)((longlong)puVar13 + 0x21a);
            *(short *)((longlong)puVar15 + 0x21a) = (short)uVar26;
            lVar24 = (ulonglong)(uint)((int)uVar23 * 8) * 3;
            lVar25 = *(longlong *)((longlong)puVar13 + lVar24 + 8);
            uVar5 = *(undefined8 *)((longlong)puVar13 + lVar24 + 0x10);
            uVar6 = *(undefined8 *)((longlong)puVar13 + lVar24 + 0x110);
            uVar7 = *(undefined8 *)((longlong)puVar13 + lVar24 + 0x118);
            if (0xb < uVar26) {
              (*(code *)PTR_slice_index_fail_00219d80)
                        (&
                         PTR_anon_0a2e2ea1a26f4ece9c568db345fec2ca_0_llvm_16814989741381496278_00217be8
                         ,0xb);
              goto LAB_001f021b;
            }
            uVar8 = *(undefined8 *)((longlong)puVar13 + lVar24 + 0x120);
            uVar9 = *(undefined8 *)((longlong)puVar13 + lVar24 + 0x18);
            (*(code *)PTR_memcpy_00219c60)(puVar13 + 1,uVar26 * 0x18);
            uVar28 = (*(code *)PTR_memcpy_00219c60)(uVar23 * 3,uVar26 * 0x18);
            *(short *)((longlong)puVar13 + 0x21a) = (short)uVar23;
            uVar26 = (ulonglong)*(ushort *)((longlong)puVar15 + 0x21a);
            iVar12 = *(ushort *)((longlong)puVar15 + 0x21a) + 1;
            if (0xb < uVar26) {
              (*(code *)PTR_slice_index_fail_00219d80)
                        (&
                         PTR_anon_0a2e2ea1a26f4ece9c568db345fec2ca_0_llvm_16814989741381496278_00217330
                         ,0xc);
              goto LAB_001f021b;
            }
            if ((uint)uVar4 - (int)uVar23 != iVar12) {
              (*(code *)PTR_panic_00219ca8)
                        (uVar28,&
                                PTR_anon_0a2e2ea1a26f4ece9c568db345fec2ca_0_llvm_16814989741381496278_00217590
                        );
              goto LAB_001f021b;
            }
            local_d8 = local_d8 + 1;
            (*(code *)PTR_memcpy_00219c60)(uVar28,iVar12 * 8);
            uVar23 = 0;
            do {
              uVar17 = uVar23 + (uVar23 < uVar26);
              puVar22 = (undefined8 *)puVar15[uVar23 + 0x44];
              *puVar22 = puVar15;
              *(short *)(puVar22 + 0x43) = (short)uVar23;
              if (uVar26 <= uVar23) break;
              uVar23 = uVar17;
            } while (uVar17 <= uVar26);
            puVar22 = puVar15;
            if (!bVar27) {
              puVar22 = puVar13;
            }
            uVar3 = *(ushort *)((longlong)puVar22 + 0x21a);
            uVar23 = (ulonglong)uVar3;
            lVar24 = local_40 + 1;
            if (uVar23 < local_40 || uVar23 - local_40 == 0) {
              puVar22[local_40 * 3 + 1] = lVar18;
              puVar22[local_40 * 3 + 2] = local_80;
              puVar22[local_40 * 3 + 3] = local_d0;
              puVar22[local_40 * 3 + 0x22] = uVar19;
              puVar22[local_40 * 3 + 0x23] = uVar20;
              puVar22[local_40 * 3 + 0x24] = local_a8;
            }
            else {
              uVar26 = (ulonglong)(((uint)uVar3 - (int)local_40) * 8);
              uVar28 = (*(code *)PTR_memmove_00219fb0)();
              puVar22[local_40 * 3 + 1] = lVar18;
              puVar22[local_40 * 3 + 2] = local_80;
              puVar22[local_40 * 3 + 3] = local_d0;
              puVar11 = PTR_memmove_00219fb0;
              (*(code *)PTR_memmove_00219fb0)(uVar28,uVar26 * 3);
              puVar22[local_40 * 3 + 0x22] = uVar19;
              puVar22[local_40 * 3 + 0x23] = uVar20;
              puVar22[local_40 * 3 + 0x24] = local_a8;
              (*(code *)puVar11)(local_40 * 3,uVar26);
            }
            puVar22[local_40 + 0x45] = puVar14;
            *(ushort *)((longlong)puVar22 + 0x21a) = uVar3 + 1;
            if ((uint)lVar24 < (uint)(uVar23 + 2)) {
              uVar16 = ((uint)uVar3 - (int)local_40) + 1 & 3;
              if (uVar16 != 0) {
                uVar26 = 0;
                do {
                  puVar14 = (undefined8 *)puVar22[local_40 + uVar26 + 0x45];
                  *puVar14 = puVar22;
                  *(short *)(puVar14 + 0x43) = (short)uVar26 + (short)lVar24;
                  uVar26 = uVar26 + 1;
                } while (uVar16 != uVar26);
                lVar24 = lVar24 + uVar26;
              }
              if (2 < (uint)(uVar23 - local_40)) {
                do {
                  puVar14 = (undefined8 *)puVar22[lVar24 + 0x44];
                  *puVar14 = puVar22;
                  sVar21 = (short)lVar24;
                  *(short *)(puVar14 + 0x43) = sVar21;
                  puVar14 = (undefined8 *)puVar22[lVar24 + 0x45];
                  *puVar14 = puVar22;
                  *(short *)(puVar14 + 0x43) = sVar21 + 1;
                  puVar14 = (undefined8 *)puVar22[lVar24 + 0x46];
                  *puVar14 = puVar22;
                  *(short *)(puVar14 + 0x43) = sVar21 + 2;
                  puVar14 = (undefined8 *)puVar22[lVar24 + 0x47];
                  *puVar14 = puVar22;
                  *(short *)(puVar14 + 0x43) = sVar21 + 3;
                  lVar24 = lVar24 + 4;
                } while (lVar24 != uVar23 + 2);
              }
            }
            local_50 = puVar13;
            lVar18 = lVar25;
            uVar19 = uVar6;
            uVar20 = uVar7;
            puVar14 = puVar15;
            local_d0 = uVar9;
            local_a8 = uVar8;
            local_80 = uVar5;
          } while (lVar25 != -1);
        }
        goto LAB_001ef5b7;
      }
      (*(code *)PTR_slice_index_fail_00219d80)
                (&PTR_anon_0a2e2ea1a26f4ece9c568db345fec2ca_0_llvm_16814989741381496278_00217be8,0xb
                );
    }
LAB_001f021b:
                    /* WARNING: Does not return */
    pcVar10 = (code *)invalidInstructionException();
    (*pcVar10)();
  }
  puVar22 = param_2;
  local_50 = puVar13;
LAB_001ef4b8:
  param_2 = puVar22;
  goto LAB_001ef4bc;
}


