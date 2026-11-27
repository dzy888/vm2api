// 006fa900 globals_init

/* tokio[d7d91d38da47d894]::signal::registry::globals_init */

undefined8 * __rustcall tokio[d7d91d38da47d894]::signal::registry::globals_init(undefined8 *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 local_40 [8];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  int local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  
  (*(code *)PTR_pair_0079a8f8)();
  if (local_28 == 1) {
    (*(code *)PTR_unwrap_failed_00799028)
              (&anon_c49be660a078f24638188b28ebcb61a3_1_llvm_15508925077749842928,local_40,
               &anon_c49be660a078f24638188b28ebcb61a3_38_llvm_15508925077749842928);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  local_38 = local_24;
  uStack_34 = uStack_20;
  uStack_30 = 0;
  iVar2 = (*(code *)PTR___libc_current_sigrtmax_0079a908)();
  <alloc[12e961f32105355]::vec::Vec<tokio[d7d91d38da47d894]::signal::unix::SignalInfo>as_alloc[12e961f32105355]::vec::spec_from_iter::SpecFromIter<tokio[d7d91d38da47d894]::signal::unix::SignalInfo,core[c0acaeba6ab4c2e0]::iter::adapters::take::Take<core[c0acaeba6ab4c2e0]::iter::sources::repeat_with::RepeatWith<<tokio[d7d91d38da47d894]::signal::unix::SignalInfo_as_core[c0acaeba6ab4c2e0]::default::Default>::default>>>>
  ::from_iter(&local_28,(longlong)iVar2);
  auVar3 = <alloc[12e961f32105355]::vec::Vec<tokio[d7d91d38da47d894]::signal::unix::SignalInfo>>::
           into_boxed_slice(&local_28);
  *param_1 = CONCAT44(local_38,uStack_34);
  *(undefined1 (*) [16])(param_1 + 1) = auVar3;
  return param_1;
}


