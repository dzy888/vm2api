// 006e1dd0 <alloc[12e961f32105355]::sync::ArcInner<tokio[d7d91d38da47d894]::runtime::blocking::pool::Inner>>

/* WARNING: Switch with 1 destination removed at 0x006e21dd */
/* WARNING: Switch with 1 destination removed at 0x006efb52 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<alloc[12e961f32105355]::sync::ArcInner<tokio[d7d91d38da47d894]::runtime::blocking::pool::Inner>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<alloc[12e961f32105355]::sync::ArcInner<tokio[d7d91d38da47d894]::runtime::blocking::pool::Inner>>
          (longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    <alloc[12e961f32105355]::collections::vec_deque::VecDeque<tokio[d7d91d38da47d894]::runtime::blocking::pool::Task>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop((longlong *)(param_1 + 0x20));
    lVar6 = *(longlong *)(param_1 + 0x20);
    lVar5 = 0x30;
    if (lVar6 == 0) {
      lVar7 = 0;
      goto LAB_006e216e;
    }
  }
  else {
    <alloc[12e961f32105355]::collections::vec_deque::VecDeque<tokio[d7d91d38da47d894]::runtime::blocking::pool::Task>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop((longlong *)(param_1 + 0x20));
    lVar6 = *(longlong *)(param_1 + 0x20);
    lVar5 = 0;
    if (lVar6 != 0) {
      lVar5 = lVar6 << 4;
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    <alloc[12e961f32105355]::collections::vec_deque::VecDeque<tokio[d7d91d38da47d894]::runtime::blocking::pool::Task>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop((longlong *)(param_1 + 0x50),lVar5);
    lVar6 = *(longlong *)(param_1 + 0x50);
    lVar5 = 0;
    if (lVar6 != 0) {
      lVar5 = lVar6 << 4;
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    <alloc[12e961f32105355]::collections::vec_deque::VecDeque<tokio[d7d91d38da47d894]::runtime::blocking::pool::Task>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop((longlong *)(param_1 + 0x80),lVar5);
    lVar6 = *(longlong *)(param_1 + 0x80);
    lVar5 = 0;
    if (lVar6 != 0) {
      lVar5 = lVar6 << 4;
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    <alloc[12e961f32105355]::collections::vec_deque::VecDeque<tokio[d7d91d38da47d894]::runtime::blocking::pool::Task>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop((longlong *)(param_1 + 0xb0),lVar5);
    lVar6 = *(longlong *)(param_1 + 0xb0);
    lVar5 = 0;
    if (lVar6 != 0) {
      lVar5 = lVar6 << 4;
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    <alloc[12e961f32105355]::collections::vec_deque::VecDeque<tokio[d7d91d38da47d894]::runtime::blocking::pool::Task>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop((longlong *)(param_1 + 0xe0),lVar5);
    lVar6 = *(longlong *)(param_1 + 0xe0);
    lVar5 = 0;
    if (lVar6 != 0) {
      lVar5 = lVar6 << 4;
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    <alloc[12e961f32105355]::collections::vec_deque::VecDeque<tokio[d7d91d38da47d894]::runtime::blocking::pool::Task>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop((longlong *)(param_1 + 0x110),lVar5);
    lVar6 = *(longlong *)(param_1 + 0x110);
    lVar5 = 0;
    if (lVar6 != 0) {
      lVar5 = lVar6 << 4;
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    <alloc[12e961f32105355]::collections::vec_deque::VecDeque<tokio[d7d91d38da47d894]::runtime::blocking::pool::Task>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop((longlong *)(param_1 + 0x140),lVar5);
    lVar6 = *(longlong *)(param_1 + 0x140);
    lVar5 = 0;
    if (lVar6 != 0) {
      lVar5 = lVar6 << 4;
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    <alloc[12e961f32105355]::collections::vec_deque::VecDeque<tokio[d7d91d38da47d894]::runtime::blocking::pool::Task>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop((longlong *)(param_1 + 0x170),lVar5);
    lVar6 = *(longlong *)(param_1 + 0x170);
    lVar5 = 0;
    if (lVar6 != 0) {
      lVar5 = lVar6 << 4;
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    <alloc[12e961f32105355]::collections::vec_deque::VecDeque<tokio[d7d91d38da47d894]::runtime::blocking::pool::Task>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop((longlong *)(param_1 + 0x1a0),lVar5);
    lVar6 = *(longlong *)(param_1 + 0x1a0);
    lVar5 = 0;
    if (lVar6 != 0) {
      lVar5 = lVar6 << 4;
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    <alloc[12e961f32105355]::collections::vec_deque::VecDeque<tokio[d7d91d38da47d894]::runtime::blocking::pool::Task>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop((longlong *)(param_1 + 0x1d0),lVar5);
    lVar6 = *(longlong *)(param_1 + 0x1d0);
    lVar5 = 0;
    if (lVar6 != 0) {
      lVar5 = lVar6 << 4;
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    <alloc[12e961f32105355]::collections::vec_deque::VecDeque<tokio[d7d91d38da47d894]::runtime::blocking::pool::Task>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop((longlong *)(param_1 + 0x200),lVar5);
    lVar6 = *(longlong *)(param_1 + 0x200);
    lVar5 = 0;
    if (lVar6 != 0) {
      lVar5 = lVar6 << 4;
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    <alloc[12e961f32105355]::collections::vec_deque::VecDeque<tokio[d7d91d38da47d894]::runtime::blocking::pool::Task>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop((longlong *)(param_1 + 0x230),lVar5);
    lVar6 = *(longlong *)(param_1 + 0x230);
    lVar5 = 0;
    if (lVar6 != 0) {
      lVar5 = lVar6 << 4;
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    <alloc[12e961f32105355]::collections::vec_deque::VecDeque<tokio[d7d91d38da47d894]::runtime::blocking::pool::Task>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop((longlong *)(param_1 + 0x260),lVar5);
    lVar6 = *(longlong *)(param_1 + 0x260);
    lVar5 = 0;
    if (lVar6 != 0) {
      lVar5 = lVar6 << 4;
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    <alloc[12e961f32105355]::collections::vec_deque::VecDeque<tokio[d7d91d38da47d894]::runtime::blocking::pool::Task>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop((longlong *)(param_1 + 0x290),lVar5);
    lVar6 = *(longlong *)(param_1 + 0x290);
    lVar5 = 0;
    if (lVar6 != 0) {
      lVar5 = lVar6 << 4;
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    <alloc[12e961f32105355]::collections::vec_deque::VecDeque<tokio[d7d91d38da47d894]::runtime::blocking::pool::Task>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop((longlong *)(param_1 + 0x2c0),lVar5);
    lVar6 = *(longlong *)(param_1 + 0x2c0);
    lVar5 = 0;
    if (lVar6 != 0) {
      lVar5 = lVar6 << 4;
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    <alloc[12e961f32105355]::collections::vec_deque::VecDeque<tokio[d7d91d38da47d894]::runtime::blocking::pool::Task>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop((longlong *)(param_1 + 0x2f0),lVar5);
    lVar6 = *(longlong *)(param_1 + 0x2f0);
    lVar5 = 0x310;
    lVar7 = 0;
    if (lVar6 == 0) goto LAB_006e216e;
  }
  lVar7 = lVar6 << 4;
  (*(code *)PTR___rust_dealloc_00798fc8)();
LAB_006e216e:
  <tokio[d7d91d38da47d894]::runtime::blocking::pool::ThreadManagementState>
            (param_1 + 0x10 + lVar5,lVar7);
  plVar1 = *(longlong **)(param_1 + 0x3b8);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    (*(code *)PTR_drop_slow_00799ad8)();
  }
  plVar1 = *(longlong **)(param_1 + 0x3c8);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (*(code *)PTR_drop_slow_00799ae0)();
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x3d8);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar6 = *(longlong *)(param_1 + 0x3d8);
      puVar2 = *(undefined8 **)(param_1 + 0x3e0);
      uVar3 = puVar2[2];
      if ((code *)*puVar2 != (code *)0x0) {
        (*(code *)*puVar2)(uVar3 - 1 & 0xfffffffffffffff0);
      }
      if (lVar6 != -1) {
        LOCK();
        plVar1 = (longlong *)(lVar6 + 8);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          uVar4 = 8;
          if (8 < uVar3) {
            uVar4 = uVar3;
          }
          if ((-uVar4 & puVar2[1] + uVar4 + 0xf) != 0) {
            (*(code *)PTR_free_0079adc8)();
            return;
          }
        }
      }
      return;
    }
  }
  return;
}


