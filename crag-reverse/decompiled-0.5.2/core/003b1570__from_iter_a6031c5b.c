// 003b1570 from_iter

/* <alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::string::String> as
   alloc[12e961f32105355]::vec::spec_from_iter::SpecFromIter<alloc[12e961f32105355]::string::String,
   core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::iter::adapters::filter::Filter<std[6c98fd8553dbae28]::collections::hash::map::Iter<alloc[12e961f32105355]::string::String,
   craggemini_core[66f3c71560d70857]::oauth::StoredAttempt>,
   <craggemini_core[66f3c71560d70857]::oauth::OAuthManager>::reap_expired::{closure#0}::{closure#0}>,
   <craggemini_core[66f3c71560d70857]::oauth::OAuthManager>::reap_expired::{closure#0}::{closure#1}>>>::from_iter
    */

longlong * __rustcall
<alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::string::String>as_alloc[12e961f32105355]::vec::spec_from_iter::SpecFromIter<alloc[12e961f32105355]::string::String,core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::iter::adapters::filter::Filter<std[6c98fd8553dbae28]::collections::hash::map::Iter<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::oauth::StoredAttempt>,<craggemini_core[66f3c71560d70857]::oauth::OAuthManager>::reap_expired::{closure#0}::{closure#0}>,<craggemini_core[66f3c71560d70857]::oauth::OAuthManager>::reap_expired::{closure#0}::{closure#1}>>>
::from_iter(longlong *param_1,longlong *param_2)

{
  undefined1 auVar1 [16];
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined1 (*pauVar8) [16];
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 (*pauVar12) [16];
  uint uVar13;
  longlong local_80;
  undefined1 (*local_78) [16];
  longlong local_70;
  longlong local_68;
  longlong local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  lVar11 = param_2[4];
  if (lVar11 != 0) {
    lVar10 = *param_2;
    pauVar12 = (undefined1 (*) [16])param_2[1];
    plVar2 = (longlong *)param_2[5];
    lVar9 = *plVar2;
    uVar13 = (uint)*(ushort *)(param_2 + 3);
    do {
      if ((short)uVar13 == 0) {
        do {
          auVar1 = *pauVar12;
          lVar10 = lVar10 + -0x2c00;
          pauVar12 = pauVar12 + 1;
          uVar13 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
        } while (uVar13 == 0);
        param_2[1] = (longlong)pauVar12;
        *param_2 = lVar10;
      }
      uVar5 = 0;
      for (uVar6 = uVar13; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
        uVar5 = uVar5 + 1;
      }
      uVar13 = uVar13 - 1 & uVar13;
      *(short *)(param_2 + 3) = (short)uVar13;
      lVar11 = lVar11 + -1;
      param_2[4] = lVar11;
      lVar3 = *(longlong *)(lVar10 + -0x10 + (ulonglong)uVar5 * -0x2c0);
      if (lVar9 == lVar3) {
        if (*(uint *)(lVar10 + (ulonglong)uVar5 * -0x2c0 + -8) < *(uint *)(plVar2 + 1)) {
LAB_003b162c:
          (*(code *)PTR_clone_00798fd0)();
          if (local_60 != -1) {
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            pauVar8 = (undefined1 (*) [16])(*(code *)PTR___rust_alloc_00799000)();
            if (pauVar8 == (undefined1 (*) [16])0x0) {
              (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
              pcVar4 = (code *)invalidInstructionException();
              (*pcVar4)();
            }
            *(undefined8 *)pauVar8[1] = local_50;
            auVar1._8_8_ = uStack_58;
            auVar1._0_8_ = local_60;
            *pauVar8 = auVar1;
            local_80 = 4;
            local_70 = 1;
            local_78 = pauVar8;
            lVar9 = local_70;
            goto joined_r0x003b16aa;
          }
          break;
        }
      }
      else if (lVar3 < lVar9) goto LAB_003b162c;
    } while (lVar11 != 0);
  }
  *param_1 = 0;
  param_1[1] = 8;
  param_1[2] = 0;
  return param_1;
joined_r0x003b16aa:
  local_70 = lVar9;
  if (lVar11 != 0) {
    do {
      if ((short)uVar13 == 0) {
        do {
          auVar1 = *pauVar12;
          lVar10 = lVar10 + -0x2c00;
          pauVar12 = pauVar12 + 1;
          uVar13 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
        } while (uVar13 == 0);
      }
      uVar5 = 0;
      for (uVar6 = uVar13; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
        uVar5 = uVar5 + 1;
      }
      uVar13 = uVar13 - 1 & uVar13;
      lVar11 = lVar11 + -1;
      lVar3 = *(longlong *)(lVar10 + -0x10 + (ulonglong)uVar5 * -0x2c0);
      if (*plVar2 == lVar3) {
        if (*(uint *)(lVar10 + (ulonglong)uVar5 * -0x2c0 + -8) < *(uint *)(plVar2 + 1))
        goto LAB_003b172d;
      }
      else if (lVar3 < *plVar2) goto LAB_003b172d;
      if (lVar11 == 0) break;
    } while( true );
  }
  goto LAB_003b17c5;
LAB_003b172d:
  (*(code *)PTR_clone_00798fd0)();
  local_68 = local_48;
  if (local_48 == -1) goto LAB_003b17c5;
  if (lVar9 == local_80) {
    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[12e961f32105355]::alloc::Global>(&local_80,lVar9,1,8,0x18);
    pauVar8 = local_78;
  }
  *(undefined8 *)((longlong)pauVar8 + lVar9 * 0x18 + 0x10) = local_38;
  auVar7._8_8_ = uStack_40;
  auVar7._0_8_ = local_48;
  *(undefined1 (*) [16])((longlong)pauVar8 + lVar9 * 0x18) = auVar7;
  lVar9 = lVar9 + 1;
  goto joined_r0x003b16aa;
LAB_003b17c5:
  param_1[2] = local_70;
  *param_1 = local_80;
  param_1[1] = (longlong)local_78;
  return param_1;
}


