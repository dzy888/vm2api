// 006f0070 drop_slow

/* WARNING: Switch with 1 destination removed at 0x006f05c0 */
/* <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::blocking::pool::Inner>>::drop_slow
    */

void __rustcall
<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::blocking::pool::Inner>>::
drop_slow(longlong *param_1)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  undefined1 (*pauVar7) [16];
  longlong lVar8;
  undefined1 (*pauVar9) [16];
  uint uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  
  lVar2 = *param_1;
  if (*(char *)(lVar2 + 0x10) == '\0') {
    uVar12 = <alloc[12e961f32105355]::collections::vec_deque::VecDeque<tokio[d7d91d38da47d894]::runtime::blocking::pool::Task>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
             ::drop((longlong *)(lVar2 + 0x20));
    lVar3 = *(longlong *)(lVar2 + 0x20);
    lVar8 = 0;
    if (lVar3 != 0) {
      lVar8 = lVar3 << 4;
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar12,8);
    }
    puVar11 = (undefined8 *)(lVar2 + 0x40);
    plVar4 = *(longlong **)(lVar2 + 0x70);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
        (*(code *)PTR_drop_slow_0079a798)();
      }
    }
    uVar12 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
             <core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::thread::join_handle::JoinHandle<()>>>
                       (lVar2 + 0x78,lVar8);
  }
  else {
    uVar12 = <alloc[12e961f32105355]::collections::vec_deque::VecDeque<tokio[d7d91d38da47d894]::runtime::blocking::pool::Task>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
             ::drop((longlong *)(lVar2 + 0x20));
    lVar3 = *(longlong *)(lVar2 + 0x20);
    lVar8 = 0;
    if (lVar3 != 0) {
      lVar8 = lVar3 << 4;
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar12,8);
    }
    uVar12 = <alloc[12e961f32105355]::collections::vec_deque::VecDeque<tokio[d7d91d38da47d894]::runtime::blocking::pool::Task>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
             ::drop((longlong *)(lVar2 + 0x50),lVar8);
    lVar3 = *(longlong *)(lVar2 + 0x50);
    lVar8 = 0;
    if (lVar3 != 0) {
      lVar8 = lVar3 << 4;
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar12,8);
    }
    uVar12 = <alloc[12e961f32105355]::collections::vec_deque::VecDeque<tokio[d7d91d38da47d894]::runtime::blocking::pool::Task>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
             ::drop((longlong *)(lVar2 + 0x80),lVar8);
    lVar3 = *(longlong *)(lVar2 + 0x80);
    lVar8 = 0;
    if (lVar3 != 0) {
      lVar8 = lVar3 << 4;
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar12,8);
    }
    uVar12 = <alloc[12e961f32105355]::collections::vec_deque::VecDeque<tokio[d7d91d38da47d894]::runtime::blocking::pool::Task>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
             ::drop((longlong *)(lVar2 + 0xb0),lVar8);
    lVar3 = *(longlong *)(lVar2 + 0xb0);
    lVar8 = 0;
    if (lVar3 != 0) {
      lVar8 = lVar3 << 4;
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar12,8);
    }
    uVar12 = <alloc[12e961f32105355]::collections::vec_deque::VecDeque<tokio[d7d91d38da47d894]::runtime::blocking::pool::Task>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
             ::drop((longlong *)(lVar2 + 0xe0),lVar8);
    lVar3 = *(longlong *)(lVar2 + 0xe0);
    lVar8 = 0;
    if (lVar3 != 0) {
      lVar8 = lVar3 << 4;
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar12,8);
    }
    uVar12 = <alloc[12e961f32105355]::collections::vec_deque::VecDeque<tokio[d7d91d38da47d894]::runtime::blocking::pool::Task>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
             ::drop((longlong *)(lVar2 + 0x110),lVar8);
    lVar3 = *(longlong *)(lVar2 + 0x110);
    lVar8 = 0;
    if (lVar3 != 0) {
      lVar8 = lVar3 << 4;
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar12,8);
    }
    uVar12 = <alloc[12e961f32105355]::collections::vec_deque::VecDeque<tokio[d7d91d38da47d894]::runtime::blocking::pool::Task>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
             ::drop((longlong *)(lVar2 + 0x140),lVar8);
    lVar3 = *(longlong *)(lVar2 + 0x140);
    lVar8 = 0;
    if (lVar3 != 0) {
      lVar8 = lVar3 << 4;
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar12,8);
    }
    uVar12 = <alloc[12e961f32105355]::collections::vec_deque::VecDeque<tokio[d7d91d38da47d894]::runtime::blocking::pool::Task>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
             ::drop((longlong *)(lVar2 + 0x170),lVar8);
    lVar3 = *(longlong *)(lVar2 + 0x170);
    lVar8 = 0;
    if (lVar3 != 0) {
      lVar8 = lVar3 << 4;
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar12,8);
    }
    uVar12 = <alloc[12e961f32105355]::collections::vec_deque::VecDeque<tokio[d7d91d38da47d894]::runtime::blocking::pool::Task>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
             ::drop((longlong *)(lVar2 + 0x1a0),lVar8);
    lVar3 = *(longlong *)(lVar2 + 0x1a0);
    lVar8 = 0;
    if (lVar3 != 0) {
      lVar8 = lVar3 << 4;
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar12,8);
    }
    uVar12 = <alloc[12e961f32105355]::collections::vec_deque::VecDeque<tokio[d7d91d38da47d894]::runtime::blocking::pool::Task>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
             ::drop((longlong *)(lVar2 + 0x1d0),lVar8);
    lVar3 = *(longlong *)(lVar2 + 0x1d0);
    lVar8 = 0;
    if (lVar3 != 0) {
      lVar8 = lVar3 << 4;
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar12,8);
    }
    uVar12 = <alloc[12e961f32105355]::collections::vec_deque::VecDeque<tokio[d7d91d38da47d894]::runtime::blocking::pool::Task>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
             ::drop((longlong *)(lVar2 + 0x200),lVar8);
    lVar3 = *(longlong *)(lVar2 + 0x200);
    lVar8 = 0;
    if (lVar3 != 0) {
      lVar8 = lVar3 << 4;
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar12,8);
    }
    uVar12 = <alloc[12e961f32105355]::collections::vec_deque::VecDeque<tokio[d7d91d38da47d894]::runtime::blocking::pool::Task>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
             ::drop((longlong *)(lVar2 + 0x230),lVar8);
    lVar3 = *(longlong *)(lVar2 + 0x230);
    lVar8 = 0;
    if (lVar3 != 0) {
      lVar8 = lVar3 << 4;
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar12,8);
    }
    uVar12 = <alloc[12e961f32105355]::collections::vec_deque::VecDeque<tokio[d7d91d38da47d894]::runtime::blocking::pool::Task>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
             ::drop((longlong *)(lVar2 + 0x260),lVar8);
    lVar3 = *(longlong *)(lVar2 + 0x260);
    lVar8 = 0;
    if (lVar3 != 0) {
      lVar8 = lVar3 << 4;
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar12,8);
    }
    uVar12 = <alloc[12e961f32105355]::collections::vec_deque::VecDeque<tokio[d7d91d38da47d894]::runtime::blocking::pool::Task>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
             ::drop((longlong *)(lVar2 + 0x290),lVar8);
    lVar3 = *(longlong *)(lVar2 + 0x290);
    lVar8 = 0;
    if (lVar3 != 0) {
      lVar8 = lVar3 << 4;
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar12,8);
    }
    uVar12 = <alloc[12e961f32105355]::collections::vec_deque::VecDeque<tokio[d7d91d38da47d894]::runtime::blocking::pool::Task>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
             ::drop((longlong *)(lVar2 + 0x2c0),lVar8);
    lVar3 = *(longlong *)(lVar2 + 0x2c0);
    lVar8 = 0;
    if (lVar3 != 0) {
      lVar8 = lVar3 << 4;
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar12,8);
    }
    uVar12 = <alloc[12e961f32105355]::collections::vec_deque::VecDeque<tokio[d7d91d38da47d894]::runtime::blocking::pool::Task>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
             ::drop((longlong *)(lVar2 + 0x2f0),lVar8);
    lVar3 = *(longlong *)(lVar2 + 0x2f0);
    lVar8 = 0;
    if (lVar3 != 0) {
      lVar8 = lVar3 << 4;
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar12,8);
    }
    puVar11 = (undefined8 *)(lVar2 + 800);
    plVar4 = *(longlong **)(lVar2 + 0x350);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
        (*(code *)PTR_drop_slow_0079a798)();
      }
    }
    uVar12 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
             <core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::thread::join_handle::JoinHandle<()>>>
                       (lVar2 + 0x358,lVar8);
  }
  lVar3 = puVar11[1];
  if (lVar3 != 0) {
    lVar8 = puVar11[3];
    if (lVar8 != 0) {
      pauVar9 = (undefined1 (*) [16])*puVar11;
      auVar1 = *pauVar9;
      pauVar7 = pauVar9 + 1;
      uVar10 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
      do {
        if ((short)uVar10 == 0) {
          do {
            auVar1 = *pauVar7;
            pauVar9 = pauVar9 + -0x20;
            pauVar7 = pauVar7 + 1;
            uVar10 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar1[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar10 == 0);
        }
        iVar5 = 0;
        for (uVar6 = uVar10; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          iVar5 = iVar5 + 1;
        }
        uVar12 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                 <std[6c98fd8553dbae28]::thread::join_handle::JoinHandle<()>>
                           ((longlong)pauVar9 + (-0x18 - (ulonglong)(uint)(iVar5 << 5)));
        uVar10 = uVar10 - 1 & uVar10;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    if (lVar3 * 0x21 != -0x31) {
      uVar12 = (*(code *)PTR___rust_dealloc_00798fc8)(puVar11,0x10);
    }
  }
  plVar4 = *(longlong **)(lVar2 + 0x3b8);
  LOCK();
  *plVar4 = *plVar4 + -1;
  UNLOCK();
  if (*plVar4 == 0) {
    uVar12 = (*(code *)PTR_drop_slow_00799678)();
  }
  plVar4 = *(longlong **)(lVar2 + 0x3c8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      uVar12 = (*(code *)PTR_drop_slow_00799678)();
    }
  }
  plVar4 = *(longlong **)(lVar2 + 0x3d8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      uVar12 = (*(code *)PTR_drop_slow_00799678)();
    }
  }
  if (lVar2 != -1) {
    LOCK();
    plVar4 = (longlong *)(lVar2 + 8);
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      (*(code *)PTR_free_0079adc8)(uVar12,8);
      return;
    }
  }
  return;
}


