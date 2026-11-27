// 006ef040 park_timeout

/* <tokio[d7d91d38da47d894]::runtime::driver::Driver>::park_timeout */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::driver::Driver>::park_timeout
          (longlong *param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  code *pcVar2;
  
  plVar1 = param_1 + 1;
  if (*param_1 == 0) {
    <tokio[d7d91d38da47d894]::runtime::time::Driver>::park_internal(plVar1);
    return;
  }
  if (*plVar1 == -1) {
    <tokio[d7d91d38da47d894]::runtime::park::Inner>::park_timeout(param_1[2] + 0x10,param_3,param_4)
    ;
    return;
  }
  if (*(int *)(param_2 + 0x44) == -1) {
    (*(code *)PTR_expect_failed_00799440)
              (param_4,&anon_c49be660a078f24638188b28ebcb61a3_9_llvm_15508925077749842928);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  <tokio[d7d91d38da47d894]::runtime::io::driver::Driver>::turn(plVar1);
  <tokio[d7d91d38da47d894]::runtime::signal::Driver>::process(plVar1);
  <tokio[d7d91d38da47d894]::process::imp::orphan::OrphanQueueImpl<std[6c98fd8553dbae28]::process::Child>>
  ::reap_orphans(tokio[d7d91d38da47d894]::process::imp::get_orphan_queue::ORPHAN_QUEUE,param_1 + 10)
  ;
  return;
}


