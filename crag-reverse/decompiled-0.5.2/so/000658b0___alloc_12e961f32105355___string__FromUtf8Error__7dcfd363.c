// 000658b0 <alloc[12e961f32105355]::string::FromUtf8Error>

/* WARNING: Switch with 1 destination removed at 0x00065905 */
/* <core[c0acaeba6ab4c2e0]::io::error::Error>::new::<alloc[12e961f32105355]::string::FromUtf8Error>
    */

longlong __rustcall
<core[c0acaeba6ab4c2e0]::io::error::Error>::new::<alloc[12e961f32105355]::string::FromUtf8Error>
          (undefined8 param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  longlong lVar11;
  
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
  puVar10 = (undefined4 *)(*(code *)PTR___rust_alloc_000c3a90)();
  if (puVar10 == (undefined4 *)0x0) {
    (*(code *)PTR_handle_alloc_error_000c3d10)();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(puVar10 + 8) = uVar1;
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  uVar7 = param_2[5];
  uVar8 = param_2[6];
  uVar9 = param_2[7];
  puVar10[4] = param_2[4];
  puVar10[5] = uVar7;
  puVar10[6] = uVar8;
  puVar10[7] = uVar9;
  *puVar10 = uVar3;
  puVar10[1] = uVar4;
  puVar10[2] = uVar5;
  puVar10[3] = uVar6;
  lVar11 = (*(code *)PTR_custom_owner_from_box_000c3ee0)
                     (uVar1,&PTR_<alloc[12e961f32105355]::string::FromUtf8Error>_000c0ac0);
  return lVar11 + 1;
}


