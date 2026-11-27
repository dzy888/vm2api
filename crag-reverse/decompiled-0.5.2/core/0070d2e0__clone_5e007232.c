// 0070d2e0 clone

/* <alloc[12e961f32105355]::vec::Vec<(i32, signal_hook_registry[9dd8ecc3788bb260]::Slot)> as
   core[c0acaeba6ab4c2e0]::clone::Clone>::clone */

void __rustcall
<alloc[12e961f32105355]::vec::Vec<(i32,signal_hook_registry[9dd8ecc3788bb260]::Slot)>as_core[c0acaeba6ab4c2e0]::clone::Clone>
::clone(longlong *param_1,undefined4 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  code *pcVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 *puVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 *puVar15;
  longlong lVar16;
  longlong local_60;
  longlong local_58;
  
  if (param_3 == 0) {
    local_60 = 0;
    local_58 = 8;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    lVar9 = (*(code *)PTR___rust_alloc_00799000)();
    if (lVar9 == 0) {
      (*(code *)PTR_handle_error_00798ff0)();
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
      <alloc[12e961f32105355]::vec::Vec<(i32,signal_hook_registry[9dd8ecc3788bb260]::Slot)>>
                (&local_60,param_3 * 0xc0);
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume();
    }
    puVar11 = param_2 + param_3 * 0x30;
    lVar14 = 0;
    lVar16 = param_3;
    local_60 = param_3;
    local_58 = lVar9;
    do {
      if (param_2 == puVar11) break;
      uVar2 = *param_2;
      lVar3 = *(longlong *)(param_2 + 6);
      if (lVar3 == 0) {
        lVar10 = 0x10;
      }
      else {
        puVar15 = *(undefined8 **)(param_2 + 4);
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        lVar10 = (*(code *)PTR___rust_alloc_00799000)();
        if (lVar10 == 0) {
          (*(code *)PTR_handle_error_00798ff0)();
LAB_0070d4b6:
                    /* WARNING: Does not return */
          pcVar8 = (code *)invalidInstructionException();
          (*pcVar8)();
        }
        lVar12 = 0;
        lVar13 = lVar3;
        do {
          if (lVar3 * 0x20 == lVar12) break;
          uVar4 = *puVar15;
          uVar5 = puVar15[1];
          plVar6 = (longlong *)puVar15[2];
          uVar7 = puVar15[3];
          LOCK();
          lVar1 = *plVar6;
          *plVar6 = *plVar6 + 1;
          UNLOCK();
          if (*plVar6 == 0 || SCARRY8(lVar1,1) != *plVar6 < 0) goto LAB_0070d4b6;
          lVar13 = lVar13 + -1;
          puVar15 = puVar15 + 4;
          *(undefined8 *)(lVar10 + lVar12) = uVar4;
          *(undefined8 *)(lVar10 + 8 + lVar12) = uVar5;
          *(longlong **)(lVar10 + 0x10 + lVar12) = plVar6;
          *(undefined8 *)(lVar10 + 0x18 + lVar12) = uVar7;
          lVar12 = lVar12 + 0x20;
        } while (lVar13 != 0);
      }
      lVar16 = lVar16 + -1;
      param_2 = param_2 + 0x30;
      lVar13 = lVar14 * 0xc0;
      *(undefined4 *)(lVar9 + lVar13) = uVar2;
      *(longlong *)(lVar9 + 8 + lVar13) = lVar3;
      *(longlong *)(lVar9 + 0x10 + lVar13) = lVar10;
      *(longlong *)(lVar9 + 0x18 + lVar13) = lVar3;
      (*(code *)PTR_memcpy_00799008)(lVar13,0xa0);
      lVar14 = lVar14 + 1;
    } while (lVar16 != 0);
  }
  param_1[2] = param_3;
  *param_1 = local_60;
  param_1[1] = local_58;
  return;
}


