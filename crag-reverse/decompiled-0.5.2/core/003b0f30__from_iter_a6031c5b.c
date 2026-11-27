// 003b0f30 from_iter

/* <alloc[12e961f32105355]::vec::Vec<tokio[d7d91d38da47d894]::sync::mutex::Mutex<craggemini_core[66f3c71560d70857]::oauth::ActiveOAuthAttempt>>
   as 
   alloc[12e961f32105355]::vec::spec_from_iter::SpecFromIter<tokio[d7d91d38da47d894]::sync::mutex::Mutex<craggemini_core[66f3c71560d70857]::oauth::ActiveOAuthAttempt>,
   core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<std[6c98fd8553dbae28]::collections::hash::map::Drain<alloc[12e961f32105355]::string::String,
   craggemini_core[66f3c71560d70857]::oauth::StoredAttempt>,
   <craggemini_core[66f3c71560d70857]::oauth::OAuthManager>::shutdown_all::{closure#0}::{closure#0}>>>::from_iter
    */

ulonglong * __rustcall
<alloc[12e961f32105355]::vec::Vec<tokio[d7d91d38da47d894]::sync::mutex::Mutex<craggemini_core[66f3c71560d70857]::oauth::ActiveOAuthAttempt>>as_alloc[12e961f32105355]::vec::spec_from_iter::SpecFromIter<tokio[d7d91d38da47d894]::sync::mutex::Mutex<craggemini_core[66f3c71560d70857]::oauth::ActiveOAuthAttempt>,core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<std[6c98fd8553dbae28]::collections::hash::map::Drain<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::oauth::StoredAttempt>,<craggemini_core[66f3c71560d70857]::oauth::OAuthManager>::shutdown_all::{closure#0}::{closure#0}>>>
::from_iter(ulonglong *param_1,undefined1 (*param_2) [16])

{
  longlong lVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined1 (*pauVar10) [16];
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar14 [16];
  ulonglong local_880;
  ulonglong uStack_878;
  ulonglong local_870;
  undefined1 local_868 [16];
  undefined8 local_858;
  undefined8 uStack_850;
  longlong local_848;
  undefined8 uStack_840;
  ulonglong local_838;
  undefined8 uStack_830;
  undefined8 local_828;
  undefined8 *puStack_820;
  ulonglong *local_810;
  longlong local_808;
  ulonglong local_800;
  
  uVar7 = *(ulonglong *)param_2[2];
  if (uVar7 != 0) {
    uVar9 = (uint)*(ushort *)(param_2[1] + 8);
    lVar6 = *(longlong *)*param_2;
    if (*(ushort *)(param_2[1] + 8) == 0) {
      pauVar10 = *(undefined1 (**) [16])(*param_2 + 8);
      do {
        auVar14 = *pauVar10;
        lVar6 = lVar6 + -0x2c00;
        pauVar10 = pauVar10 + 1;
        uVar9 = (ushort)((ushort)(SUB161(auVar14 >> 7,0) & 1) |
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
      } while (uVar9 == 0);
      *(undefined1 (**) [16])(*param_2 + 8) = pauVar10;
      *(longlong *)*param_2 = lVar6;
    }
    uVar5 = (ushort)uVar9;
    uVar3 = 0;
    for (; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
      uVar3 = uVar3 + 1;
    }
    *(ushort *)(param_2[1] + 8) = uVar5 - 1 & uVar5;
    *(ulonglong *)param_2[2] = uVar7 - 1;
    lVar6 = *(longlong *)(lVar6 + -0x2c0 + (ulonglong)uVar3 * -0x2c0);
    if (lVar6 != -1) {
      uVar13 = (*(code *)PTR_memcpy_00799008)((ulonglong)uVar3 * -0x2c0,0x298);
      if (lVar6 != 0) {
        uVar13 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar13,1);
      }
      uVar13 = (*(code *)PTR_memcpy_00799008)(uVar13,0x298);
      uVar8 = 4;
      if (4 < uVar7) {
        uVar8 = uVar7;
      }
      if (0x3159721ed7e753 < uVar7) {
LAB_003b1040:
        (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      local_810 = param_1;
      if (uVar8 * 0x298 == 0) {
        uVar7 = 8;
        uVar8 = 0;
      }
      else {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        uVar7 = (*(code *)PTR___rust_alloc_00799000)();
        if (uVar7 == 0) goto LAB_003b1040;
        uVar13 = extraout_XMM0_Qa;
      }
      (*(code *)PTR_memcpy_00799008)(uVar13,0x298);
      local_870 = 1;
      local_828 = *(undefined8 *)param_2[4];
      puStack_820 = *(undefined8 **)(param_2[4] + 8);
      auVar14 = *param_2;
      lVar12 = auVar14._0_8_;
      local_858 = *(undefined8 *)param_2[1];
      uStack_850 = *(undefined8 *)(param_2[1] + 8);
      lVar6 = *(longlong *)param_2[2];
      uStack_840 = *(undefined8 *)(param_2[2] + 8);
      local_838 = *(ulonglong *)param_2[3];
      uStack_830 = *(undefined8 *)(param_2[3] + 8);
      auVar14._0_8_ = lVar12;
      local_880 = uVar8;
      uStack_878 = uVar7;
      local_868 = auVar14;
      local_848 = lVar6;
      if (lVar6 != 0) {
        local_868._8_8_ = auVar14._8_8_;
        uVar9 = (uint)(ushort)uStack_850;
        pauVar10 = (undefined1 (*) [16])local_868._8_8_;
        do {
          uVar8 = local_870;
          if ((short)uVar9 == 0) {
            do {
              auVar14 = *pauVar10;
              lVar12 = lVar12 + -0x2c00;
              pauVar10 = pauVar10 + 1;
              uVar9 = (ushort)((ushort)(SUB161(auVar14 >> 7,0) & 1) |
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
            } while (uVar9 == 0);
          }
          uVar3 = 0;
          for (uVar4 = uVar9; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
            uVar3 = uVar3 + 1;
          }
          uVar9 = uVar9 - 1 & uVar9;
          lVar11 = lVar6 + -1;
          lVar1 = *(longlong *)(lVar12 + -0x2c0 + (ulonglong)uVar3 * -0x2c0);
          local_800 = uVar7;
          if (lVar1 == -1) {
            uStack_850 = CONCAT62(uStack_850._2_6_,(short)uVar9);
            local_868._8_8_ = pauVar10;
            local_868._0_8_ = lVar12;
            local_848 = lVar11;
            while (lVar11 != 0) {
              if ((short)uVar9 == 0) {
                do {
                  auVar14 = *pauVar10;
                  lVar12 = lVar12 + -0x2c00;
                  pauVar10 = pauVar10 + 1;
                  uVar9 = (ushort)((ushort)(SUB161(auVar14 >> 7,0) & 1) |
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
                } while (uVar9 == 0);
                local_868._8_8_ = pauVar10;
                local_868._0_8_ = lVar12;
              }
              uVar3 = 0;
              for (uVar4 = uVar9; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
                uVar3 = uVar3 + 1;
              }
              uVar9 = uVar9 - 1 & uVar9;
              uStack_850 = CONCAT62(uStack_850._2_6_,(short)uVar9);
              lVar6 = (ulonglong)uVar3 * -0x2c0;
              lVar11 = lVar11 + -1;
              local_848 = lVar11;
              if (*(longlong *)(lVar12 + -0x2c0 + lVar6) != 0) {
                (*(code *)PTR___rust_dealloc_00798fc8)(-(ulonglong)uVar3,1);
              }
              auVar14._0_8_ =
                   core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                   <craggemini_core[66f3c71560d70857]::oauth::ActiveOAuthAttempt>
                             (lVar12 + lVar6 + -0x280);
              auVar14._8_8_ = extraout_XMM0_Qb_00;
            }
            break;
          }
          local_808 = lVar6;
          uVar13 = (*(code *)PTR_memcpy_00799008)(-(ulonglong)uVar3,0x298);
          if (lVar1 != 0) {
            uVar13 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar13,1);
          }
          uVar13 = (*(code *)PTR_memcpy_00799008)(uVar13,0x298);
          lVar6 = local_808 + -1;
          uVar7 = local_800;
          if (uVar8 == local_880) {
            uVar13 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::
                     do_reserve_and_handle::<alloc[12e961f32105355]::alloc::Global>
                               (&local_880,uVar8,local_808,8,0x298);
            uVar7 = uStack_878;
          }
          auVar14._0_8_ = (*(code *)PTR_memcpy_00799008)(uVar13,0x298);
          auVar14._8_8_ = extraout_XMM0_Qb;
          local_870 = uVar8 + 1;
        } while (lVar6 != 0);
      }
      uVar7 = local_838;
      if (local_838 != 0) {
        (*(code *)PTR_memset_00799090)(auVar14._0_8_,local_838 + 0x11);
      }
      uVar8 = (uVar7 + 1 & 0xfffffffffffffff8) - (uVar7 + 1 >> 3);
      if (uVar7 < 8) {
        uVar8 = uVar7;
      }
      puStack_820[2] = uVar8;
      puStack_820[3] = 0;
      *puStack_820 = uStack_840;
      puStack_820[1] = local_838;
      local_810[2] = local_870;
      *local_810 = local_880;
      local_810[1] = uStack_878;
      return local_810;
    }
  }
  *param_1 = 0;
  param_1[1] = 8;
  param_1[2] = 0;
  <hashbrown[b5c94476ffc33875]::raw::RawDrain<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::oauth::StoredAttempt)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(param_2);
  return param_1;
}


