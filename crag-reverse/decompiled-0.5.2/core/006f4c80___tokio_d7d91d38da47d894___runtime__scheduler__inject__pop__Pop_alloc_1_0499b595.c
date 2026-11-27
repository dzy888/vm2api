// 006f4c80 <tokio[d7d91d38da47d894]::runtime::scheduler::inject::pop::Pop<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>

/* <tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::queue::Local<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>::push_back::<tokio[d7d91d38da47d894]::runtime::scheduler::inject::pop::Pop<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>
    */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::queue::Local<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>
::push_back::
<tokio[d7d91d38da47d894]::runtime::scheduler::inject::pop::Pop<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>
          (longlong *param_1,ulonglong *param_2,ulonglong param_3)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  code *pcVar5;
  ulonglong uVar6;
  uint uVar7;
  
  if (param_3 < 0x101) {
    if (param_3 == 0) {
      return;
    }
    lVar2 = *param_1;
    uVar7 = *(uint *)(lVar2 + 0x20);
    if (uVar7 - (int)((ulonglong)*(undefined8 *)(lVar2 + 0x18) >> 0x20) <= 0x100U - (int)param_3) {
      if (param_3 != 0) {
        do {
          uVar6 = *param_2;
          if (uVar6 == 0) {
            if (param_3 != 1) {
              uVar6 = 1;
              goto LAB_006f4d5f;
            }
            break;
          }
          uVar3 = *(ulonglong *)(uVar6 + 8);
          *param_2 = uVar3;
          if (uVar3 == 0) {
            param_2[1] = 0;
          }
          *(undefined8 *)(uVar6 + 8) = 0;
          uVar1 = uVar7 + 1;
          *(ulonglong *)(*(longlong *)(lVar2 + 0x10) + (ulonglong)(uVar7 & 0xff) * 8) = uVar6;
          param_3 = param_3 - 1;
          uVar7 = uVar1;
        } while (param_3 != 0);
      }
      goto LAB_006f4d2a;
    }
  }
LAB_006f4de2:
  (*(code *)PTR_panic_00799338)();
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
  while( true ) {
    uVar3 = puVar4[1];
    *param_2 = uVar3;
    if (uVar3 == 0) {
      param_2[1] = 0;
    }
    puVar4[1] = 0;
    LOCK();
    uVar3 = *puVar4;
    *puVar4 = *puVar4 - 0x40;
    UNLOCK();
    if (uVar3 >> 6 == 1) {
      (**(code **)(puVar4[2] + 0x10))();
    }
    else if (uVar3 >> 6 == 0) {
      (*(code *)PTR_panic_00799338)();
      goto LAB_006f4de2;
    }
    uVar6 = uVar6 + 1;
    if (param_3 == uVar6) break;
LAB_006f4d5f:
    puVar4 = (ulonglong *)*param_2;
    if (puVar4 == (ulonglong *)0x0) break;
  }
LAB_006f4d2a:
  *(uint *)(lVar2 + 0x20) = uVar7;
  return;
}


