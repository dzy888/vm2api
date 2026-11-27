// 006fe6a0 drop

/* <tokio[d7d91d38da47d894]::runtime::context::runtime::EnterRuntimeGuard as
   core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::context::runtime::EnterRuntimeGuard_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(longlong param_1,code *param_2)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  code *pcVar4;
  int iVar5;
  longlong *plVar6;
  longlong *in_FS_OFFSET;
  undefined4 uVar7;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar7 = (undefined4)uVar1;
  lVar3 = *in_FS_OFFSET;
  if (*(char *)(lVar3 + -0xf0) == '\0') {
    cVar2 = *(char *)(lVar3 + -0xf2);
  }
  else {
    if (*(char *)(lVar3 + -0xf0) != '\x01') goto LAB_006fe754;
    param_2 = std[6c98fd8553dbae28]::sys::thread_local::native::eager::destroy::
              <tokio[d7d91d38da47d894]::runtime::context::Context>;
    uVar7 = (*(code *)PTR_register_00799240)();
    *(undefined1 *)(lVar3 + -0xf0) = 0;
    cVar2 = *(char *)(lVar3 + -0xf2);
  }
  if (cVar2 == '\x02') {
    (*(code *)PTR_panic_00799338)(uVar7,&PTR_s__vendor_tokio_1_54_1_src_runtime_00794c20);
LAB_006fe754:
    (*(code *)PTR_panic_access_error_00799458)();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined1 *)(lVar3 + -0xf2) = 2;
  if ((*(byte *)(lVar3 + -0x100) & 1) == 0) {
    plVar6 = (longlong *)
             <<std[6c98fd8553dbae28]::hash::random::RandomState>::new::KEYS::{K#0}::{closure#1}as_core[c0acaeba6ab4c2e0]::ops::function::FnOnce<(core[c0acaeba6ab4c2e0]::option::Option<&mut_core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::cell::Cell<(u64,u64)>>>,)>>
             ::call_once(0,param_2);
    if (plVar6 == (longlong *)0x0) goto LAB_006fe754;
    local_18 = (undefined4)*plVar6;
    uStack_14 = *(undefined4 *)((longlong)plVar6 + 4);
    uStack_10 = (undefined4)plVar6[1];
    uStack_c = *(undefined4 *)((longlong)plVar6 + 0xc);
    *plVar6 = *plVar6 + 1;
    iVar5 = tokio[d7d91d38da47d894]::loom::std::rand::COUNTER;
    LOCK();
    tokio[d7d91d38da47d894]::loom::std::rand::COUNTER =
         tokio[d7d91d38da47d894]::loom::std::rand::COUNTER + 1;
    UNLOCK();
    <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
    ::hash_one::<u32>(&local_18,iVar5);
  }
  *(undefined4 *)(lVar3 + -0x100) = 1;
  *(undefined8 *)(lVar3 + -0xfc) = uVar1;
  return;
}


