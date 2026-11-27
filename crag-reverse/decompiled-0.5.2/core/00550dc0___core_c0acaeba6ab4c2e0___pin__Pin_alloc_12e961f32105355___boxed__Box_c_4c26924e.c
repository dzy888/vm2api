// 00550dc0 <core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<craggemini_core[66f3c71560d70857]::run::{closure#0}>>>

/* <tokio[d7d91d38da47d894]::runtime::park::CachedParkThread>::block_on::<core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<craggemini_core[66f3c71560d70857]::run::{closure#0}>>>
    */

undefined1  [16] __rustcall
<tokio[d7d91d38da47d894]::runtime::park::CachedParkThread>::block_on::
<core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<craggemini_core[66f3c71560d70857]::run::_closure_0_>>>
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 unaff_RBP;
  longlong *in_FS_OFFSET;
  undefined1 auVar3 [16];
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  longlong *local_50;
  longlong *local_48;
  undefined8 local_40;
  
  local_68 = (*(code *)PTR_waker_00799730)();
  if (local_68 != 0) {
    local_50 = &local_68;
    local_40 = 0;
    local_58 = *in_FS_OFFSET + -0x138;
    local_70 = param_2;
    local_60 = param_3;
    local_48 = local_50;
    do {
      cVar1 = (char)in_FS_OFFSET[-0x1e];
      if (cVar1 == '\0') {
LAB_00550e3a:
        cVar1 = *(char *)((longlong)in_FS_OFFSET + -0xf4);
        *(undefined2 *)((longlong)in_FS_OFFSET + -0xf4) = 0x8001;
      }
      else if (cVar1 == '\x01') {
        (*(code *)PTR_register_00799240)();
        *(undefined1 *)(in_FS_OFFSET + -0x1e) = 0;
        goto LAB_00550e3a;
      }
      auVar3 = <core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<craggemini_core[66f3c71560d70857]::run::{closure#0}>>as_core[c0acaeba6ab4c2e0]::future::future::Future>
               ::poll(&local_70,&local_50);
      unaff_RBP = auVar3._8_8_;
      if (cVar1 != '\x02') {
        (*(code *)PTR_drop_007997a8)();
      }
      if (auVar3._0_8_ != 1) goto LAB_00550ea9;
      (*(code *)PTR_park_00799740)();
    } while( true );
  }
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::run::_closure_0_>
            (param_2);
  (*(code *)PTR___rust_dealloc_00798fc8)();
  uVar2 = 1;
LAB_00550efa:
  auVar3._8_8_ = unaff_RBP;
  auVar3._0_8_ = uVar2;
  return auVar3;
LAB_00550ea9:
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::run::_closure_0_>
            (local_70);
  (*(code *)PTR___rust_dealloc_00798fc8)();
  (**(code **)(local_68 + 0x18))();
  uVar2 = 0;
  goto LAB_00550efa;
}


