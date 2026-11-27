// 0040da40 poll_frame

/* <http_body_util[89f9933de382700b]::limited::Limited<axum_core[61c49771464cda0a]::body::Body> as
   http_body[237d564c59cb9271]::Body>::poll_frame */

longlong * __rustcall
<http_body_util[89f9933de382700b]::limited::Limited<axum_core[61c49771464cda0a]::body::Body>as_http_body[237d564c59cb9271]::Body>
::poll_frame(longlong *param_1,undefined8 *param_2,ulonglong param_3)

{
  code *pcVar1;
  longlong *plVar2;
  int iVar3;
  undefined **ppuVar4;
  longlong *plVar5;
  longlong local_c8;
  longlong lStack_c0;
  longlong local_b8;
  longlong lStack_b0;
  longlong local_a8;
  longlong lStack_a0;
  longlong local_98;
  longlong local_78;
  longlong *local_70;
  undefined **local_68;
  ulonglong local_60;
  longlong *local_58;
  longlong local_50;
  longlong lStack_48;
  longlong local_40;
  longlong lStack_38;
  longlong local_30;
  longlong lStack_28;
  longlong local_20;
  
  ppuVar4 = (undefined **)*param_2;
  plVar5 = &local_78;
  plVar2 = (longlong *)(**(code **)(param_2[1] + 0x18))();
  if (local_78 != -3) {
    iVar3 = (int)local_78;
    if (iVar3 == -2) {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      plVar5 = (longlong *)&DAT_00000010;
      plVar2 = (longlong *)(*(code *)PTR___rust_alloc_00799000)();
      if (plVar2 == (longlong *)0x0) {
        (*(code *)PTR_handle_alloc_error_007991d8)();
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      *plVar2 = (longlong)local_70;
      plVar2[1] = (longlong)local_68;
      local_78 = -2;
      ppuVar4 = &anon_759b25d0f49402244ed1d2ce4dc43d04_312_llvm_4022685846690702743;
    }
    else {
      if (iVar3 == 3) {
        *param_1 = 3;
        return param_1;
      }
      plVar2 = local_70;
      param_3 = local_60;
      ppuVar4 = local_68;
      plVar5 = local_58;
      if (iVar3 == -1) {
        if ((ulonglong)param_2[2] < local_60) {
          param_2[2] = 0;
          (*(code *)local_70[4])();
          local_78 = -2;
          plVar2 = (longlong *)0x1;
          param_3 = local_60;
          ppuVar4 = (undefined **)anon_759b25d0f49402244ed1d2ce4dc43d04_308_llvm_4022685846690702743
          ;
        }
        else {
          param_2[2] = param_2[2] - local_60;
          local_98 = local_20;
          local_a8 = local_30;
          lStack_a0 = lStack_28;
          local_b8 = local_40;
          lStack_b0 = lStack_38;
          local_c8 = local_50;
          lStack_c0 = lStack_48;
          local_78 = -1;
        }
      }
      else {
        local_98 = local_20;
        local_a8 = local_30;
        lStack_a0 = lStack_28;
        local_b8 = local_40;
        lStack_b0 = lStack_38;
        local_c8 = local_50;
        lStack_c0 = lStack_48;
      }
    }
  }
  *param_1 = local_78;
  param_1[1] = (longlong)plVar2;
  param_1[2] = (longlong)ppuVar4;
  param_1[3] = param_3;
  param_1[4] = (longlong)plVar5;
  param_1[5] = local_c8;
  param_1[6] = lStack_c0;
  param_1[7] = local_b8;
  param_1[8] = lStack_b0;
  param_1[9] = local_a8;
  param_1[10] = lStack_a0;
  param_1[0xb] = local_98;
  return param_1;
}


