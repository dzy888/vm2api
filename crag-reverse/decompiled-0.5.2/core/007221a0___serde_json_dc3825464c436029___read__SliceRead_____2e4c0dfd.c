// 007221a0 <serde_json[dc3825464c436029]::read::SliceRead,()>

/* WARNING: Switch with 1 destination removed at 0x00722219 */
/* serde_json[dc3825464c436029]::read::error::<serde_json[dc3825464c436029]::read::SliceRead, ()> */

void __rustcall
serde_json[dc3825464c436029]::read::error::<serde_json[dc3825464c436029]::read::SliceRead,()>
          (longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 extraout_XMM0_Da;
  
  uVar2 = param_1[2];
  if ((ulonglong)param_1[1] < uVar2) {
    (*(code *)PTR_slice_index_fail_007993c8)
              (&anon_d15e6213c59156a99525d62e3a7cf6d1_8_llvm_13084535133562080302);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar8 = *param_1;
  lVar9 = lVar8 + uVar2;
  lVar7 = (**(code **)PTR_FN_0079ab30)();
  if (lVar7 == 1) {
    lVar9 = (lVar9 - lVar8) + 1;
  }
  else {
    lVar9 = 0;
  }
  lVar8 = (**(code **)PTR_FN_0079ab38)(extraout_XMM0_Da,lVar8 + lVar9);
  uVar1 = param_2[2];
  uVar4 = *param_2;
  uVar5 = param_2[1];
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar6 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar6 == (undefined8 *)0x0) {
    (*(code *)PTR_handle_alloc_error_007991d8)();
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  puVar6[4] = uVar2 - lVar9;
  puVar6[2] = uVar1;
  puVar6[3] = lVar8 + 1;
  *puVar6 = uVar4;
  puVar6[1] = uVar5;
  return;
}


