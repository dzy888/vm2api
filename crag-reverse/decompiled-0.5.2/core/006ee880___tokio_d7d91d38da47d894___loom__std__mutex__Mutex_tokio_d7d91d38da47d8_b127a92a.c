// 006ee880 <tokio[d7d91d38da47d894]::loom::std::mutex::Mutex<tokio[d7d91d38da47d894]::runtime::blocking::sharded::ShardedCoord>>

/* WARNING: Switch with 1 destination removed at 0x006ee95e */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::loom::std::mutex::Mutex<tokio[d7d91d38da47d894]::runtime::blocking::sharded::ShardedCoord>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::loom::std::mutex::Mutex<tokio[d7d91d38da47d894]::runtime::blocking::sharded::ShardedCoord>>
          (longlong param_1)

{
  undefined1 auVar1 [16];
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined1 (*pauVar7) [16];
  undefined1 (*pauVar8) [16];
  longlong lVar9;
  undefined8 uVar10;
  
  plVar2 = *(longlong **)(param_1 + 0x38);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      (*(code *)PTR_drop_slow_0079a798)();
    }
  }
  uVar10 = <core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::thread::join_handle::JoinHandle<()>>>
                     (param_1 + 0x40);
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (lVar3 != 0) {
    lVar9 = *(longlong *)(param_1 + 0x20);
    if (lVar9 != 0) {
      pauVar7 = *(undefined1 (**) [16])(param_1 + 8);
      auVar1 = *pauVar7;
      pauVar8 = pauVar7 + 1;
      uVar6 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
        if ((short)uVar6 == 0) {
          do {
            auVar1 = *pauVar8;
            pauVar7 = pauVar7 + -0x20;
            pauVar8 = pauVar8 + 1;
            uVar6 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
          } while (uVar6 == 0);
        }
        iVar4 = 0;
        for (uVar5 = uVar6; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          iVar4 = iVar4 + 1;
        }
        uVar6 = uVar6 - 1 & uVar6;
        uVar10 = <std[6c98fd8553dbae28]::thread::join_handle::JoinHandle<()>>
                           ((longlong)pauVar7 + (-0x18 - (ulonglong)(uint)(iVar4 << 5)));
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    if (lVar3 * 0x21 != -0x31) {
      (*(code *)PTR_free_0079adc8)(uVar10,0x10);
      return;
    }
  }
  return;
}


