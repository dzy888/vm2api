// 00399730 <alloc[12e961f32105355]::alloc::Global,<alloc[12e961f32105355]::collections::btree::map::entry::VacantEntry<u32,alloc[12e961f32105355]::collections::btree::set_val::SetValZST>>::insert_entry::{closure#0}>

/* <alloc[12e961f32105355]::collections::btree::node::Handle<alloc[12e961f32105355]::collections::btree::node::NodeRef<alloc[12e961f32105355]::collections::btree::node::marker::Mut,
   u32, alloc[12e961f32105355]::collections::btree::set_val::SetValZST,
   alloc[12e961f32105355]::collections::btree::node::marker::Leaf>,
   alloc[12e961f32105355]::collections::btree::node::marker::Edge>>::insert_recursing::<alloc[12e961f32105355]::alloc::Global,
   <alloc[12e961f32105355]::collections::btree::map::entry::VacantEntry<u32,
   alloc[12e961f32105355]::collections::btree::set_val::SetValZST>>::insert_entry::{closure#0}> */

undefined8 * __rustcall
<alloc[12e961f32105355]::collections::btree::node::Handle<alloc[12e961f32105355]::collections::btree::node::NodeRef<alloc[12e961f32105355]::collections::btree::node::marker::Mut,u32,alloc[12e961f32105355]::collections::btree::set_val::SetValZST,alloc[12e961f32105355]::collections::btree::node::marker::Leaf>,alloc[12e961f32105355]::collections::btree::node::marker::Edge>>
::insert_recursing::
<alloc[12e961f32105355]::alloc::Global,<alloc[12e961f32105355]::collections::btree::map::entry::VacantEntry<u32,alloc[12e961f32105355]::collections::btree::set_val::SetValZST>>::insert_entry::_closure_0_>
          (undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined8 *param_4)

{
  ushort uVar1;
  ushort uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  short sVar13;
  undefined8 *puVar14;
  longlong lVar15;
  undefined8 *puVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  bool bVar21;
  ulonglong local_88;
  longlong local_70;
  
  puVar14 = (undefined8 *)*param_2;
  uVar1 = *(ushort *)((longlong)puVar14 + 0x36);
  uVar19 = (ulonglong)uVar1;
  if (uVar19 < 0xb) {
    local_88 = param_2[2];
    if (local_88 + 1 <= uVar19) {
      (*(code *)PTR_memmove_00799258)(local_88 + 1,(uVar19 - local_88) * 4);
    }
    *(undefined4 *)((longlong)puVar14 + local_88 * 4 + 8) = param_3;
    *(ushort *)((longlong)puVar14 + 0x36) = uVar1 + 1;
    lVar5 = param_2[1];
    puVar16 = puVar14;
LAB_00399d67:
    *param_1 = puVar16;
    param_1[1] = lVar5;
    param_1[2] = local_88;
    return param_1;
  }
  local_88 = param_2[2];
  if (local_88 < 5) {
    uVar19 = 4;
    bVar21 = false;
  }
  else if (local_88 == 5) {
    bVar21 = false;
    uVar19 = 5;
  }
  else if (local_88 == 6) {
    uVar19 = 5;
    bVar21 = true;
    local_88 = 0;
  }
  else {
    local_88 = local_88 - 7;
    uVar19 = 6;
    bVar21 = true;
  }
  local_70 = param_2[1];
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar4 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar4 == (undefined8 *)0x0) {
    (*(code *)PTR_handle_alloc_error_007991d8)();
LAB_00399e29:
    (*(code *)PTR_unwrap_failed_00799278)();
  }
  else {
    *puVar4 = 0;
    uVar10 = ~uVar19 + (ulonglong)*(ushort *)((longlong)puVar14 + 0x36);
    *(short *)((longlong)puVar4 + 0x36) = (short)uVar10;
    if (0xb < uVar10) {
      (*(code *)PTR_slice_index_fail_007993c8)
                (&PTR_anon_8f9fb481ca6dde113ed424f4ae2d1b7e_0_llvm_18113579616407530955_00787ed0,0xb
                );
      goto LAB_00399e55;
    }
    uVar18 = *(undefined4 *)((longlong)puVar14 + uVar19 * 4 + 8);
    (*(code *)PTR_memcpy_00799008)();
    *(short *)((longlong)puVar14 + 0x36) = (short)uVar19;
    lVar5 = 0;
    puVar16 = puVar4;
    if (!bVar21) {
      lVar5 = local_70;
      puVar16 = puVar14;
    }
    uVar1 = *(ushort *)((longlong)puVar16 + 0x36);
    if (local_88 < uVar1) {
      (*(code *)PTR_memmove_00799258)(local_88,((uint)uVar1 - (int)local_88) * 4);
    }
    *(undefined4 *)((longlong)puVar16 + local_88 * 4 + 8) = param_3;
    *(ushort *)((longlong)puVar16 + 0x36) = uVar1 + 1;
    if ((undefined8 *)*puVar14 == (undefined8 *)0x0) {
      local_70 = 0;
    }
    else {
      bVar21 = local_70 == 0;
      puVar8 = (undefined8 *)*puVar14;
      puVar20 = puVar4;
      uVar17 = uVar18;
      do {
        puVar6 = puVar8;
        if (bVar21 == false) {
          (*(code *)PTR_panic_00799338)
                    (0,&
                       PTR_anon_8f9fb481ca6dde113ed424f4ae2d1b7e_0_llvm_18113579616407530955_00787bd0
                    );
LAB_00399dd5:
          (*(code *)PTR_handle_alloc_error_007991d8)();
LAB_00399de5:
          (*(code *)PTR_panic_00799338)();
          goto LAB_00399e55;
        }
        uVar1 = *(ushort *)((longlong)puVar14 + 0x34);
        uVar10 = (ulonglong)uVar1;
        uVar2 = *(ushort *)((longlong)puVar6 + 0x36);
        uVar19 = (ulonglong)uVar2;
        if (uVar19 < 0xb) {
          lVar15 = uVar10 + 1;
          if (uVar1 < uVar2) {
            (*(code *)PTR_memmove_00799258)(bVar21,(uVar19 - uVar10) * 4);
            (*(code *)PTR_memmove_00799258)();
          }
          *(undefined4 *)((longlong)puVar6 + uVar10 * 4 + 8) = uVar17;
          puVar6[uVar10 + 8] = puVar20;
          *(ushort *)((longlong)puVar6 + 0x36) = uVar2 + 1;
          if ((uint)lVar15 < (uint)(uVar19 + 2)) {
            uVar12 = ((uint)uVar2 - (uint)uVar1) + 1 & 3;
            if (uVar12 != 0) {
              uVar11 = 0;
              do {
                puVar14 = (undefined8 *)puVar6[uVar10 + uVar11 + 8];
                *puVar14 = puVar6;
                *(short *)((longlong)puVar14 + 0x34) = (short)lVar15 + (short)uVar11;
                uVar11 = uVar11 + 1;
              } while (uVar12 != uVar11);
              lVar15 = lVar15 + uVar11;
            }
            if (2 < (uint)uVar2 - (uint)uVar1) {
              do {
                puVar14 = (undefined8 *)puVar6[lVar15 + 7];
                *puVar14 = puVar6;
                sVar13 = (short)lVar15;
                *(short *)((longlong)puVar14 + 0x34) = sVar13;
                puVar14 = (undefined8 *)puVar6[lVar15 + 8];
                *puVar14 = puVar6;
                *(short *)((longlong)puVar14 + 0x34) = sVar13 + 1;
                puVar14 = (undefined8 *)puVar6[lVar15 + 9];
                *puVar14 = puVar6;
                *(short *)((longlong)puVar14 + 0x34) = sVar13 + 2;
                puVar14 = (undefined8 *)puVar6[lVar15 + 10];
                *puVar14 = puVar6;
                *(short *)((longlong)puVar14 + 0x34) = sVar13 + 3;
                lVar15 = lVar15 + 4;
              } while (lVar15 != uVar19 + 2);
            }
          }
          goto LAB_00399d67;
        }
        if (uVar1 < 5) {
          uVar19 = 4;
          bVar21 = false;
        }
        else if (uVar10 == 5) {
          bVar21 = false;
          uVar19 = 5;
        }
        else if (uVar1 == 6) {
          bVar21 = true;
          uVar19 = 5;
          uVar10 = 0;
        }
        else {
          uVar10 = uVar10 - 7;
          bVar21 = true;
          uVar19 = 6;
        }
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        puVar4 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
        if (puVar4 == (undefined8 *)0x0) goto LAB_00399dd5;
        *puVar4 = 0;
        *(undefined2 *)((longlong)puVar4 + 0x36) = 0;
        uVar11 = ~uVar19 + (ulonglong)*(ushort *)((longlong)puVar6 + 0x36);
        *(short *)((longlong)puVar4 + 0x36) = (short)uVar11;
        if (0xb < uVar11) {
          (*(code *)PTR_slice_index_fail_007993c8)
                    (&PTR_anon_8f9fb481ca6dde113ed424f4ae2d1b7e_0_llvm_18113579616407530955_00787ed0
                     ,0xb);
          goto LAB_00399e55;
        }
        uVar18 = *(undefined4 *)((longlong)puVar6 + uVar19 * 4 + 8);
        (*(code *)PTR_memcpy_00799008)();
        *(short *)((longlong)puVar6 + 0x36) = (short)uVar19;
        uVar11 = (ulonglong)*(ushort *)((longlong)puVar4 + 0x36);
        if (0xb < uVar11) {
          (*(code *)PTR_slice_index_fail_007993c8)
                    (&PTR_anon_8f9fb481ca6dde113ed424f4ae2d1b7e_0_llvm_18113579616407530955_00787be8
                     ,0xc);
          goto LAB_00399e55;
        }
        if ((uint)uVar2 - (int)uVar19 != *(ushort *)((longlong)puVar4 + 0x36) + 1)
        goto LAB_00399de5;
        local_70 = local_70 + 1;
        (*(code *)PTR_memcpy_00799008)();
        uVar19 = 0;
        do {
          uVar7 = uVar19;
          uVar19 = uVar7 + (uVar7 < uVar11);
          puVar14 = (undefined8 *)puVar4[uVar7 + 7];
          *puVar14 = puVar4;
          *(short *)((longlong)puVar14 + 0x34) = (short)uVar7;
          if (uVar11 <= uVar7) break;
        } while (uVar19 <= uVar11);
        puVar14 = puVar4;
        if (!bVar21) {
          puVar14 = puVar6;
        }
        uVar1 = *(ushort *)((longlong)puVar14 + 0x36);
        uVar19 = (ulonglong)uVar1;
        lVar15 = uVar10 + 1;
        if (uVar10 <= uVar19 && uVar19 - uVar10 != 0) {
          (*(code *)PTR_memmove_00799258)(uVar7,((uint)uVar1 - (int)uVar10) * 4);
          (*(code *)PTR_memmove_00799258)();
        }
        *(undefined4 *)((longlong)puVar14 + uVar10 * 4 + 8) = uVar17;
        puVar14[uVar10 + 8] = puVar20;
        *(ushort *)((longlong)puVar14 + 0x36) = uVar1 + 1;
        if ((uint)lVar15 < (uint)(uVar19 + 2)) {
          uVar12 = ((uint)uVar1 - (int)uVar10) + 1 & 3;
          if (uVar12 != 0) {
            uVar11 = 0;
            do {
              puVar8 = (undefined8 *)puVar14[uVar11 + uVar10 + 8];
              *puVar8 = puVar14;
              *(short *)((longlong)puVar8 + 0x34) = (short)uVar11 + (short)lVar15;
              uVar11 = uVar11 + 1;
            } while (uVar12 != uVar11);
            lVar15 = lVar15 + uVar11;
          }
          if (2 < (uint)(uVar19 - uVar10)) {
            do {
              puVar8 = (undefined8 *)puVar14[lVar15 + 7];
              *puVar8 = puVar14;
              sVar13 = (short)lVar15;
              *(short *)((longlong)puVar8 + 0x34) = sVar13;
              puVar8 = (undefined8 *)puVar14[lVar15 + 8];
              *puVar8 = puVar14;
              *(short *)((longlong)puVar8 + 0x34) = sVar13 + 1;
              puVar8 = (undefined8 *)puVar14[lVar15 + 9];
              *puVar8 = puVar14;
              *(short *)((longlong)puVar8 + 0x34) = sVar13 + 2;
              puVar8 = (undefined8 *)puVar14[lVar15 + 10];
              *puVar8 = puVar14;
              *(short *)((longlong)puVar8 + 0x34) = sVar13 + 3;
              lVar15 = lVar15 + 4;
            } while (lVar15 != uVar19 + 2);
          }
        }
        bVar21 = true;
        puVar8 = (undefined8 *)*puVar6;
        puVar14 = puVar6;
        puVar20 = puVar4;
        uVar17 = uVar18;
      } while ((undefined8 *)*puVar6 != (undefined8 *)0x0);
    }
    param_4 = (undefined8 *)*param_4;
    puVar14 = (undefined8 *)*param_4;
    if (puVar14 == (undefined8 *)0x0) goto LAB_00399e29;
    lVar15 = param_4[1];
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar8 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = 0;
      *(undefined2 *)((longlong)puVar8 + 0x36) = 0;
      puVar8[7] = puVar14;
      lVar9 = lVar15 + 1;
      if (lVar9 != 0) {
        *puVar14 = puVar8;
        *(undefined2 *)((longlong)puVar14 + 0x34) = 0;
        *param_4 = puVar8;
        param_4[1] = lVar9;
        if (local_70 != lVar15) {
          (*(code *)PTR_panic_00799338)();
          (*(code *)PTR___rust_dealloc_00798fc8)();
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        *(undefined2 *)((longlong)puVar8 + 0x36) = 1;
        *(undefined4 *)(puVar8 + 1) = uVar18;
        puVar8[8] = puVar4;
        *puVar4 = puVar8;
        *(undefined2 *)((longlong)puVar4 + 0x34) = 1;
        goto LAB_00399d67;
      }
      (*(code *)PTR_unwrap_failed_00799278)();
      goto LAB_00399e55;
    }
  }
  (*(code *)PTR_handle_alloc_error_007991d8)();
LAB_00399e55:
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}


