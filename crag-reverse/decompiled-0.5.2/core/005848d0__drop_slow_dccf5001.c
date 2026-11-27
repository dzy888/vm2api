// 005848d0 drop_slow

/* WARNING: Switch with 1 destination removed at 0x00584b54 */
/* <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::PoolManager>>::drop_slow
    */

void __rustcall
<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::PoolManager>>::drop_slow
          (longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 (*pauVar9) [16];
  undefined1 (*pauVar10) [16];
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar14 [16];
  
  lVar1 = *param_1;
  plVar2 = *(longlong **)(lVar1 + 0x180);
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BindingRegistry>>
    ::drop_slow(lVar1 + 0x180);
  }
  plVar2 = *(longlong **)(lVar1 + 0x188);
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::oauth::OAuthManager>>::
    drop_slow(lVar1 + 0x188);
  }
  uVar13 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
           <craggemini_core[66f3c71560d70857]::pool::PoolGlobalConfig>(lVar1 + 0x10);
  if (*(longlong *)(lVar1 + 0x1e8) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar13,1);
  }
  <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::StickyConvBinding)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(lVar1 + 0x200);
  uVar13 = <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::ResponseBinding)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
           ::drop(lVar1 + 0x230);
  plVar2 = *(longlong **)(lVar1 + 400);
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    uVar13 = <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<craggemini_core[66f3c71560d70857]::resume::SignatureCache>>>
             ::drop_slow(lVar1 + 400);
  }
  plVar2 = *(longlong **)(lVar1 + 0x198);
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    uVar13 = <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<craggemini_core[66f3c71560d70857]::pool::CooldownRegistry>>>
             ::drop_slow(lVar1 + 0x198);
  }
  if (*(longlong *)(lVar1 + 0x2c8) != 0) {
    uVar13 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar13,1);
  }
  lVar8 = 0;
  if ((*(longlong *)(lVar1 + 0x2f0) != 0) &&
     (lVar8 = *(longlong *)(lVar1 + 0x2f0) * 0x11 + 0x21, lVar8 != 0)) {
    uVar13 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar13,0x10);
  }
  puVar5 = PTR___rust_dealloc_00798fc8;
  lVar11 = *(longlong *)(lVar1 + 0x328);
  if (lVar11 != 0) {
    lVar12 = *(longlong *)(lVar1 + 0x338);
    if (lVar12 != 0) {
      pauVar9 = *(undefined1 (**) [16])(lVar1 + 800);
      auVar14 = *pauVar9;
      pauVar10 = pauVar9 + 1;
      uVar7 = ~(uint)(ushort)((ushort)(SUB161(auVar14 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar14 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar14 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar14 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar14 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar14 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar14 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar14 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar14 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar14 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar14 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar14 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar14 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar14 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar14 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar14[0xf] >> 7) << 0xf);
      do {
        if ((short)uVar7 == 0) {
          do {
            auVar14 = *pauVar10;
            pauVar9 = pauVar9 + -0x30;
            pauVar10 = pauVar10 + 1;
            uVar7 = (ushort)((ushort)(SUB161(auVar14 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar14 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar14 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar14 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar14 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar14 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar14 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar14 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar14 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar14 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar14 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar14 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar14 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar14 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar14 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar14[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar7 == 0);
        }
        uVar3 = 0;
        for (uVar4 = uVar7; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        lVar8 = *(longlong *)pauVar9[(ulonglong)uVar3 * -3 + -3];
        if (lVar8 != 0) {
          auVar14._0_8_ = (*(code *)puVar5)(auVar14._0_8_,1);
          auVar14._8_8_ = extraout_XMM0_Qb;
        }
        uVar13 = auVar14._0_8_;
        lVar12 = lVar12 + -1;
        uVar7 = uVar7 - 1 & uVar7;
      } while (lVar12 != 0);
    }
    lVar11 = lVar11 * 0x31 + 0x41;
    if (lVar11 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar13,0x10);
      lVar8 = lVar11;
    }
  }
  <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(lVar1 + 0x358,lVar8);
  (*(code *)PTR_drop_007990c8)();
  plVar2 = *(longlong **)(lVar1 + 0x1a0);
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    (*(code *)PTR_drop_slow_007990d0)();
  }
  uVar13 = (*(code *)PTR_drop_007990c8)();
  plVar2 = *(longlong **)(lVar1 + 0x1a8);
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    uVar13 = (*(code *)PTR_drop_slow_007990d0)();
  }
  if ((*(longlong *)(lVar1 + 0x398) != 0) &&
     (cVar6 = (*(code *)PTR_drop_join_handle_fast_00799080)(), uVar13 = extraout_XMM0_Qa,
     cVar6 != '\0')) {
    uVar13 = (*(code *)PTR_drop_join_handle_slow_00799088)();
  }
  if (lVar1 != -1) {
    LOCK();
    plVar2 = (longlong *)(lVar1 + 8);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      (*(code *)PTR_free_0079adc8)(uVar13,8);
      return;
    }
  }
  return;
}


