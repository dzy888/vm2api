// 006e80c0 <(),<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle_as_tokio[d7d91d38da47d894]::util::wake::Wake>::wake_by_ref::{closure#0}>

/* tokio[d7d91d38da47d894]::runtime::context::with_scheduler::<(),
   <tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle as
   tokio[d7d91d38da47d894]::util::wake::Wake>::wake_by_ref::{closure#0}> */

void __rustcall
tokio[d7d91d38da47d894]::runtime::context::with_scheduler::
<(),<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle_as_tokio[d7d91d38da47d894]::util::wake::Wake>::wake_by_ref::_closure_0_>
          (longlong *param_1,code *param_2)

{
  char cVar1;
  char *pcVar2;
  code *pcVar3;
  longlong lVar4;
  longlong *in_FS_OFFSET;
  longlong local_18;
  
  lVar4 = *in_FS_OFFSET;
  if (*(char *)(lVar4 + -0xf0) == '\0') {
    cVar1 = *(char *)(lVar4 + -0xf2);
joined_r0x006e810e:
    if (cVar1 != '\x02') {
      pcVar2 = *(char **)(lVar4 + -0x110);
      lVar4 = *param_1;
      if (((pcVar2 != (char *)0x0) && (*pcVar2 == '\0')) && (lVar4 == *(longlong *)(pcVar2 + 8))) {
        return;
      }
      goto LAB_006e8127;
    }
  }
  else if (*(char *)(lVar4 + -0xf0) == '\x01') {
    param_2 = std[6c98fd8553dbae28]::sys::thread_local::native::eager::destroy::
              <tokio[d7d91d38da47d894]::runtime::context::Context>;
    (*(code *)PTR_register_00799240)();
    *(undefined1 *)(lVar4 + -0xf0) = 0;
    cVar1 = *(char *)(lVar4 + -0xf2);
    goto joined_r0x006e810e;
  }
  lVar4 = *param_1;
LAB_006e8127:
  if (*(int *)(lVar4 + 0x284) == -1) {
    <tokio[d7d91d38da47d894]::runtime::park::Inner>::unpark
              (*(longlong *)(lVar4 + 0x240) + 0x10,param_2);
    return;
  }
  local_18 = (*(code *)PTR_wake_0079a830)();
  if (local_18 != 0) {
    (*(code *)PTR_unwrap_failed_00799028)
              (&anon_c49be660a078f24638188b28ebcb61a3_1_llvm_15508925077749842928,&local_18,
               &anon_c49be660a078f24638188b28ebcb61a3_21_llvm_15508925077749842928);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  return;
}


