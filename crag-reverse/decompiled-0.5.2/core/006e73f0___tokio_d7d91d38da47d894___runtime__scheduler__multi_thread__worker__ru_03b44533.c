// 006e73f0 <tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::run::{closure#0}::{closure#0},()>

/* <tokio[d7d91d38da47d894]::runtime::context::scoped::Scoped<tokio[d7d91d38da47d894]::runtime::scheduler::Context>>::set::<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::run::{closure#0}::{closure#0},
   ()> */

void __thiscall
<tokio[d7d91d38da47d894]::runtime::context::scoped::Scoped<tokio[d7d91d38da47d894]::runtime::scheduler::Context>>
::set::
<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::run::_closure_0_::_closure_0_,()>
          (set *this)

{
  longlong *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong lVar4;
  char *in_RDX;
  undefined8 unaff_RSI;
  undefined8 *unaff_RDI;
  
  uVar2 = *unaff_RDI;
  *unaff_RDI = unaff_RSI;
  if (*in_RDX == '\0') {
    (*(code *)PTR_panic_fmt_007991a8)
              (this,&anon_1c7207ea9655bfcf55d918eab6d9918c_8_llvm_17559541839288726608);
  }
  else {
    <tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Context>::run
              (in_RDX + 8,this);
    lVar4 = *(longlong *)(in_RDX + 0x20);
    while (lVar4 == 0) {
      in_RDX[0x20] = -1;
      in_RDX[0x21] = -1;
      in_RDX[0x22] = -1;
      in_RDX[0x23] = -1;
      in_RDX[0x24] = -1;
      in_RDX[0x25] = -1;
      in_RDX[0x26] = -1;
      in_RDX[0x27] = -1;
      if (*(longlong *)(in_RDX + 0x38) == 0) {
        in_RDX[0x20] = '\0';
        in_RDX[0x21] = '\0';
        in_RDX[0x22] = '\0';
        in_RDX[0x23] = '\0';
        in_RDX[0x24] = '\0';
        in_RDX[0x25] = '\0';
        in_RDX[0x26] = '\0';
        in_RDX[0x27] = '\0';
        *unaff_RDI = uVar2;
        return;
      }
      lVar4 = *(longlong *)(in_RDX + 0x38) + -1;
      *(longlong *)(in_RDX + 0x38) = lVar4;
      (**(code **)(*(longlong *)(*(longlong *)(in_RDX + 0x30) + lVar4 * 0x10) + 8))();
      plVar1 = (longlong *)(in_RDX + 0x20);
      *plVar1 = *plVar1 + 1;
      lVar4 = *plVar1;
    }
    (*(code *)PTR_panic_already_borrowed_007997b0)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}


