// 006e7dd0 <(),<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>as_tokio[d7d91d38da47d894]::runtime::task::Schedule>::schedule::{closure#0}>

/* tokio[d7d91d38da47d894]::runtime::context::with_scheduler::<(),
   <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>
   as tokio[d7d91d38da47d894]::runtime::task::Schedule>::schedule::{closure#0}> */

void __rustcall
tokio[d7d91d38da47d894]::runtime::context::with_scheduler::
<(),<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>as_tokio[d7d91d38da47d894]::runtime::task::Schedule>::schedule::_closure_0_>
          (longlong *param_1,ulonglong *param_2)

{
  char cVar1;
  longlong lVar2;
  int *piVar3;
  longlong lVar4;
  code *pcVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong *in_FS_OFFSET;
  ulonglong *local_48;
  longlong *local_40;
  ulonglong *local_38;
  longlong *local_30;
  ulonglong *local_28;
  
  lVar2 = *in_FS_OFFSET;
  local_28 = param_2;
  if (*(char *)(lVar2 + -0xf0) == '\0') {
    cVar1 = *(char *)(lVar2 + -0xf2);
joined_r0x006e7fae:
    local_30 = (longlong *)0x0;
    if (cVar1 != '\x02') {
      local_30 = (longlong *)0x0;
      piVar3 = *(int **)(lVar2 + -0x110);
      if (piVar3 != (int *)0x0) {
        lVar2 = *param_1;
        local_40 = param_1;
        local_38 = param_2;
        if ((*piVar3 == 1) || (lVar2 != *(longlong *)(piVar3 + 2))) {
          <tokio[d7d91d38da47d894]::runtime::scheduler::inject::Inject<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>>>
          ::push(lVar2 + 0x110,param_2);
          if (*(int *)(lVar2 + 0x284) == -1) {
            <tokio[d7d91d38da47d894]::runtime::park::Inner>::unpark
                      (*(longlong *)(lVar2 + 0x240) + 0x10);
            return;
          }
          local_48 = (ulonglong *)(*(code *)PTR_wake_0079a830)();
          if (local_48 == (ulonglong *)0x0) {
            return;
          }
          (*(code *)PTR_unwrap_failed_00799028)
                    (&anon_c49be660a078f24638188b28ebcb61a3_1_llvm_15508925077749842928,&local_48,
                     &anon_c49be660a078f24638188b28ebcb61a3_21_llvm_15508925077749842928);
        }
        else {
          if (*(longlong *)(piVar3 + 4) == 0) {
            piVar3[4] = -1;
            piVar3[5] = -1;
            lVar4 = *(longlong *)(piVar3 + 6);
            if (lVar4 != 0) {
              uVar7 = *(ulonglong *)(lVar4 + 0x58);
              uVar6 = *(ulonglong *)(lVar4 + 0x70);
              if (uVar6 == uVar7) {
                local_48 = param_2;
                (*(code *)PTR_grow_0079a838)();
                uVar7 = *(ulonglong *)(lVar4 + 0x58);
                uVar6 = *(ulonglong *)(lVar4 + 0x70);
              }
              *(ulonglong *)(lVar4 + 0x70) = uVar6 + 1;
              uVar6 = uVar6 + *(longlong *)(lVar4 + 0x68);
              uVar8 = 0;
              if (uVar7 <= uVar6) {
                uVar8 = uVar7;
              }
              *(ulonglong **)(*(longlong *)(lVar4 + 0x60) + (uVar6 - uVar8) * 8) = param_2;
              *(undefined8 *)(lVar2 + 0x98) = *(undefined8 *)(lVar4 + 0x70);
              *(longlong *)(piVar3 + 4) = *(longlong *)(piVar3 + 4) + 1;
              return;
            }
            piVar3[4] = 0;
            piVar3[5] = 0;
            LOCK();
            uVar7 = *param_2;
            *param_2 = *param_2 - 0x40;
            UNLOCK();
            if (uVar7 >> 6 != 1) {
              if (uVar7 >> 6 != 0) {
                return;
              }
              (*(code *)PTR_panic_00799338)();
            }
            (**(code **)(param_2[2] + 0x10))();
            return;
          }
          (*(code *)PTR_panic_already_borrowed_007997b0)();
        }
        goto LAB_006e804a;
      }
    }
  }
  else {
    local_30 = param_1;
    if (*(char *)(lVar2 + -0xf0) == '\x01') {
      (*(code *)PTR_register_00799240)();
      *(undefined1 *)(lVar2 + -0xf0) = 0;
      cVar1 = *(char *)(lVar2 + -0xf2);
      goto joined_r0x006e7fae;
    }
  }
  lVar2 = *param_1;
  <tokio[d7d91d38da47d894]::runtime::scheduler::inject::Inject<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>>>
  ::push(lVar2 + 0x110,param_2);
  if (*(int *)(lVar2 + 0x284) == -1) {
    <tokio[d7d91d38da47d894]::runtime::park::Inner>::unpark(*(longlong *)(lVar2 + 0x240) + 0x10);
    return;
  }
  local_40 = (longlong *)(*(code *)PTR_wake_0079a830)();
  if (local_40 == (longlong *)0x0) {
    return;
  }
  (*(code *)PTR_unwrap_failed_00799028)
            (&anon_c49be660a078f24638188b28ebcb61a3_1_llvm_15508925077749842928,&local_40,
             &anon_c49be660a078f24638188b28ebcb61a3_21_llvm_15508925077749842928);
LAB_006e804a:
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}


