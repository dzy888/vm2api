// 001a6500 error

/* WARNING: Switch with 1 destination removed at 0x001a657a */
/* <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::StrRead>>::error
    */

void __rustcall
<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::StrRead>>::error
          (longlong param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined4 extraout_XMM0_Da;
  
  uVar1 = *(ulonglong *)(param_1 + 0x28);
  if (*(ulonglong *)(param_1 + 0x20) < uVar1) {
    (*(code *)PTR_slice_index_fail_00219d80)
              (&anon_d15e6213c59156a99525d62e3a7cf6d1_8_llvm_13084535133562080302);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar7 = *(longlong *)(param_1 + 0x18);
  lVar9 = lVar7 + uVar1;
  lVar6 = (**(code **)PTR_FN_0021a478)();
  if (lVar6 == 1) {
    lVar9 = (lVar9 - lVar7) + 1;
  }
  else {
    lVar9 = 0;
  }
  lVar7 = (**(code **)PTR_FN_0021a480)(extraout_XMM0_Da,lVar7 + lVar9);
  uVar2 = param_2[2];
  uVar4 = *param_2;
  uVar5 = param_2[1];
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
  puVar8 = (undefined8 *)(*(code *)PTR___rust_alloc_00219c88)();
  if (puVar8 == (undefined8 *)0x0) {
    (*(code *)PTR_handle_alloc_error_00219eb0)();
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  puVar8[4] = uVar1 - lVar9;
  puVar8[2] = uVar2;
  puVar8[3] = lVar7 + 1;
  *puVar8 = uVar4;
  puVar8[1] = uVar5;
  return;
}


