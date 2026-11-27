// 003bfab0 clone

/* <alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::string::String> as
   core[c0acaeba6ab4c2e0]::clone::Clone>::clone */

void __rustcall
<alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::string::String>as_core[c0acaeba6ab4c2e0]::clone::Clone>
::clone(ulonglong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong local_68;
  ulonglong local_60;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  uVar2 = *(ulonglong *)(param_2 + 0x10);
  if (uVar2 < 0x555555555555556) goto LAB_003bfaec;
  puVar3 = (ulonglong *)0x0;
  do {
    param_1 = puVar3;
    (*(code *)PTR_handle_error_00798ff0)();
LAB_003bfaec:
    if (uVar2 * 0x18 == 0) {
      local_68 = 0;
      local_60 = 8;
      goto LAB_003bfb77;
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    local_60 = (*(code *)PTR___rust_alloc_00799000)();
    puVar3 = (ulonglong *)&DAT_00000008;
  } while (local_60 == 0);
  local_68 = uVar2;
  if (uVar2 != 0) {
    lVar4 = 0;
    uVar5 = 0;
    do {
      if (uVar2 * 0x18 == lVar4) break;
      (*(code *)PTR_clone_00798fd0)();
      uVar5 = uVar5 + 1;
      *(undefined8 *)(local_60 + 0x10 + lVar4) = local_38;
      puVar1 = (undefined4 *)(local_60 + lVar4);
      *puVar1 = local_48;
      puVar1[1] = uStack_44;
      puVar1[2] = uStack_40;
      puVar1[3] = uStack_3c;
      lVar4 = lVar4 + 0x18;
    } while (uVar2 != uVar5);
  }
LAB_003bfb77:
  param_1[2] = uVar2;
  *param_1 = local_68;
  param_1[1] = local_60;
  return;
}


