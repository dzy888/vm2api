// 00774760 custom_owner_from_box

/* alloc[12e961f32105355]::io::error::custom_owner_from_box */

void __rustcall
alloc[12e961f32105355]::io::error::custom_owner_from_box
          (undefined1 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined7 uStack_17;
  
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar2 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar2 == (undefined8 *)0x0) {
    (*(code *)PTR_handle_alloc_error_007991d8)();
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  puVar2[4] = CONCAT71(uStack_17,param_1);
  puVar2[2] = custom_owner_from_box::drop_box_raw::
              <dyn_core[c0acaeba6ab4c2e0]::error::Error_core[c0acaeba6ab4c2e0]::marker::Send_core[c0acaeba6ab4c2e0]::marker::Sync>
  ;
  puVar2[3] = custom_owner_from_box::drop_box_raw::<core[c0acaeba6ab4c2e0]::io::error::Custom>;
  *puVar2 = param_2;
  puVar2[1] = param_3;
  return;
}


