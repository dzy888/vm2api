// 0071c260 peek_error

/* WARNING: Switch with 1 destination removed at 0x0071c2df */
/* <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::StrRead>>::peek_error
    */

void __rustcall
<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::StrRead>>::
peek_error(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined4 extraout_XMM0_Da;
  
  uVar9 = *(longlong *)(param_1 + 0x28) + 1;
  if (*(ulonglong *)(param_1 + 0x20) <= uVar9) {
    uVar9 = *(ulonglong *)(param_1 + 0x20);
  }
  lVar6 = *(longlong *)(param_1 + 0x18);
  lVar8 = lVar6 + uVar9;
  lVar5 = (**(code **)PTR_FN_0079ab30)();
  if (lVar5 == 1) {
    lVar8 = (lVar8 - lVar6) + 1;
  }
  else {
    lVar8 = 0;
  }
  lVar6 = (**(code **)PTR_FN_0079ab38)(extraout_XMM0_Da,lVar6 + lVar8);
  uVar1 = param_2[2];
  uVar3 = *param_2;
  uVar4 = param_2[1];
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar7 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar7 == (undefined8 *)0x0) {
    (*(code *)PTR_handle_alloc_error_007991d8)();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  puVar7[4] = uVar9 - lVar8;
  puVar7[2] = uVar1;
  puVar7[3] = lVar6 + 1;
  *puVar7 = uVar3;
  puVar7[1] = uVar4;
  return;
}


