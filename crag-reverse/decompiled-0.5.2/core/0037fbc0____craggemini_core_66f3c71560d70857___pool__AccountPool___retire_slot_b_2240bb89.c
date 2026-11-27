// 0037fbc0 <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::retire_slot_bg::{closure#0},alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>

/* WARNING: Removing unreachable block (ram,0x005bee95) */
/* WARNING: Removing unreachable block (ram,0x005beed5) */
/* WARNING: Removing unreachable block (ram,0x005beedc) */
/* WARNING: Removing unreachable block (ram,0x005beee5) */
/* WARNING: Removing unreachable block (ram,0x005beef2) */
/* WARNING: Removing unreachable block (ram,0x005beefb) */
/* WARNING: Removing unreachable block (ram,0x005bef04) */
/* WARNING: Removing unreachable block (ram,0x005beeac) */
/* tokio[d7d91d38da47d894]::runtime::task::raw::try_read_output::<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::retire_slot_bg::{closure#0},
   alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>
    */

void __rustcall
tokio[d7d91d38da47d894]::runtime::task::raw::try_read_output::
<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::retire_slot_bg::_closure_0_,alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>
          (longlong param_1)

{
  code *pcVar1;
  char cVar2;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar3;
  
  cVar2 = (*(code *)PTR_can_read_output_00799fb0)();
  if (cVar2 != '\0') {
    uVar3 = (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,0x2000);
    *(undefined4 *)(param_1 + 0x30) = 2;
    (*(code *)PTR_panic_fmt_007991a8)
              (uVar3,&anon_0acbc551f34e4a0bfb9a607189131925_30_llvm_9953415283177307294);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  return;
}


