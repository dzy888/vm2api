// 000659d0 <std[6c98fd8553dbae28]::env::VarError>

/* WARNING: Switch with 1 destination removed at 0x00065a1e */
/* <core[c0acaeba6ab4c2e0]::io::error::Error>::new::<std[6c98fd8553dbae28]::env::VarError> */

longlong __rustcall
<core[c0acaeba6ab4c2e0]::io::error::Error>::new::<std[6c98fd8553dbae28]::env::VarError>
          (undefined8 param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  longlong lVar7;
  
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
  puVar6 = (undefined4 *)(*(code *)PTR___rust_alloc_000c3a90)();
  if (puVar6 == (undefined4 *)0x0) {
    (*(code *)PTR_handle_alloc_error_000c3d10)();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  uVar1 = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(puVar6 + 4) = uVar1;
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *puVar6 = *param_2;
  puVar6[1] = uVar3;
  puVar6[2] = uVar4;
  puVar6[3] = uVar5;
  lVar7 = (*(code *)PTR_custom_owner_from_box_000c3ee0)
                    (uVar1,&PTR_<std[6c98fd8553dbae28]::env::VarError>_000c0b38);
  return lVar7 + 1;
}


