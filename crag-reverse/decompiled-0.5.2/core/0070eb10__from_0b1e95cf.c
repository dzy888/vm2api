// 0070eb10 from

/* <bytes[e9829e187354639b]::bytes::Bytes as
   core[c0acaeba6ab4c2e0]::convert::From<alloc[12e961f32105355]::vec::Vec<u8>>>::from */

undefined8 * __rustcall
<bytes[e9829e187354639b]::bytes::Bytes_as_core[c0acaeba6ab4c2e0]::convert::From<alloc[12e961f32105355]::vec::Vec<u8>>>
::from(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  code *pcVar5;
  longlong *plVar6;
  undefined **ppuVar7;
  
  lVar1 = *param_2;
  lVar2 = param_2[2];
  if (lVar2 == lVar1) {
    if (lVar2 == 0) {
      param_1[1] = 1;
      param_1[2] = 0;
      param_1[3] = 0;
      ppuVar7 = &anon_e1419182c2f95519b50f33ebe2147d9d_4_llvm_4643690396931717954;
    }
    else {
      uVar3 = param_2[1];
      if ((uVar3 & 1) == 0) {
        param_1[1] = uVar3;
        param_1[2] = lVar2;
        param_1[3] = uVar3 | 1;
        ppuVar7 = (undefined **)PTR_PROMOTABLE_EVEN_VTABLE_0079a578;
      }
      else {
        param_1[1] = uVar3;
        param_1[2] = lVar2;
        param_1[3] = uVar3;
        ppuVar7 = (undefined **)PTR_PROMOTABLE_ODD_VTABLE_0079a580;
      }
    }
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    plVar6 = (longlong *)(*(code *)PTR___rust_alloc_00799000)();
    if (plVar6 == (longlong *)0x0) {
      (*(code *)PTR_handle_alloc_error_007991d8)();
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    lVar4 = param_2[1];
    *plVar6 = lVar4;
    plVar6[1] = lVar1;
    plVar6[2] = 1;
    param_1[1] = lVar4;
    param_1[2] = lVar2;
    param_1[3] = plVar6;
    ppuVar7 = &bytes[e9829e187354639b]::bytes::SHARED_VTABLE;
  }
  *param_1 = ppuVar7;
  return param_1;
}


