// 0058cea0 <tokio[d7d91d38da47d894]::runtime::task::error::JoinError>

/* WARNING: Switch with 1 destination removed at 0x0058ceef */
/* <core[c0acaeba6ab4c2e0]::io::error::Error>::new::<tokio[d7d91d38da47d894]::runtime::task::error::JoinError>
    */

longlong __rustcall
<core[c0acaeba6ab4c2e0]::io::error::Error>::new::
<tokio[d7d91d38da47d894]::runtime::task::error::JoinError>(undefined4 *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  longlong lVar7;
  
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar6 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar6 == (undefined4 *)0x0) {
    (*(code *)PTR_handle_alloc_error_007991d8)();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  uVar1 = *(undefined8 *)(param_1 + 4);
  *(undefined8 *)(puVar6 + 4) = uVar1;
  uVar3 = param_1[1];
  uVar4 = param_1[2];
  uVar5 = param_1[3];
  *puVar6 = *param_1;
  puVar6[1] = uVar3;
  puVar6[2] = uVar4;
  puVar6[3] = uVar5;
  lVar7 = (*(code *)PTR_custom_owner_from_box_00799f90)
                    (uVar1,&anon_759b25d0f49402244ed1d2ce4dc43d04_321_llvm_4022685846690702743);
  return lVar7 + 1;
}


