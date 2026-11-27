// 006ffe60 new

/* <tokio[d7d91d38da47d894]::util::rand::FastRand>::new
   <tokio[d7d91d38da47d894]::util::rand::RngSeed>::new */

undefined1  [16] __rustcall <tokio[d7d91d38da47d894]::util::rand::FastRand>::new(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  auVar11 = <<std[6c98fd8553dbae28]::hash::random::RandomState>::new::KEYS::{K#0}::{closure#1}as_core[c0acaeba6ab4c2e0]::ops::function::FnOnce<(core[c0acaeba6ab4c2e0]::option::Option<&mut_core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::cell::Cell<(u64,u64)>>>,)>>
            ::call_once(0);
  uVar7 = auVar11._8_8_;
  plVar4 = auVar11._0_8_;
  if (plVar4 == (longlong *)0x0) {
    (*(code *)PTR_panic_access_error_00799458)();
    pcVar1 = (code *)swi(3);
    auVar11._0_8_ = (*pcVar1)();
    auVar11._8_8_ = uVar7;
    return auVar11;
  }
  local_28 = (undefined4)*plVar4;
  uStack_24 = *(undefined4 *)((longlong)plVar4 + 4);
  uStack_20 = (undefined4)plVar4[1];
  uStack_1c = *(undefined4 *)((longlong)plVar4 + 0xc);
  *plVar4 = *plVar4 + 1;
  iVar2 = tokio[d7d91d38da47d894]::loom::std::rand::COUNTER;
  LOCK();
  tokio[d7d91d38da47d894]::loom::std::rand::COUNTER =
       tokio[d7d91d38da47d894]::loom::std::rand::COUNTER + 1;
  UNLOCK();
  uVar5 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
          ::hash_one::<u32>(&local_28,iVar2);
  uVar6 = (uint)(uVar5 >> 0x20);
  uVar3 = (uint)uVar5;
  bVar10 = uVar5 >> 0x20 != 0;
  uVar9 = 1;
  if (bVar10 || uVar6 != uVar3) {
    uVar9 = uVar3;
  }
  uVar8 = 0;
  if (bVar10 || uVar6 != uVar3) {
    uVar8 = uVar6;
  }
  auVar12._4_4_ = 0;
  auVar12._0_4_ = uVar8;
  auVar12._8_4_ = uVar9;
  auVar12._12_4_ = 0;
  return auVar12;
}


