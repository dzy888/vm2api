// 006a3270 into_response

/* <axum_core[61c49771464cda0a]::response::into_response_parts::TryIntoHeaderError<core[c0acaeba6ab4c2e0]::convert::Infallible,
   http[56314f485c23ccf6]::header::value::InvalidHeaderValue> as
   axum_core[61c49771464cda0a]::response::into_response::IntoResponse>::into_response */

longlong __rustcall
<axum_core[61c49771464cda0a]::response::into_response_parts::TryIntoHeaderError<core[c0acaeba6ab4c2e0]::convert::Infallible,http[56314f485c23ccf6]::header::value::InvalidHeaderValue>as_axum_core[61c49771464cda0a]::response::into_response::IntoResponse>
::into_response(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  undefined1 local_59;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 *local_40;
  undefined **local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_58 = 0;
  uStack_50 = 1;
  local_48 = 0;
  local_30 = 0x60000020;
  local_40 = &local_58;
  local_38 = &anon_d3057478e380898db632effa827bd31f_636_llvm_2674179329317868992;
  cVar2 = (*(code *)PTR_fmt_0079a3c8)();
  if (cVar2 != '\0') {
    (*(code *)PTR_unwrap_failed_00799028)
              (anon_d3057478e380898db632effa827bd31f_356_llvm_2674179329317868992,&local_59,
               &anon_d3057478e380898db632effa827bd31f_639_llvm_2674179329317868992);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  local_18 = local_48;
  local_28 = (undefined4)local_58;
  uStack_24 = local_58._4_4_;
  uStack_20 = (undefined4)uStack_50;
  uStack_1c = uStack_50._4_4_;
  (*(code *)PTR_into_response_0079a3d0)();
  *(undefined2 *)(param_1 + 0x68) = 500;
  return param_1;
}


