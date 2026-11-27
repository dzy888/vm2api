// 0057a870 <serde_json[dc3825464c436029]::value::Value,tokio[d7d91d38da47d894]::sync::mpsc::unbounded::Semaphore>

/* tokio[d7d91d38da47d894]::sync::mpsc::chan::channel::<serde_json[dc3825464c436029]::value::Value,
   tokio[d7d91d38da47d894]::sync::mpsc::unbounded::Semaphore> */

undefined1  [16] __rustcall
tokio[d7d91d38da47d894]::sync::mpsc::chan::channel::
<serde_json[dc3825464c436029]::value::Value,tokio[d7d91d38da47d894]::sync::mpsc::unbounded::Semaphore>
          (void)

{
  code *pcVar1;
  longlong lVar2;
  undefined4 extraout_XMM0_Da;
  undefined1 auVar3 [16];
  
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  lVar2 = (*(code *)PTR___rust_alloc_00799000)();
  if (lVar2 == 0) {
    (*(code *)PTR_handle_alloc_error_007991d8)();
  }
  else {
    *(undefined8 *)(lVar2 + 0x410) = 0;
    *(undefined8 *)(lVar2 + 0x418) = 0;
    *(undefined8 *)(lVar2 + 0x400) = 0;
    *(undefined8 *)(lVar2 + 0x408) = 0;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    auVar3._0_8_ = (longlong *)(*(code *)PTR___rust_alloc_00799000)();
    if (auVar3._0_8_ != (longlong *)0x0) {
      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,0x200);
      LOCK();
      lVar2 = *auVar3._0_8_;
      *auVar3._0_8_ = *auVar3._0_8_ + 1;
      UNLOCK();
      if (*auVar3._0_8_ != 0 && SCARRY8(lVar2,1) == *auVar3._0_8_ < 0) {
        auVar3._8_8_ = auVar3._0_8_;
        return auVar3;
      }
      goto LAB_0057a9a6;
    }
  }
  (*(code *)PTR_handle_alloc_error_007991d8)();
LAB_0057a9a6:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


