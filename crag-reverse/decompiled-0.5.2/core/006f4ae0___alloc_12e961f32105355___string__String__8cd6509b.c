// 006f4ae0 <alloc[12e961f32105355]::string::String>

/* WARNING: Switch with 1 destination removed at 0x006f4b3e */
/* <core[c0acaeba6ab4c2e0]::io::error::Error>::new::<alloc[12e961f32105355]::string::String> */

longlong __rustcall
<core[c0acaeba6ab4c2e0]::io::error::Error>::new::<alloc[12e961f32105355]::string::String>
          (undefined8 param_1,undefined4 *param_2)

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
  uVar1 = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(puVar6 + 4) = uVar1;
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *puVar6 = *param_2;
  puVar6[1] = uVar3;
  puVar6[2] = uVar4;
  puVar6[3] = uVar5;
  lVar7 = (*(code *)PTR_custom_owner_from_box_00799f90)
                    (uVar1,&
                           PTR_<<alloc[12e961f32105355]::boxed::Box<dyn_core[c0acaeba6ab4c2e0]::error::Error_core[c0acaeba6ab4c2e0]::marker::Send_core[c0acaeba6ab4c2e0]::marker::Sync>as_core[c0acaeba6ab4c2e0]::convert::From<alloc[12e961f32105355]::string::String>>::from::StringError>_00794838
                    );
  return lVar7 + 1;
}


