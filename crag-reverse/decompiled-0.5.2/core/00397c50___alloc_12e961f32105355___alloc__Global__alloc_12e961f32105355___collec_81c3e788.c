// 00397c50 <alloc[12e961f32105355]::alloc::Global,<alloc[12e961f32105355]::collections::btree::map::entry::VacantEntry<alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::collections::btree::set_val::SetValZST>>::insert_entry::{closure#0}>

/* <alloc[12e961f32105355]::collections::btree::node::Handle<alloc[12e961f32105355]::collections::btree::node::NodeRef<alloc[12e961f32105355]::collections::btree::node::marker::Mut,
   alloc[12e961f32105355]::string::String,
   alloc[12e961f32105355]::collections::btree::set_val::SetValZST,
   alloc[12e961f32105355]::collections::btree::node::marker::Leaf>,
   alloc[12e961f32105355]::collections::btree::node::marker::Edge>>::insert_recursing::<alloc[12e961f32105355]::alloc::Global,
   <alloc[12e961f32105355]::collections::btree::map::entry::VacantEntry<alloc[12e961f32105355]::string::String,
   alloc[12e961f32105355]::collections::btree::set_val::SetValZST>>::insert_entry::{closure#0}> */

void __rustcall
<alloc[12e961f32105355]::collections::btree::node::Handle<alloc[12e961f32105355]::collections::btree::node::NodeRef<alloc[12e961f32105355]::collections::btree::node::marker::Mut,alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::collections::btree::set_val::SetValZST,alloc[12e961f32105355]::collections::btree::node::marker::Leaf>,alloc[12e961f32105355]::collections::btree::node::marker::Edge>>
::insert_recursing::
<alloc[12e961f32105355]::alloc::Global,<alloc[12e961f32105355]::collections::btree::map::entry::VacantEntry<alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::collections::btree::set_val::SetValZST>>::insert_entry::_closure_0_>
          (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ushort uVar1;
  ushort uVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  int iVar13;
  undefined8 uVar14;
  uint uVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  short sVar20;
  longlong lVar21;
  longlong lVar22;
  undefined8 uVar23;
  undefined8 *puVar24;
  ulonglong uVar25;
  bool bVar26;
  undefined4 uVar27;
  ulonglong local_b0;
  longlong local_98;
  ulonglong local_90;
  longlong local_68;
  
  puVar24 = (undefined8 *)*param_2;
  uVar1 = *(ushort *)((longlong)puVar24 + 0x112);
  uVar25 = (ulonglong)uVar1;
  if (uVar25 < 0xb) {
    local_b0 = param_2[2];
    if (local_b0 + 1 <= uVar25) {
      (*(code *)PTR_memmove_00799258)((uVar25 - local_b0) * 8,(uVar25 - local_b0) * 0x18);
    }
    puVar24[local_b0 * 3 + 3] = param_3[2];
    uVar23 = param_3[1];
    puVar24[local_b0 * 3 + 1] = *param_3;
    (puVar24 + local_b0 * 3 + 1)[1] = uVar23;
    *(ushort *)((longlong)puVar24 + 0x112) = uVar1 + 1;
    lVar8 = param_2[1];
LAB_00398329:
    *param_1 = puVar24;
    param_1[1] = lVar8;
    param_1[2] = local_b0;
    return;
  }
  local_b0 = param_2[2];
  if (local_b0 < 5) {
    uVar25 = 4;
    bVar26 = false;
  }
  else if (local_b0 == 5) {
    bVar26 = false;
    uVar25 = 5;
  }
  else if (local_b0 == 6) {
    uVar25 = 5;
    bVar26 = true;
    local_b0 = 0;
  }
  else {
    local_b0 = local_b0 - 7;
    uVar25 = 6;
    bVar26 = true;
  }
  local_68 = param_2[1];
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar7 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar7 == (undefined8 *)0x0) {
    (*(code *)PTR_handle_alloc_error_007991d8)();
  }
  else {
    *puVar7 = 0;
    uVar17 = ~uVar25 + (ulonglong)*(ushort *)((longlong)puVar24 + 0x112);
    *(short *)((longlong)puVar7 + 0x112) = (short)uVar17;
    lVar22 = puVar24[uVar25 * 3 + 1];
    uVar23 = puVar24[uVar25 * 3 + 2];
    if (uVar17 < 0xc) {
      uVar14 = puVar24[uVar25 * 3 + 3];
      (*(code *)PTR_memcpy_00799008)(uVar14,uVar17 * 0x18);
      *(short *)((longlong)puVar24 + 0x112) = (short)uVar25;
      lVar8 = 0;
      puVar6 = puVar7;
      if (!bVar26) {
        lVar8 = local_68;
        puVar6 = puVar24;
      }
      uVar1 = *(ushort *)((longlong)puVar6 + 0x112);
      if (local_b0 < uVar1) {
        (*(code *)PTR_memmove_00799258)(puVar6,(ulonglong)(((uint)uVar1 - (int)local_b0) * 8) * 3);
      }
      puVar6[local_b0 * 3 + 3] = param_3[2];
      uVar27 = *(undefined4 *)((longlong)param_3 + 4);
      uVar4 = *(undefined4 *)(param_3 + 1);
      uVar5 = *(undefined4 *)((longlong)param_3 + 0xc);
      puVar11 = puVar6 + local_b0 * 3 + 1;
      *(undefined4 *)puVar11 = *(undefined4 *)param_3;
      *(undefined4 *)((longlong)puVar11 + 4) = uVar27;
      *(undefined4 *)(puVar11 + 1) = uVar4;
      *(undefined4 *)((longlong)puVar11 + 0xc) = uVar5;
      *(ushort *)((longlong)puVar6 + 0x112) = uVar1 + 1;
      if (lVar22 != -1) {
        if ((undefined8 *)*puVar24 == (undefined8 *)0x0) {
          local_68 = 0;
        }
        else {
          bVar26 = local_68 == 0;
          puVar11 = (undefined8 *)*puVar24;
          uVar16 = uVar23;
          puVar18 = puVar7;
          uVar19 = uVar14;
          local_98 = lVar22;
          do {
            puVar9 = puVar11;
            if (!bVar26) {
              (*(code *)PTR_panic_00799338)
                        (0,&
                           PTR_anon_8f9fb481ca6dde113ed424f4ae2d1b7e_0_llvm_18113579616407530955_00787bd0
                        );
              goto LAB_003985f2;
            }
            uVar1 = *(ushort *)(puVar24 + 0x22);
            local_90 = (ulonglong)uVar1;
            uVar2 = *(ushort *)((longlong)puVar9 + 0x112);
            uVar25 = (ulonglong)uVar2;
            if (uVar25 < 0xb) {
              lVar22 = local_90 + 1;
              if (uVar1 < uVar2) {
                uVar27 = (*(code *)PTR_memmove_00799258)(lVar22 * 3,(uVar25 - local_90) * 0x18);
                puVar9[local_90 * 3 + 1] = local_98;
                puVar9[local_90 * 3 + 2] = uVar16;
                puVar9[local_90 * 3 + 3] = uVar19;
                (*(code *)PTR_memmove_00799258)(uVar27,(uVar25 - local_90) * 8);
              }
              else {
                puVar9[local_90 * 3 + 1] = local_98;
                puVar9[local_90 * 3 + 2] = uVar16;
                puVar9[local_90 * 3 + 3] = uVar19;
              }
              puVar9[local_90 + 0x24] = puVar18;
              *(ushort *)((longlong)puVar9 + 0x112) = uVar2 + 1;
              if ((uint)lVar22 < (uint)(uVar25 + 2)) {
                uVar15 = ((uint)uVar2 - (uint)uVar1) + 1 & 3;
                if (uVar15 != 0) {
                  uVar17 = 0;
                  do {
                    puVar24 = (undefined8 *)puVar9[local_90 + uVar17 + 0x24];
                    *puVar24 = puVar9;
                    *(short *)(puVar24 + 0x22) = (short)lVar22 + (short)uVar17;
                    uVar17 = uVar17 + 1;
                  } while (uVar15 != uVar17);
                  lVar22 = lVar22 + uVar17;
                }
                if (2 < (uint)uVar2 - (uint)uVar1) {
                  do {
                    puVar24 = (undefined8 *)puVar9[lVar22 + 0x23];
                    *puVar24 = puVar9;
                    sVar20 = (short)lVar22;
                    *(short *)(puVar24 + 0x22) = sVar20;
                    puVar24 = (undefined8 *)puVar9[lVar22 + 0x24];
                    *puVar24 = puVar9;
                    *(short *)(puVar24 + 0x22) = sVar20 + 1;
                    puVar24 = (undefined8 *)puVar9[lVar22 + 0x25];
                    *puVar24 = puVar9;
                    *(short *)(puVar24 + 0x22) = sVar20 + 2;
                    puVar24 = (undefined8 *)puVar9[lVar22 + 0x26];
                    *puVar24 = puVar9;
                    *(short *)(puVar24 + 0x22) = sVar20 + 3;
                    lVar22 = lVar22 + 4;
                  } while (lVar22 != uVar25 + 2);
                }
              }
              puVar24 = puVar6;
              goto LAB_00398329;
            }
            if (uVar1 < 5) {
              uVar25 = 4;
              bVar26 = false;
            }
            else if (local_90 == 5) {
              bVar26 = false;
              uVar25 = 5;
            }
            else if (uVar1 == 6) {
              bVar26 = true;
              uVar25 = 5;
              local_90 = 0;
            }
            else {
              local_90 = local_90 - 7;
              bVar26 = true;
              uVar25 = 6;
            }
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            puVar7 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
            if (puVar7 == (undefined8 *)0x0) {
              (*(code *)PTR_handle_alloc_error_007991d8)();
              goto LAB_003985f2;
            }
            *puVar7 = 0;
            *(undefined2 *)((longlong)puVar7 + 0x112) = 0;
            uVar17 = ~uVar25 + (ulonglong)*(ushort *)((longlong)puVar9 + 0x112);
            *(short *)((longlong)puVar7 + 0x112) = (short)uVar17;
            lVar22 = puVar9[uVar25 * 3 + 1];
            uVar23 = puVar9[uVar25 * 3 + 2];
            if (0xb < uVar17) {
              (*(code *)PTR_slice_index_fail_007993c8)
                        (&
                         PTR_anon_8f9fb481ca6dde113ed424f4ae2d1b7e_0_llvm_18113579616407530955_00787ed0
                         ,0xb);
              goto LAB_003985f2;
            }
            uVar14 = puVar9[uVar25 * 3 + 3];
            uVar27 = (*(code *)PTR_memcpy_00799008)(uVar14,uVar17 * 0x18);
            *(short *)((longlong)puVar9 + 0x112) = (short)uVar25;
            uVar17 = (ulonglong)*(ushort *)((longlong)puVar7 + 0x112);
            iVar13 = *(ushort *)((longlong)puVar7 + 0x112) + 1;
            if (0xb < uVar17) {
              (*(code *)PTR_slice_index_fail_007993c8)
                        (&
                         PTR_anon_8f9fb481ca6dde113ed424f4ae2d1b7e_0_llvm_18113579616407530955_00787be8
                         ,0xc);
              goto LAB_003985f2;
            }
            if ((uint)uVar2 - (int)uVar25 != iVar13) {
              (*(code *)PTR_panic_00799338)
                        (uVar27,&
                                PTR_anon_8f9fb481ca6dde113ed424f4ae2d1b7e_0_llvm_18113579616407530955_00787c18
                        );
              goto LAB_003985f2;
            }
            local_68 = local_68 + 1;
            (*(code *)PTR_memcpy_00799008)(uVar27,iVar13 * 8);
            uVar25 = 0;
            do {
              uVar10 = uVar25 + (uVar25 < uVar17);
              puVar24 = (undefined8 *)puVar7[uVar25 + 0x23];
              *puVar24 = puVar7;
              *(short *)(puVar24 + 0x22) = (short)uVar25;
              if (uVar17 <= uVar25) break;
              uVar25 = uVar10;
            } while (uVar10 <= uVar17);
            puVar24 = puVar7;
            if (!bVar26) {
              puVar24 = puVar9;
            }
            uVar1 = *(ushort *)((longlong)puVar24 + 0x112);
            uVar25 = (ulonglong)uVar1;
            lVar21 = local_90 + 1;
            if (uVar25 < local_90 || uVar25 - local_90 == 0) {
              puVar24[local_90 * 3 + 1] = local_98;
              puVar24[local_90 * 3 + 2] = uVar16;
              puVar24[local_90 * 3 + 3] = uVar19;
            }
            else {
              uVar17 = (ulonglong)(((uint)uVar1 - (int)local_90) * 8);
              uVar27 = (*(code *)PTR_memmove_00799258)(lVar21 * 3,uVar17 * 3);
              puVar24[local_90 * 3 + 1] = local_98;
              puVar24[local_90 * 3 + 2] = uVar16;
              puVar24[local_90 * 3 + 3] = uVar19;
              (*(code *)PTR_memmove_00799258)(uVar27,uVar17);
            }
            puVar24[local_90 + 0x24] = puVar18;
            *(ushort *)((longlong)puVar24 + 0x112) = uVar1 + 1;
            if ((uint)lVar21 < (uint)(uVar25 + 2)) {
              uVar15 = ((uint)uVar1 - (int)local_90) + 1 & 3;
              if (uVar15 != 0) {
                uVar17 = 0;
                do {
                  puVar11 = (undefined8 *)puVar24[uVar17 + local_90 + 0x24];
                  *puVar11 = puVar24;
                  *(short *)(puVar11 + 0x22) = (short)lVar21 + (short)uVar17;
                  uVar17 = uVar17 + 1;
                } while (uVar15 != uVar17);
                lVar21 = lVar21 + uVar17;
              }
              if (2 < (uint)(uVar25 - local_90)) {
                do {
                  puVar11 = (undefined8 *)puVar24[lVar21 + 0x23];
                  *puVar11 = puVar24;
                  sVar20 = (short)lVar21;
                  *(short *)(puVar11 + 0x22) = sVar20;
                  puVar11 = (undefined8 *)puVar24[lVar21 + 0x24];
                  *puVar11 = puVar24;
                  *(short *)(puVar11 + 0x22) = sVar20 + 1;
                  puVar11 = (undefined8 *)puVar24[lVar21 + 0x25];
                  *puVar11 = puVar24;
                  *(short *)(puVar11 + 0x22) = sVar20 + 2;
                  puVar11 = (undefined8 *)puVar24[lVar21 + 0x26];
                  *puVar11 = puVar24;
                  *(short *)(puVar11 + 0x22) = sVar20 + 3;
                  lVar21 = lVar21 + 4;
                } while (lVar21 != uVar25 + 2);
              }
            }
            if (lVar22 == -1) goto LAB_0039831a;
            bVar26 = true;
            puVar11 = (undefined8 *)*puVar9;
            uVar16 = uVar23;
            puVar18 = puVar7;
            uVar19 = uVar14;
            puVar24 = puVar9;
            local_98 = lVar22;
          } while ((undefined8 *)*puVar9 != (undefined8 *)0x0);
        }
        param_4 = (undefined8 *)*param_4;
        puVar24 = (undefined8 *)*param_4;
        if (puVar24 == (undefined8 *)0x0) {
          (*(code *)PTR_unwrap_failed_00799278)();
          goto LAB_003985f2;
        }
        lVar21 = param_4[1];
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        puVar11 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
        if (puVar11 == (undefined8 *)0x0) {
          (*(code *)PTR_handle_alloc_error_007991d8)();
          goto LAB_003985f2;
        }
        *puVar11 = 0;
        *(undefined2 *)((longlong)puVar11 + 0x112) = 0;
        puVar11[0x23] = puVar24;
        lVar12 = lVar21 + 1;
        if (lVar12 == 0) {
          (*(code *)PTR_unwrap_failed_00799278)();
          goto LAB_003985f2;
        }
        *puVar24 = puVar11;
        *(undefined2 *)(puVar24 + 0x22) = 0;
        *param_4 = puVar11;
        param_4[1] = lVar12;
        if (local_68 != lVar21) {
          (*(code *)PTR_panic_00799338)
                    (puVar6,&anon_f98aad3bb3e6c606de146d8493d2cfe7_151_llvm_13619962878011216390);
          goto LAB_003985f2;
        }
        *(undefined2 *)((longlong)puVar11 + 0x112) = 1;
        puVar11[1] = lVar22;
        puVar11[2] = uVar23;
        puVar11[3] = uVar14;
        puVar11[0x24] = puVar7;
        *puVar7 = puVar11;
        *(undefined2 *)(puVar7 + 0x22) = 1;
      }
LAB_0039831a:
      puVar24 = puVar6;
      goto LAB_00398329;
    }
    (*(code *)PTR_slice_index_fail_007993c8)
              (&PTR_anon_8f9fb481ca6dde113ed424f4ae2d1b7e_0_llvm_18113579616407530955_00787ed0,0xb);
  }
LAB_003985f2:
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}


