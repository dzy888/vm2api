// 006fc090 <<tokio[d7d91d38da47d894]::runtime::context::current::SetCurrentGuard_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop::{closure#0},()>

/* <std[6c98fd8553dbae28]::thread::local::LocalKey<tokio[d7d91d38da47d894]::runtime::context::Context>>::with::<<tokio[d7d91d38da47d894]::runtime::context::current::SetCurrentGuard
   as core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop::{closure#0}, ()> */

void __rustcall
<std[6c98fd8553dbae28]::thread::local::LocalKey<tokio[d7d91d38da47d894]::runtime::context::Context>>
::with::
<<tokio[d7d91d38da47d894]::runtime::context::current::SetCurrentGuard_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop::_closure_0_,()>
          (void)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  longlong *plVar7;
  longlong *in_RDX;
  longlong *unaff_RBX;
  longlong *in_RSI;
  undefined8 *in_RDI;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar8;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  lVar1 = *in_RDX;
  plVar7 = (longlong *)(*(code *)*in_RDI)();
  if (plVar7 == (longlong *)0x0) {
    (*(code *)PTR_panic_access_error_00799458)();
    *(undefined4 *)(unaff_RBX + 1) = local_28;
    *(undefined4 *)((longlong)unaff_RBX + 0xc) = uStack_24;
    *(undefined4 *)(unaff_RBX + 2) = uStack_20;
    *(undefined4 *)((longlong)unaff_RBX + 0x14) = uStack_1c;
    *unaff_RBX = *unaff_RBX + 1;
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume();
  }
  if (plVar7[3] == lVar1) {
    lVar4 = *in_RSI;
    lVar5 = in_RSI[1];
    *in_RSI = 2;
    if (*plVar7 == 0) {
      *plVar7 = -1;
      if (plVar7[1] != 2) {
        if (plVar7[1] == 0) {
          plVar2 = (longlong *)plVar7[2];
          LOCK();
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            (*(code *)PTR_drop_slow_00799078)();
          }
        }
        else {
          plVar2 = (longlong *)plVar7[2];
          LOCK();
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            (*(code *)PTR_drop_slow_00799070)();
          }
        }
      }
      plVar7[1] = lVar4;
      plVar7[2] = lVar5;
      *plVar7 = *plVar7 + 1;
      plVar7[3] = lVar1 + -1;
      return;
    }
  }
  else {
    uVar8 = extraout_XMM0_Da;
    if (((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0) &&
       (cVar6 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), uVar8 = extraout_XMM0_Da_00,
       cVar6 == '\0')) {
      return;
    }
    (*(code *)PTR_panic_fmt_007991a8)
              (uVar8,&anon_a54838b0e2c6049171e94f4eeb8260c4_17_llvm_5899425866962164388);
  }
  (*(code *)PTR_panic_already_borrowed_007997b0)();
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}


