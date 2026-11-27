// 00405950 new

/* <tokio[d7d91d38da47d894]::runtime::task::core::Cell<core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::start_with_license::{closure#0}::{closure#3}>>,
   alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>>>::new
    */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::task::core::Cell<core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::start_with_license::{closure#0}::{closure#3}>>,alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>>>
::new(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uStack_14c;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_118;
  
  plVar2 = *(longlong **)(param_2 + 0x210);
  uVar5 = 0;
  uVar6 = 0;
  uVar7 = 0;
  uVar8 = 0;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    lVar1 = *plVar2;
    *plVar2 = *plVar2 + 1;
    UNLOCK();
    if (*plVar2 == 0 || SCARRY8(lVar1,1) != *plVar2 < 0) goto LAB_00405a47;
    uVar5 = *(undefined4 *)(param_2 + 0x210);
    uVar6 = *(undefined4 *)(param_2 + 0x214);
    uVar7 = *(undefined4 *)(param_2 + 0x218);
    uVar8 = *(undefined4 *)(param_2 + 0x21c);
  }
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar4 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[0xe] = CONCAT44(uVar6,uVar5);
    puVar4[0xf] = CONCAT44(uVar8,uVar7);
    puVar4[0xc] = 0;
    puVar4[0xd] = uStack_118;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    puVar4[8] = local_140;
    puVar4[9] = uStack_138;
    puVar4[6] = (ulonglong)uStack_14c << 0x20;
    puVar4[7] = param_1;
    puVar4[4] = param_2;
    puVar4[5] = param_4;
    puVar4[2] = &anon_759b25d0f49402244ed1d2ce4dc43d04_259_llvm_4022685846690702743;
    puVar4[3] = 0;
    *puVar4 = param_3;
    puVar4[1] = 0;
    return;
  }
  (*(code *)PTR_handle_alloc_error_007991d8)();
LAB_00405a47:
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}


