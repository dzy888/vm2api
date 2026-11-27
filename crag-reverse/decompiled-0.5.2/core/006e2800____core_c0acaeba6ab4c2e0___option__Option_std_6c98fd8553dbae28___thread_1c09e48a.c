// 006e2800 <(core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::thread::join_handle::JoinHandle<()>>,std[6c98fd8553dbae28]::collections::hash::map::HashMap<usize,std[6c98fd8553dbae28]::thread::join_handle::JoinHandle<()>>)>

/* WARNING: Switch with 1 destination removed at 0x006e28cf */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<(core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::thread::join_handle::JoinHandle<()>>,
   std[6c98fd8553dbae28]::collections::hash::map::HashMap<usize,
   std[6c98fd8553dbae28]::thread::join_handle::JoinHandle<()>>)> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<(core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::thread::join_handle::JoinHandle<()>>,std[6c98fd8553dbae28]::collections::hash::map::HashMap<usize,std[6c98fd8553dbae28]::thread::join_handle::JoinHandle<()>>)>
          (longlong *param_1)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined1 (*pauVar6) [16];
  undefined1 (*pauVar7) [16];
  longlong lVar8;
  
  if (*param_1 != 0) {
    <std[6c98fd8553dbae28]::thread::join_handle::JoinHandle<()>>(param_1);
  }
  lVar2 = param_1[4];
  if (lVar2 != 0) {
    lVar8 = param_1[6];
    if (lVar8 != 0) {
      pauVar6 = (undefined1 (*) [16])param_1[3];
      auVar1 = *pauVar6;
      pauVar7 = pauVar6 + 1;
      uVar5 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
        if ((short)uVar5 == 0) {
          do {
            auVar1 = *pauVar7;
            pauVar6 = pauVar6 + -0x20;
            pauVar7 = pauVar7 + 1;
            uVar5 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
          } while (uVar5 == 0);
        }
        iVar3 = 0;
        for (uVar4 = uVar5; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          iVar3 = iVar3 + 1;
        }
        uVar5 = uVar5 - 1 & uVar5;
        <std[6c98fd8553dbae28]::thread::join_handle::JoinHandle<()>>
                  ((longlong)pauVar6 + (-0x18 - (ulonglong)(uint)(iVar3 << 5)));
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    if (lVar2 * 0x21 != -0x31) {
      (*(code *)PTR_free_0079adc8)();
      return;
    }
  }
  return;
}


