// 0070f260 split_to

/* <bytes[e9829e187354639b]::bytes_mut::BytesMut>::split_to */

longlong * __rustcall
<bytes[e9829e187354639b]::bytes_mut::BytesMut>::split_to
          (longlong *param_1,longlong *param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong *local_58;
  code *pcStack_50;
  ulonglong *local_48;
  code *local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  uVar2 = param_2[1];
  local_38 = param_3;
  if (uVar2 < param_3) {
    local_58 = &local_38;
    pcStack_50 = <usize_as_core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt;
    local_48 = &local_30;
    local_40 = <usize_as_core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt;
    local_30 = uVar2;
    (*(code *)PTR_panic_fmt_007991a8)
              (local_48,&
                        PTR_anon_d4d3cd51d1d91a17bb767b00236b3a9b_125_llvm_17589326713533067298_007959b0
              );
  }
  else {
    uVar3 = param_2[3];
    if ((uVar3 & 1) == 0) {
      LOCK();
      plVar4 = (longlong *)(uVar3 + 0x20);
      lVar1 = *plVar4;
      *plVar4 = *plVar4 + 1;
      UNLOCK();
      if (*plVar4 != 0 && SCARRY8(lVar1,1) == *plVar4 < 0) goto LAB_0070f2f5;
      (*(code *)PTR_abort_0079aa98)();
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    plVar4 = (longlong *)(*(code *)PTR___rust_alloc_00799000)();
    if (plVar4 != (longlong *)0x0) {
      uVar5 = uVar3 >> 5;
      lVar1 = *param_2;
      *plVar4 = uVar5 + param_2[2];
      plVar4[1] = lVar1 - uVar5;
      plVar4[2] = uVar2 + uVar5;
      plVar4[3] = (ulonglong)((uint)(uVar3 >> 2) & 7);
      plVar4[4] = 2;
      param_2[3] = (longlong)plVar4;
LAB_0070f2f5:
      local_58 = (ulonglong *)*param_2;
      pcStack_50 = (code *)param_2[1];
      local_48 = (ulonglong *)param_2[2];
      local_40 = (code *)param_2[3];
      (*(code *)PTR_advance_unchecked_00799a50)();
      param_1[2] = param_3;
      param_1[3] = (longlong)local_40;
      *param_1 = (longlong)local_58;
      param_1[1] = param_3;
      return param_1;
    }
  }
  (*(code *)PTR_handle_alloc_error_007991d8)();
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::<bytes[e9829e187354639b]::bytes_mut::BytesMut>
            (&local_58,0x28);
                    /* WARNING: Subroutine does not return */
  _Unwind_Resume();
}


