// 00587b30 poll

/* <http_body_util[89f9933de382700b]::combinators::collect::Collect<http_body_util[89f9933de382700b]::limited::Limited<axum_core[61c49771464cda0a]::body::Body>>
   as core[c0acaeba6ab4c2e0]::future::future::Future>::poll */

longlong * __rustcall
<http_body_util[89f9933de382700b]::combinators::collect::Collect<http_body_util[89f9933de382700b]::limited::Limited<axum_core[61c49771464cda0a]::body::Body>>as_core[c0acaeba6ab4c2e0]::future::future::Future>
::poll(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  
  <http_body_util[89f9933de382700b]::limited::Limited<axum_core[61c49771464cda0a]::body::Body>as_http_body[237d564c59cb9271]::Body>
  ::poll_frame(&local_90,param_2 + 0x10);
  if (local_90 != 3) {
    do {
      if (local_90 == -2) {
        *param_1 = -2;
        param_1[1] = local_88;
        param_1[2] = local_80;
        return param_1;
      }
      if (local_90 == -3) {
        lVar1 = *param_2;
        *param_2 = -2;
        if (lVar1 == -2) {
          (*(code *)PTR_expect_failed_00799440)
                    (local_80,&anon_92c4c5dab1af02541b6de8b875afdfcf_102_llvm_8405253652347736786);
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::
          <http_body[237d564c59cb9271]::frame::Frame<bytes[e9829e187354639b]::bytes::Bytes>>
                    (&local_90,0x15);
                    /* WARNING: Subroutine does not return */
          _Unwind_Resume();
        }
        param_1[0xf] = param_2[0xf];
        lVar3 = param_2[0xe];
        param_1[0xd] = param_2[0xd];
        param_1[0xe] = lVar3;
        lVar3 = param_2[0xc];
        param_1[0xb] = param_2[0xb];
        param_1[0xc] = lVar3;
        lVar3 = param_2[10];
        param_1[9] = param_2[9];
        param_1[10] = lVar3;
        lVar3 = param_2[1];
        lVar4 = param_2[2];
        lVar5 = param_2[3];
        lVar6 = param_2[4];
        lVar7 = param_2[5];
        lVar8 = param_2[6];
        lVar9 = param_2[8];
        param_1[7] = param_2[7];
        param_1[8] = lVar9;
        param_1[5] = lVar7;
        param_1[6] = lVar8;
        param_1[3] = lVar5;
        param_1[4] = lVar6;
        param_1[1] = lVar3;
        param_1[2] = lVar4;
        *param_1 = lVar1;
        return param_1;
      }
      if ((int)*param_2 == -2) {
        (*(code *)PTR_unwrap_failed_00799278)();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      <http_body_util[89f9933de382700b]::collected::Collected<bytes[e9829e187354639b]::bytes::Bytes>>
      ::push_frame(param_2,&local_90);
      <http_body_util[89f9933de382700b]::limited::Limited<axum_core[61c49771464cda0a]::body::Body>as_http_body[237d564c59cb9271]::Body>
      ::poll_frame(&local_90,param_2 + 0x10,param_3);
    } while (local_90 != 3);
  }
  *param_1 = -3;
  return param_1;
}


