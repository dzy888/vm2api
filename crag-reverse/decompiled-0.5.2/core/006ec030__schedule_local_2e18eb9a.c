// 006ec030 schedule_local

/* <tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>::schedule_local */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>::schedule_local
          (longlong param_1,longlong *param_2,longlong param_3,int param_4)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  code *pcVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  undefined1 auVar9 [16];
  longlong local_28;
  
  local_28 = param_3;
  if ((param_4 == 0) && ((char)param_2[0xe] != '\0')) {
    lVar6 = *param_2;
    *param_2 = 0;
    if (lVar6 == 0) {
      *param_2 = param_3;
      return;
    }
    lVar2 = param_2[3];
    do {
      uVar3 = *(ulonglong *)(lVar2 + 0x18);
      iVar8 = *(int *)(lVar2 + 0x20);
      iVar7 = (int)(uVar3 >> 0x20);
      if ((uint)(iVar8 - iVar7) < 0x100) {
        *(longlong *)(*(longlong *)(lVar2 + 0x10) + (ulonglong)(byte)iVar8 * 8) = lVar6;
        *(int *)(lVar2 + 0x20) = iVar8 + 1;
        break;
      }
      if (iVar7 != (int)uVar3) {
        push_remote_task(param_1,lVar6);
        break;
      }
      lVar6 = <tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::queue::Local<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>
              ::push_overflow::
              <tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>
                        (lVar2,lVar6,uVar3 >> 0x20,iVar8,param_1);
    } while (lVar6 != 0);
    puVar4 = (ulonglong *)*param_2;
    if (puVar4 != (ulonglong *)0x0) {
      LOCK();
      uVar3 = *puVar4;
      *puVar4 = *puVar4 - 0x40;
      UNLOCK();
      if (uVar3 >> 6 == 1) {
        (**(code **)(puVar4[2] + 0x10))();
      }
      else if (uVar3 >> 6 == 0) {
        (*(code *)PTR_panic_00799338)();
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
    }
    *param_2 = param_3;
    lVar6 = param_2[1];
  }
  else {
    lVar6 = param_2[3];
    do {
      uVar3 = *(ulonglong *)(lVar6 + 0x18);
      uVar1 = *(uint *)(lVar6 + 0x20);
      iVar8 = (int)(uVar3 >> 0x20);
      if (uVar1 - iVar8 < 0x100) {
        *(longlong *)(*(longlong *)(lVar6 + 0x10) + ((ulonglong)uVar1 & 0xff) * 8) = param_3;
        *(uint *)(lVar6 + 0x20) = uVar1 + 1;
        lVar6 = param_2[1];
        goto joined_r0x006ec119;
      }
      if (iVar8 != (int)uVar3) {
        push_remote_task(param_1,param_3);
        break;
      }
      param_3 = <tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::queue::Local<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>
                ::push_overflow::
                <tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>
                          (lVar6,param_3,uVar3 >> 0x20,(ulonglong)uVar1,param_1);
    } while (param_3 != 0);
    lVar6 = param_2[1];
  }
joined_r0x006ec119:
  if (lVar6 != 0) {
    auVar9 = <tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::idle::Idle>::
             worker_to_notify(param_1 + 0x80,param_1);
    if (auVar9._0_8_ == 1) {
      if (*(ulonglong *)(param_1 + 0x148) <= auVar9._8_8_) {
        (*(code *)PTR_panic_bounds_check_00799520)();
        <tokio[d7d91d38da47d894]::runtime::task::Task<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
        ::drop(&local_28);
                    /* WARNING: Subroutine does not return */
        _Unwind_Resume();
      }
      <tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::park::Unparker>::unpark
                (*(longlong *)(param_1 + 0x140) + auVar9._8_8_ * 0x10 + 8,param_1 + 0x2b8);
      return;
    }
  }
  return;
}


