// 006c0160 from

/* <axum_core[61c49771464cda0a]::body::Body as
   core[c0acaeba6ab4c2e0]::convert::From<bytes[e9829e187354639b]::bytes::Bytes>>::from */

void __rustcall
<axum_core[61c49771464cda0a]::body::Body_as_core[c0acaeba6ab4c2e0]::convert::From<bytes[e9829e187354639b]::bytes::Bytes>>
::from(longlong *param_1)

{
  longlong lVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong unaff_R14;
  longlong unaff_R15;
  
  lVar1 = param_1[2];
  if (lVar1 == 0) {
    lVar4 = 0;
    (**(code **)(*param_1 + 0x20))(*param_1,0);
  }
  else {
    lVar4 = *param_1;
    unaff_R15 = param_1[1];
    unaff_R14 = param_1[3];
  }
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  plVar3 = (longlong *)(*(code *)PTR___rust_alloc_00799000)();
  if (plVar3 == (longlong *)0x0) {
    (*(code *)PTR_handle_alloc_error_007991d8)();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  *plVar3 = lVar4;
  plVar3[1] = unaff_R15;
  plVar3[2] = lVar1;
  plVar3[3] = unaff_R14;
  return;
}


