// 00255310 <alloc[12e961f32105355]::sync::ArcInner<craggemini_core[66f3c71560d70857]::pool::PoolManager>>

/* WARNING: Switch with 1 destination removed at 0x00255574 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<alloc[12e961f32105355]::sync::ArcInner<craggemini_core[66f3c71560d70857]::pool::PoolManager>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<alloc[12e961f32105355]::sync::ArcInner<craggemini_core[66f3c71560d70857]::pool::PoolManager>>
          (longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 (*pauVar8) [16];
  undefined1 (*pauVar9) [16];
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar13 [16];
  
  plVar1 = *(longlong **)(param_1 + 0x180);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BindingRegistry>>
    ::drop_slow(param_1 + 0x180);
  }
  plVar1 = *(longlong **)(param_1 + 0x188);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::oauth::OAuthManager>>::
    drop_slow(param_1 + 0x188);
  }
  uVar12 = <craggemini_core[66f3c71560d70857]::pool::PoolGlobalConfig>(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x1e8) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar12,1);
  }
  <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::StickyConvBinding)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(param_1 + 0x200);
  uVar12 = <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::ResponseBinding)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
           ::drop(param_1 + 0x230);
  plVar1 = *(longlong **)(param_1 + 400);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    uVar12 = <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<craggemini_core[66f3c71560d70857]::resume::SignatureCache>>>
             ::drop_slow(param_1 + 400);
  }
  plVar1 = *(longlong **)(param_1 + 0x198);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    uVar12 = <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<craggemini_core[66f3c71560d70857]::pool::CooldownRegistry>>>
             ::drop_slow(param_1 + 0x198);
  }
  if (*(longlong *)(param_1 + 0x2c8) != 0) {
    uVar12 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar12,1);
  }
  lVar7 = 0;
  if ((*(longlong *)(param_1 + 0x2f0) != 0) &&
     (lVar7 = *(longlong *)(param_1 + 0x2f0) * 0x11 + 0x21, lVar7 != 0)) {
    uVar12 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar12,0x10);
  }
  puVar4 = PTR___rust_dealloc_00798fc8;
  lVar10 = *(longlong *)(param_1 + 0x328);
  if (lVar10 != 0) {
    lVar11 = *(longlong *)(param_1 + 0x338);
    if (lVar11 != 0) {
      pauVar8 = *(undefined1 (**) [16])(param_1 + 800);
      auVar13 = *pauVar8;
      pauVar9 = pauVar8 + 1;
      uVar6 = ~(uint)(ushort)((ushort)(SUB161(auVar13 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar13 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar13 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar13 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar13 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar13 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar13 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar13 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar13 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar13 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar13 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar13 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar13 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar13 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar13 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar13[0xf] >> 7) << 0xf);
      do {
        if ((short)uVar6 == 0) {
          do {
            auVar13 = *pauVar9;
            pauVar8 = pauVar8 + -0x30;
            pauVar9 = pauVar9 + 1;
            uVar6 = (ushort)((ushort)(SUB161(auVar13 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar13 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar13 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar13 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar13 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar13 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar13 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar13 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar13 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar13 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar13 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar13 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar13 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar13 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar13 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar13[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar6 == 0);
        }
        uVar2 = 0;
        for (uVar3 = uVar6; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
          uVar2 = uVar2 + 1;
        }
        lVar7 = *(longlong *)pauVar8[(ulonglong)uVar2 * -3 + -3];
        if (lVar7 != 0) {
          auVar13._0_8_ = (*(code *)puVar4)(auVar13._0_8_,1);
          auVar13._8_8_ = extraout_XMM0_Qb;
        }
        uVar12 = auVar13._0_8_;
        lVar11 = lVar11 + -1;
        uVar6 = uVar6 - 1 & uVar6;
      } while (lVar11 != 0);
    }
    lVar10 = lVar10 * 0x31 + 0x41;
    if (lVar10 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar12,0x10);
      lVar7 = lVar10;
    }
  }
  <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(param_1 + 0x358,lVar7);
  (*(code *)PTR_drop_007990c8)();
  plVar1 = *(longlong **)(param_1 + 0x1a0);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    (*(code *)PTR_drop_slow_007990d0)();
  }
  (*(code *)PTR_drop_007990c8)();
  plVar1 = *(longlong **)(param_1 + 0x1a8);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    (*(code *)PTR_drop_slow_007990d0)();
  }
  lVar7 = *(longlong *)(param_1 + 0x398);
  if ((lVar7 == 0) || (cVar5 = (*(code *)PTR_drop_join_handle_fast_00799080)(), cVar5 == '\0')) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00701744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(lVar7 + 0x10) + 0x20))();
  return;
}


