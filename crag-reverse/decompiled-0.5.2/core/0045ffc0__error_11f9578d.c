// 0045ffc0 error

/* WARNING: Switch with 1 destination removed at 0x0045ffde */
/* <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>::error
    */

void __rustcall
<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>::
error(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  uVar5 = (*(code *)PTR_position_00799950)();
  uVar1 = param_2[2];
  uVar3 = *param_2;
  uVar4 = param_2[1];
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar6 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar6 == (undefined8 *)0x0) {
    (*(code *)PTR_handle_alloc_error_007991d8)();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  puVar6[4] = param_3;
  puVar6[2] = uVar1;
  puVar6[3] = uVar5;
  *puVar6 = uVar3;
  puVar6[1] = uVar4;
  return;
}


