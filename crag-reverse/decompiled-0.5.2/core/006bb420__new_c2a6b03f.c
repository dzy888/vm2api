// 006bb420 new

/* <hyper[c4782d5b5c5e3493]::proto::h1::encode::ChunkSize>::new */

undefined8 * __rustcall
<hyper[c4782d5b5c5e3493]::proto::h1::encode::ChunkSize>::new(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined1 local_39;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined8 *local_18;
  undefined *local_10;
  
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  local_18 = &local_20;
  local_10 = PTR_fmt_00799a88;
  local_20 = param_2;
  cVar2 = (*(code *)PTR_write_007994b0)(&local_18,&DAT_0018c880);
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 2) = local_28;
    *param_1 = local_38;
    param_1[1] = uStack_30;
    return param_1;
  }
  (*(code *)PTR_unwrap_failed_00799028)
            (&DAT_00792a00,&local_39,
             &PTR_anon_d3057478e380898db632effa827bd31f_4_llvm_2674179329317868992_00792a70);
  pcVar1 = (code *)swi(3);
  puVar3 = (undefined8 *)(*pcVar1)();
  return puVar3;
}


