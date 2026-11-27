// 006b8780 clone

/* <alloc[12e961f32105355]::vec::Vec<http[56314f485c23ccf6]::header::map::ExtraValue<bytes[e9829e187354639b]::bytes::Bytes>>
   as core[c0acaeba6ab4c2e0]::clone::Clone>::clone */

void __rustcall
<alloc[12e961f32105355]::vec::Vec<http[56314f485c23ccf6]::header::map::ExtraValue<bytes[e9829e187354639b]::bytes::Bytes>>as_core[c0acaeba6ab4c2e0]::clone::Clone>
::clone(ulonglong *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong local_98;
  ulonglong local_90;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  uVar3 = *(ulonglong *)(param_2 + 0x10);
  uVar12 = uVar3 * 0x40;
  if (uVar12 < 0x7ffffffffffffff9 && uVar3 >> 0x3a == 0) goto LAB_006b87c6;
  puVar8 = (ulonglong *)0x0;
  do {
    param_1 = puVar8;
    (*(code *)PTR_handle_error_00798ff0)();
    param_2 = uVar12;
LAB_006b87c6:
    if (uVar12 == 0) {
      local_98 = 0;
      local_90 = 8;
      goto LAB_006b889c;
    }
    puVar10 = *(undefined8 **)(param_2 + 8);
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    local_90 = (*(code *)PTR___rust_alloc_00799000)();
    puVar8 = (ulonglong *)&DAT_00000008;
  } while (local_90 == 0);
  local_98 = uVar3;
  if (uVar3 != 0) {
    uVar11 = 0;
    uVar9 = 0;
    do {
      if (uVar12 == uVar11) break;
      (**(code **)puVar10[4])(puVar10[6],puVar10[5]);
      uVar9 = uVar9 + 1;
      uVar4 = *puVar10;
      uVar5 = puVar10[1];
      uVar6 = puVar10[2];
      uVar7 = puVar10[3];
      puVar10 = puVar10 + 8;
      puVar1 = (undefined8 *)(local_90 + 0x30 + uVar11);
      *puVar1 = local_48;
      puVar1[1] = uStack_40;
      puVar1 = (undefined8 *)(local_90 + 0x20 + uVar11);
      *puVar1 = local_58;
      puVar1[1] = uStack_50;
      *(undefined8 *)(local_90 + uVar11) = uVar4;
      ((undefined8 *)(local_90 + uVar11))[1] = uVar5;
      local_68 = (undefined4)uVar6;
      uStack_64 = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_60 = (undefined4)uVar7;
      uStack_5c = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined4 *)(local_90 + 0x10 + uVar11);
      *puVar2 = local_68;
      puVar2[1] = uStack_64;
      puVar2[2] = uStack_60;
      puVar2[3] = uStack_5c;
      uVar11 = uVar11 + 0x40;
    } while (uVar3 != uVar9);
  }
LAB_006b889c:
  param_1[2] = uVar3;
  *param_1 = local_98;
  param_1[1] = local_90;
  return;
}


