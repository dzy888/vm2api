// 00535d60 bind_response

/* <craggemini_core[66f3c71560d70857]::resume::StickyIndex>::bind_response */

void __rustcall
<craggemini_core[66f3c71560d70857]::resume::StickyIndex>::bind_response
          (longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,ulonglong param_5
          ,undefined8 param_6,longlong param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  ulonglong *puVar2;
  undefined1 auVar3 [16];
  ulonglong uVar4;
  code *pcVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  undefined *puVar9;
  undefined *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  undefined1 (*pauVar16) [16];
  int iVar17;
  undefined1 (*pauVar18) [16];
  uint uVar19;
  int iVar20;
  undefined8 uVar21;
  longlong lVar22;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  ulonglong local_c8;
  ulonglong local_c0;
  ulonglong uStack_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98;
  ulonglong local_90;
  ulonglong local_88;
  longlong local_80;
  ulonglong uStack_78;
  longlong local_70;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  
  (*(code *)PTR_now_00799478)();
  iVar20 = (int)(uint)local_c8 >> 0xd;
  iVar17 = iVar20 + -1;
  iVar14 = 0;
  if (iVar20 < 1) {
    iVar14 = (1U - iVar20) / 400 + 1;
    iVar17 = iVar17 + iVar14 * 400;
    iVar14 = iVar14 * -0x23ab1;
  }
  uVar15 = (local_c0 & 0xffffffff) / 1000000 +
           ((longlong)
            (int)(((((uint)local_c8 >> 4 & 0x1ff) + iVar14) - iVar17 / 100) + (iVar17 * 0x5b5 >> 2)
                  + (iVar17 / 100 >> 2) + -0xaf93b) * 0x15180 + (local_c8 >> 0x20)) * 1000;
  uVar13 = 0;
  if (0 < (longlong)uVar15) {
    uVar13 = uVar15;
  }
  if (param_7 == 0 || (param_5 == 0 || param_3 == 0)) {
    return;
  }
  if (-1 < param_3) goto LAB_00535e73;
  uVar21 = 0;
  do {
    (*(code *)PTR_handle_error_00798ff0)();
    param_4 = uVar21;
LAB_00535e73:
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    uVar21 = 1;
    local_40 = (*(code *)PTR___rust_alloc_00799000)();
  } while (local_40 == 0);
  (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa,param_3);
  local_48 = param_3;
  local_38 = param_3;
  if (-1 < (longlong)param_5) {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    lVar11 = (*(code *)PTR___rust_alloc_00799000)();
    if (lVar11 != 0) {
      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa_00,param_5);
      if (-1 < param_7) {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        local_a8 = (*(code *)PTR___rust_alloc_00799000)();
        if (local_a8 != 0) {
          (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa_01,param_7);
          local_b0 = param_7;
          local_a0 = param_7;
          local_98 = param_8;
          puVar1 = (undefined8 *)(param_1 + 0x48);
          local_c8 = param_5;
          local_c0 = lVar11;
          uStack_b8 = param_5;
          local_90 = uVar13;
          uVar21 = <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::ResponseBinding,std[6c98fd8553dbae28]::hash::random::RandomState>>
                   ::insert(&local_88,puVar1,&local_48,&local_c8);
          if (local_88 != 0xffffffffffffffff) {
            if (local_88 != 0) {
              uVar21 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar21,1);
            }
            if (local_70 != 0) {
              (*(code *)PTR___rust_dealloc_00798fc8)(uVar21,1);
            }
          }
          bind_conversation_at(param_1,param_6,param_7,param_4,param_5,uVar13);
          *(undefined1 *)(param_1 + 0x90) = 1;
          uVar15 = *(ulonglong *)(param_1 + 0x60);
          if (uVar15 <= *(ulonglong *)(param_1 + 0x78)) {
            return;
          }
          uVar4 = *(ulonglong *)(param_1 + 0x80);
          lVar11 = *(longlong *)(param_1 + 0x30);
          local_c8 = uVar4;
          local_88 = uVar13;
          <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::StickyConvBinding,std[6c98fd8553dbae28]::hash::random::RandomState>>
          ::retain::
          <<craggemini_core[66f3c71560d70857]::resume::StickyIndex>::prune_expired_at::_closure_0_>
                    (param_1 + 0x18,&local_88,&local_c8);
          lVar22 = *(longlong *)(param_1 + 0x60);
          if (lVar22 == 0) {
            uVar13 = 0;
          }
          else {
            pauVar18 = (undefined1 (*) [16])*puVar1;
            auVar3 = *pauVar18;
            uVar19 = ~(uint)(ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
                                     (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                                     (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                                     (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                                     (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                                     (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                                     (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                                     (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                                     (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                                     (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                                     (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                                     (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                                     (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                                     (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                                     (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                                    (ushort)(byte)(auVar3[0xf] >> 7) << 0xf);
            pauVar16 = pauVar18 + 1;
            do {
              if ((short)uVar19 == 0) {
                do {
                  auVar3 = *pauVar16;
                  pauVar18 = pauVar18 + -0x58;
                  pauVar16 = pauVar16 + 1;
                  uVar19 = (ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar3[0xf] >> 7) << 0xf) ^ 0xffff;
                } while (uVar19 == 0);
              }
              uVar7 = 0;
              for (uVar8 = uVar19; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
                uVar7 = uVar7 + 1;
              }
              puVar2 = (ulonglong *)((longlong)pauVar18 + (ulonglong)uVar7 * -0x58 + -8);
              uVar12 = uVar13 - *puVar2;
              if (uVar13 < *puVar2) {
                uVar12 = 0;
              }
              if (uVar4 < uVar12) {
                <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::ResponseBinding)>>
                ::erase(puVar1,(ulonglong)uVar7 * -0x58 + (longlong)pauVar18);
              }
              uVar19 = uVar19 - 1 & uVar19;
              lVar22 = lVar22 + -1;
            } while (lVar22 != 0);
            uVar13 = *(ulonglong *)(param_1 + 0x60);
          }
          if (uVar15 != uVar13 || lVar11 != *(longlong *)(param_1 + 0x30)) {
            *(undefined1 *)(param_1 + 0x90) = 1;
          }
          puVar10 = PTR_clone_00798fd0;
          puVar9 = PTR___rust_dealloc_00798fc8;
          if (uVar13 <= *(ulonglong *)(param_1 + 0x78)) {
            return;
          }
LAB_00536163:
          pauVar16 = (undefined1 (*) [16])*puVar1;
          auVar3 = *pauVar16;
          uVar6 = (ushort)(SUB161(auVar3 >> 7,0) & 1) | (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                  (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar3[0xf] >> 7) << 0xf;
          pauVar18 = pauVar16;
          while( true ) {
            uVar19 = uVar6 ^ 0xffff;
            pauVar18 = pauVar18 + 1;
            if (uVar19 != 0) break;
            auVar3 = *pauVar18;
            pauVar16 = pauVar16 + -0x58;
            uVar6 = (ushort)(SUB161(auVar3 >> 7,0) & 1) | (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1
                    | (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar3[0xf] >> 7) << 0xf;
          }
          uVar7 = 0;
          for (uVar8 = uVar19; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
            uVar7 = uVar7 + 1;
          }
          uVar19 = uVar19 - 1 & uVar19;
          uVar15 = *(ulonglong *)((longlong)pauVar16 + (ulonglong)uVar7 * -0x58 + -8);
LAB_005361ee:
          uVar13 = uVar13 - 1;
          if ((short)uVar19 == 0) {
            if (uVar13 == 0) goto LAB_00536220;
            do {
              auVar3 = *pauVar18;
              pauVar16 = pauVar16 + -0x58;
              pauVar18 = pauVar18 + 1;
              uVar19 = (ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                                (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                                (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                                (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                                (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                                (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                                (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                                (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                                (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                                (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                                (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                                (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar3[0xf] >> 7) << 0xf) ^ 0xffff;
            } while (uVar19 == 0);
          }
          uVar7 = 0;
          for (uVar8 = uVar19; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
            uVar7 = uVar7 + 1;
          }
          uVar19 = uVar19 - 1 & uVar19;
          uVar4 = *(ulonglong *)((longlong)pauVar16 + (ulonglong)uVar7 * -0x58 + -8);
          if (uVar4 <= uVar15) {
            uVar15 = uVar4;
          }
          goto LAB_005361ee;
        }
      }
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_00535f28;
    }
  }
  (*(code *)PTR_handle_error_00798ff0)();
LAB_00535f28:
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
LAB_00536220:
  (*(code *)puVar10)();
  uVar13 = local_c8;
  local_80 = local_c0;
  uStack_78 = uStack_b8;
  local_88 = local_c8;
  uVar21 = <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::ResponseBinding,std[6c98fd8553dbae28]::hash::random::RandomState>>
           ::remove::<alloc[12e961f32105355]::string::String>(&local_c8,puVar1,&local_88);
  if (local_c8 != 0xffffffffffffffff) {
    if (local_c8 != 0) {
      uVar21 = (*(code *)puVar9)(uVar21,1);
    }
    if (local_b0 != 0) {
      uVar21 = (*(code *)puVar9)(uVar21,1);
    }
  }
  if (uVar13 != 0) {
    (*(code *)puVar9)(uVar21,1);
  }
  uVar13 = *(ulonglong *)(param_1 + 0x60);
  if (uVar13 <= *(ulonglong *)(param_1 + 0x78)) {
    return;
  }
  goto LAB_00536163;
}


