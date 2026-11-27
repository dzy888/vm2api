// 006fbfc0 <tokio[d7d91d38da47d894]::runtime::context::thread_rng_n::{closure#0},u32>

/* <std[6c98fd8553dbae28]::thread::local::LocalKey<tokio[d7d91d38da47d894]::runtime::context::Context>>::with::<tokio[d7d91d38da47d894]::runtime::context::thread_rng_n::{closure#0},
   u32> */

ulonglong __rustcall
<std[6c98fd8553dbae28]::thread::local::LocalKey<tokio[d7d91d38da47d894]::runtime::context::Context>>
::with::<tokio[d7d91d38da47d894]::runtime::context::thread_rng_n::_closure_0_,u32>
          (undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar1 = *param_2;
  lVar5 = (*(code *)*param_1)();
  if (lVar5 == 0) {
LAB_006fc07b:
    (*(code *)PTR_panic_access_error_00799458)();
    pcVar2 = (code *)swi(3);
    uVar7 = (*pcVar2)();
    return uVar7;
  }
  if ((*(byte *)(lVar5 + 0x38) & 1) == 0) {
    plVar6 = (longlong *)
             <<std[6c98fd8553dbae28]::hash::random::RandomState>::new::KEYS::{K#0}::{closure#1}as_core[c0acaeba6ab4c2e0]::ops::function::FnOnce<(core[c0acaeba6ab4c2e0]::option::Option<&mut_core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::cell::Cell<(u64,u64)>>>,)>>
             ::call_once(0);
    if (plVar6 == (longlong *)0x0) goto LAB_006fc07b;
    local_38 = (undefined4)*plVar6;
    uStack_34 = *(undefined4 *)((longlong)plVar6 + 4);
    uStack_30 = (undefined4)plVar6[1];
    uStack_2c = *(undefined4 *)((longlong)plVar6 + 0xc);
    *plVar6 = *plVar6 + 1;
    iVar3 = tokio[d7d91d38da47d894]::loom::std::rand::COUNTER;
    LOCK();
    tokio[d7d91d38da47d894]::loom::std::rand::COUNTER =
         tokio[d7d91d38da47d894]::loom::std::rand::COUNTER + 1;
    UNLOCK();
    uVar7 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
            ::hash_one::<u32>(&local_38,iVar3);
    uVar9 = (uint)(uVar7 >> 0x20);
    uVar4 = (uint)uVar7;
    bVar10 = uVar9 == uVar4;
    bVar11 = uVar7 >> 0x20 == 0;
    if (bVar11 && bVar10) {
      uVar4 = 1;
    }
    uVar8 = 0;
    if (!bVar11 || !bVar10) {
      uVar8 = uVar9;
    }
  }
  else {
    uVar4 = *(uint *)(lVar5 + 0x40);
    uVar8 = *(uint *)(lVar5 + 0x3c);
  }
  uVar8 = uVar8 << 0x11 ^ uVar8;
  uVar9 = uVar8 >> 7 ^ uVar4 >> 0x10 ^ uVar4 ^ uVar8;
  *(undefined4 *)(lVar5 + 0x38) = 1;
  *(uint *)(lVar5 + 0x3c) = uVar4;
  *(uint *)(lVar5 + 0x40) = uVar9;
  return (ulonglong)(uVar9 + uVar4) * (ulonglong)uVar1 >> 0x20;
}


