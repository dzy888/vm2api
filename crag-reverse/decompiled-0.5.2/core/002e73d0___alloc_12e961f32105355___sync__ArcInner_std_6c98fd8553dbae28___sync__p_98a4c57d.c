// 002e73d0 <alloc[12e961f32105355]::sync::ArcInner<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<craggemini_core[66f3c71560d70857]::subagents::SubagentRegistry>>>

/* WARNING: Switch with 1 destination removed at 0x002e7526 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<alloc[12e961f32105355]::sync::ArcInner<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<craggemini_core[66f3c71560d70857]::subagents::SubagentRegistry>>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<alloc[12e961f32105355]::sync::ArcInner<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<craggemini_core[66f3c71560d70857]::subagents::SubagentRegistry>>>
          (longlong param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 (*pauVar6) [16];
  undefined1 (*pauVar7) [16];
  longlong lVar8;
  undefined8 uVar9;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar10 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  
  auVar10._0_8_ =
       <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::subagents::SubagentRecord)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
       ::drop(param_1 + 0x30);
  puVar3 = PTR___rust_dealloc_00798fc8;
  auVar10._8_8_ = extraout_XMM0_Qb;
  lVar5 = *(longlong *)(param_1 + 0x68);
  if (lVar5 != 0) {
    lVar8 = *(longlong *)(param_1 + 0x78);
    if (lVar8 != 0) {
      pauVar6 = *(undefined1 (**) [16])(param_1 + 0x60);
      auVar10 = *pauVar6;
      pauVar7 = pauVar6 + 1;
      uVar4 = ~(uint)(ushort)((ushort)(SUB161(auVar10 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar10 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar10 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar10 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar10 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar10 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar10 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar10 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar10 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar10 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar10 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar10 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar10 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar10 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar10 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar10[0xf] >> 7) << 0xf);
      do {
        if ((short)uVar4 == 0) {
          do {
            auVar10 = *pauVar7;
            pauVar6 = pauVar6 + -0x20;
            pauVar7 = pauVar7 + 1;
            uVar4 = (ushort)((ushort)(SUB161(auVar10 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar10 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar10 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar10 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar10 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar10 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar10 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar10 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar10 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar10 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar10 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar10 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar10 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar10 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar10 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar10[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar4 == 0);
        }
        iVar1 = 0;
        for (uVar2 = uVar4; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1 | 0x80000000) {
          iVar1 = iVar1 + 1;
        }
        if (*(longlong *)((longlong)pauVar6 + (-0x18 - (ulonglong)(uint)(iVar1 << 5))) != 0) {
          auVar10._0_8_ = (*(code *)puVar3)((ulonglong)(uint)(iVar1 << 5),1);
          auVar10._8_8_ = extraout_XMM0_Qb_00;
        }
        lVar8 = lVar8 + -1;
        uVar4 = uVar4 - 1 & uVar4;
      } while (lVar8 != 0);
    }
    if (lVar5 * 0x21 != -0x31) {
      auVar10._0_8_ = (*(code *)PTR___rust_dealloc_00798fc8)(auVar10._0_8_,0x10);
      auVar10._8_8_ = extraout_XMM0_Qb_01;
    }
  }
  puVar3 = PTR___rust_dealloc_00798fc8;
  uVar9 = auVar10._0_8_;
  lVar5 = *(longlong *)(param_1 + 0x28);
  if (lVar5 != 0) {
    lVar8 = *(longlong *)(param_1 + 0x20) + 8;
    do {
      if (*(longlong *)(lVar8 + -8) != 0) {
        auVar10._0_8_ = (*(code *)puVar3)(auVar10._0_8_,1);
        auVar10._8_8_ = extraout_XMM0_Qb_02;
      }
      uVar9 = auVar10._0_8_;
      lVar8 = lVar8 + 0x18;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(uVar9,8);
  return;
}


