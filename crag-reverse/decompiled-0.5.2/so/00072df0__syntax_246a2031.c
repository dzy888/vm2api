// 00072df0 syntax

/* <serde_json[dc3825464c436029]::error::Error>::syntax */

void __rustcall
<serde_json[dc3825464c436029]::error::Error>::syntax
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = param_1[2];
  uVar3 = *param_1;
  uVar4 = param_1[1];
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
  puVar5 = (undefined8 *)(*(code *)PTR___rust_alloc_000c3a90)();
  if (puVar5 == (undefined8 *)0x0) {
    (*(code *)PTR_handle_alloc_error_000c3d10)();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  puVar5[4] = param_3;
  puVar5[2] = uVar1;
  puVar5[3] = param_2;
  *puVar5 = uVar3;
  puVar5[1] = uVar4;
  return;
}


