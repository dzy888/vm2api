// 003c2e10 clone

/* <alloc[12e961f32105355]::vec::Vec<(alloc[12e961f32105355]::string::String,
   alloc[12e961f32105355]::string::String)> as core[c0acaeba6ab4c2e0]::clone::Clone>::clone */

void __rustcall
<alloc[12e961f32105355]::vec::Vec<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String)>as_core[c0acaeba6ab4c2e0]::clone::Clone>
::clone(ulonglong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined *puVar4;
  ulonglong *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong local_88;
  ulonglong local_80;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  uVar3 = *(ulonglong *)(param_2 + 0x10);
  if (uVar3 < 0x2aaaaaaaaaaaaab) goto LAB_003c2e4b;
  puVar5 = (ulonglong *)0x0;
  do {
    param_1 = puVar5;
    (*(code *)PTR_handle_error_00798ff0)();
LAB_003c2e4b:
    if (uVar3 * 0x30 == 0) {
      local_88 = 0;
      local_80 = 8;
      goto LAB_003c2f1a;
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    local_80 = (*(code *)PTR___rust_alloc_00799000)();
    puVar4 = PTR_clone_00798fd0;
    puVar5 = (ulonglong *)&DAT_00000008;
  } while (local_80 == 0);
  local_88 = uVar3;
  if (uVar3 != 0) {
    lVar6 = 0;
    uVar7 = 0;
    do {
      if (uVar3 * 0x30 == lVar6) break;
      (*(code *)puVar4)();
      (*(code *)puVar4)();
      uVar7 = uVar7 + 1;
      puVar2 = (undefined8 *)(local_80 + 0x20 + lVar6);
      *puVar2 = local_40;
      puVar2[1] = uStack_38;
      puVar2 = (undefined8 *)(local_80 + 0x10 + lVar6);
      *puVar2 = local_50;
      puVar2[1] = uStack_48;
      puVar1 = (undefined4 *)(local_80 + lVar6);
      *puVar1 = local_60;
      puVar1[1] = uStack_5c;
      puVar1[2] = uStack_58;
      puVar1[3] = uStack_54;
      lVar6 = lVar6 + 0x30;
    } while (uVar3 != uVar7);
  }
LAB_003c2f1a:
  param_1[2] = uVar3;
  *param_1 = local_88;
  param_1[1] = local_80;
  return;
}


