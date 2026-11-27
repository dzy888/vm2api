// 006c0080 from

/* <axum_core[61c49771464cda0a]::body::Body as
   core[c0acaeba6ab4c2e0]::convert::From<alloc[12e961f32105355]::borrow::Cow<str>>>::from */

void __rustcall
<axum_core[61c49771464cda0a]::body::Body_as_core[c0acaeba6ab4c2e0]::convert::From<alloc[12e961f32105355]::borrow::Cow<str>>>
::from(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  longlong unaff_R14;
  undefined8 unaff_R15;
  undefined **local_48;
  longlong local_40;
  longlong local_38;
  undefined8 local_30;
  
  if (*param_1 == -1) {
    local_40 = param_1[1];
    local_38 = param_1[2];
    ppuVar3 = &PTR_static_clone_00792f08;
    if (local_38 == 0) {
      ppuVar3 = (undefined **)0x0;
    }
    local_30 = 0;
  }
  else {
    (*(code *)PTR_from_00799298)();
    if (local_38 == 0) {
      ppuVar3 = (undefined **)0x0;
      (*(code *)local_48[4])(param_4,0);
      local_40 = unaff_R14;
      local_30 = unaff_R15;
    }
    else {
      ppuVar3 = local_48;
    }
  }
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar2 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar2 == (undefined8 *)0x0) {
    (*(code *)PTR_handle_alloc_error_007991d8)();
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  *puVar2 = ppuVar3;
  puVar2[1] = local_40;
  puVar2[2] = local_38;
  puVar2[3] = local_30;
  return;
}


