// 003b7d30 from_iter

/* <alloc[12e961f32105355]::vec::Vec<(alloc[12e961f32105355]::string::String,
   alloc[12e961f32105355]::string::String)> as
   alloc[12e961f32105355]::vec::spec_from_iter::SpecFromIter<(alloc[12e961f32105355]::string::String,
   alloc[12e961f32105355]::string::String),
   core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<alloc[12e961f32105355]::vec::into_iter::IntoIter<(&str,
   alloc[12e961f32105355]::string::String)>,
   <craggemini_core[66f3c71560d70857]::pool::AccountPool>::spawn_acp_worker_inner::{closure#0}::{closure#3}>>>::from_iter
    */

longlong * __rustcall
<alloc[12e961f32105355]::vec::Vec<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String)>as_alloc[12e961f32105355]::vec::spec_from_iter::SpecFromIter<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String),core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<alloc[12e961f32105355]::vec::into_iter::IntoIter<(&str,alloc[12e961f32105355]::string::String)>,<craggemini_core[66f3c71560d70857]::pool::AccountPool>::spawn_acp_worker_inner::{closure#0}::{closure#3}>>>
::from_iter(longlong *param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  code *pcVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined4 *puVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  
  if ((ulonglong)(*(longlong *)(param_2 + 6) - *(longlong *)(param_2 + 2)) < 0x6aaaaaaaaaaaaa91) {
    uVar11 = (ulonglong)(*(longlong *)(param_2 + 6) - *(longlong *)(param_2 + 2)) >> 3;
    if (uVar11 * 0x6666666666666670 == 0) {
      lVar4 = 8;
      lVar12 = 0;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar4 = (*(code *)PTR___rust_alloc_00799000)();
      if (lVar4 == 0) goto LAB_003b7d5b;
      lVar12 = uVar11 * -0x3333333333333333;
    }
    local_68 = *param_2;
    puVar3 = *(undefined8 **)(param_2 + 2);
    lVar1 = *(longlong *)(param_2 + 4);
    puVar2 = *(undefined8 **)(param_2 + 6);
    if (puVar3 == puVar2) {
      lVar15 = 0;
      if (lVar1 != 0) {
LAB_003b7f23:
        (*(code *)PTR___rust_dealloc_00798fc8)(local_68,8);
      }
LAB_003b7f3b:
      param_1[2] = lVar15;
      *param_1 = lVar12;
      param_1[1] = lVar4;
      return param_1;
    }
    uVar10 = *puVar3;
    lVar13 = puVar3[1];
    local_58 = puVar3[4];
    uStack_64 = *(undefined4 *)((longlong)puVar3 + 0x14);
    uStack_60 = *(undefined4 *)(puVar3 + 3);
    uStack_5c = *(undefined4 *)((longlong)puVar3 + 0x1c);
    uVar6 = puVar3[2];
    uVar7 = puVar3[3];
    if (-1 < lVar13) {
      puVar14 = (undefined4 *)(lVar4 + 0x18);
      lVar15 = 0;
      pcVar9 = (code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8;
      uVar16 = local_68;
      local_68 = *(undefined4 *)(puVar3 + 2);
      do {
        puVar8 = puVar3 + 5;
        if (lVar13 == 0) {
          lVar5 = 1;
        }
        else {
          (*pcVar9)(uVar6,uVar7,puVar2,uVar10,uVar16);
          lVar5 = (*(code *)PTR___rust_alloc_00799000)();
          if (lVar5 == 0) break;
          (*(code *)PTR_memcpy_00799008)(PTR_memcpy_00799008,lVar13);
          pcVar9 = (code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8;
        }
        *(longlong *)(puVar14 + -6) = lVar13;
        *(longlong *)(puVar14 + -4) = lVar5;
        *(longlong *)(puVar14 + -2) = lVar13;
        *puVar14 = local_68;
        puVar14[1] = uStack_64;
        puVar14[2] = uStack_60;
        puVar14[3] = uStack_5c;
        *(undefined8 *)(puVar14 + 4) = local_58;
        if (puVar8 == puVar2) {
          lVar15 = lVar15 + 1;
          if (lVar1 == 0) goto LAB_003b7f3b;
          goto LAB_003b7f23;
        }
        uVar10 = *puVar8;
        lVar13 = puVar3[6];
        local_58 = puVar3[9];
        local_68 = *(undefined4 *)(puVar3 + 7);
        uStack_64 = *(undefined4 *)((longlong)puVar3 + 0x3c);
        uStack_60 = *(undefined4 *)(puVar3 + 8);
        uStack_5c = *(undefined4 *)((longlong)puVar3 + 0x44);
        uVar6 = puVar3[7];
        uVar7 = puVar3[8];
        puVar14 = puVar14 + 0xc;
        lVar15 = lVar15 + 1;
        puVar3 = puVar8;
      } while (-1 < lVar13);
    }
    (*(code *)PTR_handle_error_00798ff0)();
  }
  else {
LAB_003b7d5b:
    (*(code *)PTR_handle_error_00798ff0)();
  }
                    /* WARNING: Does not return */
  pcVar9 = (code *)invalidInstructionException();
  (*pcVar9)();
}


