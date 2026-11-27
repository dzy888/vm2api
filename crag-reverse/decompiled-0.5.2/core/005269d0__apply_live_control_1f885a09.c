// 005269d0 apply_live_control

/* <craggemini_core[66f3c71560d70857]::resume::SessionStore>::apply_live_control */

undefined8 * __rustcall
<craggemini_core[66f3c71560d70857]::resume::SessionStore>::apply_live_control
          (undefined8 *param_1,longlong param_2,char *param_3,longlong param_4,longlong param_5,
          longlong param_6)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_01;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar5;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 local_90;
  longlong lStack_88;
  undefined8 local_80;
  undefined8 local_78;
  longlong lStack_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong lStack_40;
  undefined8 local_38;
  
  if (*(longlong *)(param_2 + 0x60) == -1) {
    local_60 = -1;
    if (param_4 == 0x13) goto LAB_00526ab8;
LAB_00526a14:
    if (param_4 == 0x11) {
      auVar8[0] = -(*param_3 == DAT_00183bb0);
      auVar8[1] = -(param_3[1] == UNK_00183bb1);
      auVar8[2] = -(param_3[2] == UNK_00183bb2);
      auVar8[3] = -(param_3[3] == UNK_00183bb3);
      auVar8[4] = -(param_3[4] == UNK_00183bb4);
      auVar8[5] = -(param_3[5] == UNK_00183bb5);
      auVar8[6] = -(param_3[6] == UNK_00183bb6);
      auVar8[7] = -(param_3[7] == UNK_00183bb7);
      auVar8[8] = -(param_3[8] == UNK_00183bb8);
      auVar8[9] = -(param_3[9] == UNK_00183bb9);
      auVar8[10] = -(param_3[10] == UNK_00183bba);
      auVar8[0xb] = -(param_3[0xb] == UNK_00183bbb);
      auVar8[0xc] = -(param_3[0xc] == UNK_00183bbc);
      auVar8[0xd] = -(param_3[0xd] == UNK_00183bbd);
      auVar8[0xe] = -(param_3[0xe] == UNK_00183bbe);
      auVar8[0xf] = -(param_3[0xf] == UNK_00183bbf);
      auVar10[0] = -(param_3[0x10] == DAT_00184730);
      auVar10[1] = -(UNK_00184731 == '\0');
      auVar10[2] = -(UNK_00184732 == '\0');
      auVar10[3] = -(UNK_00184733 == '\0');
      auVar10[4] = -(UNK_00184734 == '\0');
      auVar10[5] = -(UNK_00184735 == '\0');
      auVar10[6] = -(UNK_00184736 == '\0');
      auVar10[7] = -(UNK_00184737 == '\0');
      auVar10[8] = -(UNK_00184738 == '\0');
      auVar10[9] = -(UNK_00184739 == '\0');
      auVar10[10] = -(UNK_0018473a == '\0');
      auVar10[0xb] = -(UNK_0018473b == '\0');
      auVar10[0xc] = -(UNK_0018473c == '\0');
      auVar10[0xd] = -(UNK_0018473d == '\0');
      auVar10[0xe] = -(UNK_0018473e == '\0');
      auVar10[0xf] = -(UNK_0018473f == '\0');
      auVar10 = auVar10 & auVar8;
      if ((ushort)((ushort)(SUB161(auVar10 >> 7,0) & 1) |
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
                  (ushort)(byte)(auVar10[0xf] >> 7) << 0xf) != 0xffff) goto LAB_00526b5d;
      if (param_5 == 0) {
        lVar4 = -1;
      }
      else {
        if (param_6 < 0) {
LAB_00526b96:
          (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        if (param_6 == 0) {
          param_3 = (char *)0x1;
          lVar4 = 0;
        }
        else {
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          param_3 = (char *)(*(code *)PTR___rust_alloc_00799000)();
          if (param_3 == (char *)0x0) goto LAB_00526b96;
          (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa_01,param_6);
          lVar4 = param_6;
        }
      }
      if ((*(longlong *)(param_2 + 0x90) != -1) && (*(longlong *)(param_2 + 0x90) != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      *(longlong *)(param_2 + 0x90) = lVar4;
      *(char **)(param_2 + 0x98) = param_3;
      *(longlong *)(param_2 + 0xa0) = lVar4;
      local_90 = 0xffffffffffffffff;
      uVar5 = 0;
      if (local_60 != -1) {
        uVar5 = local_58;
      }
      create_record(&local_78,param_2,&local_90,uVar5,local_50,0);
      if (param_5 == 0) {
        uVar3 = persist(param_2);
        if (((uVar3 != 0) && (1 < ((uint)uVar3 & 3) - 2)) && ((uVar3 & 3) != 0)) {
          lStack_88 = uVar3 - 1;
          local_90 = CONCAT71(local_90._1_7_,3);
          (*(code *)PTR_drop_00799040)();
        }
      }
      else {
        bind_native_conversation_id(param_2,lStack_70,local_68,param_5,param_6);
      }
LAB_00526ee2:
      param_1[2] = local_68;
      uVar5 = local_78;
      lVar4 = lStack_70;
    }
    else {
      if ((param_4 == 0x10) &&
         (auVar6[0] = -(*param_3 ==
                       anon_2c3f00c6db51fc4e52b1607637b553f4_35_llvm_6489901693990513673[0]),
         auVar6[1] = -(param_3[1] ==
                      anon_2c3f00c6db51fc4e52b1607637b553f4_35_llvm_6489901693990513673[1]),
         auVar6[2] = -(param_3[2] ==
                      anon_2c3f00c6db51fc4e52b1607637b553f4_35_llvm_6489901693990513673[2]),
         auVar6[3] = -(param_3[3] ==
                      anon_2c3f00c6db51fc4e52b1607637b553f4_35_llvm_6489901693990513673[3]),
         auVar6[4] = -(param_3[4] ==
                      anon_2c3f00c6db51fc4e52b1607637b553f4_35_llvm_6489901693990513673[4]),
         auVar6[5] = -(param_3[5] ==
                      anon_2c3f00c6db51fc4e52b1607637b553f4_35_llvm_6489901693990513673[5]),
         auVar6[6] = -(param_3[6] ==
                      anon_2c3f00c6db51fc4e52b1607637b553f4_35_llvm_6489901693990513673[6]),
         auVar6[7] = -(param_3[7] ==
                      anon_2c3f00c6db51fc4e52b1607637b553f4_35_llvm_6489901693990513673[7]),
         auVar6[8] = -(param_3[8] ==
                      anon_2c3f00c6db51fc4e52b1607637b553f4_35_llvm_6489901693990513673[8]),
         auVar6[9] = -(param_3[9] ==
                      anon_2c3f00c6db51fc4e52b1607637b553f4_35_llvm_6489901693990513673[9]),
         auVar6[10] = -(param_3[10] ==
                       anon_2c3f00c6db51fc4e52b1607637b553f4_35_llvm_6489901693990513673[10]),
         auVar6[0xb] = -(param_3[0xb] ==
                        anon_2c3f00c6db51fc4e52b1607637b553f4_35_llvm_6489901693990513673[0xb]),
         auVar6[0xc] = -(param_3[0xc] ==
                        anon_2c3f00c6db51fc4e52b1607637b553f4_35_llvm_6489901693990513673[0xc]),
         auVar6[0xd] = -(param_3[0xd] ==
                        anon_2c3f00c6db51fc4e52b1607637b553f4_35_llvm_6489901693990513673[0xd]),
         auVar6[0xe] = -(param_3[0xe] ==
                        anon_2c3f00c6db51fc4e52b1607637b553f4_35_llvm_6489901693990513673[0xe]),
         auVar6[0xf] = -(param_3[0xf] ==
                        anon_2c3f00c6db51fc4e52b1607637b553f4_35_llvm_6489901693990513673[0xf]),
         (ushort)((ushort)(SUB161(auVar6 >> 7,0) & 1) | (ushort)(SUB161(auVar6 >> 0xf,0) & 1) << 1 |
                  (ushort)(SUB161(auVar6 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar6 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar6 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar6 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar6 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar6 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar6 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar6 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar6 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar6 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar6 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar6 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar6 >> 0x77,0) & 1) << 0xe | (ushort)(auVar6[0xf] >> 7) << 0xf)
         == 0xffff)) {
        if (param_5 == 0) {
          lVar4 = *(longlong *)(param_2 + 0x90);
          lVar2 = -1;
        }
        else {
          if (param_6 < 0) goto LAB_00526b96;
          if (param_6 == 0) {
            param_3 = (char *)0x1;
            lVar4 = *(longlong *)(param_2 + 0x90);
            lVar2 = 0;
          }
          else {
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            param_3 = (char *)(*(code *)PTR___rust_alloc_00799000)();
            if (param_3 == (char *)0x0) goto LAB_00526b96;
            (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa,param_6);
            lVar4 = *(longlong *)(param_2 + 0x90);
            lVar2 = param_6;
          }
        }
        if ((lVar4 != -1) && (lVar4 != 0)) {
          (*(code *)PTR___rust_dealloc_00798fc8)();
        }
        *(longlong *)(param_2 + 0x90) = lVar2;
        *(char **)(param_2 + 0x98) = param_3;
        *(longlong *)(param_2 + 0xa0) = lVar2;
        local_90 = 0xffffffffffffffff;
        uVar5 = 0;
        if (local_60 != -1) {
          uVar5 = local_58;
        }
        create_record(&local_78,param_2,&local_90,uVar5,local_50,0);
        if (param_5 == 0) {
          uVar3 = persist(param_2);
          if (((uVar3 != 0) && (1 < ((uint)uVar3 & 3) - 2)) && ((uVar3 & 3) != 0)) {
            lStack_88 = uVar3 - 1;
            local_90 = CONCAT71(local_90._1_7_,3);
            (*(code *)PTR_drop_00799040)();
          }
        }
        else {
          bind_native_conversation_id(param_2,lStack_70,local_68,param_5,param_6);
        }
        goto LAB_00526ee2;
      }
LAB_00526b5d:
      if (*(longlong *)(param_2 + 0x78) == -1) goto LAB_00526bc8;
      (*(code *)PTR_clone_00798fd0)();
LAB_00526b76:
      param_1[2] = local_80;
      uVar5 = local_90;
      lVar4 = lStack_88;
    }
LAB_00526ef1:
    *param_1 = uVar5;
    param_1[1] = lVar4;
    lVar4 = local_60;
  }
  else {
    (*(code *)PTR_clone_00798fd0)();
    if (param_4 != 0x13) goto LAB_00526a14;
LAB_00526ab8:
    auVar9[0] = -(param_3[3] == DAT_00184820);
    auVar9[1] = -(param_3[4] == UNK_00184821);
    auVar9[2] = -(param_3[5] == UNK_00184822);
    auVar9[3] = -(param_3[6] == UNK_00184823);
    auVar9[4] = -(param_3[7] == UNK_00184824);
    auVar9[5] = -(param_3[8] == UNK_00184825);
    auVar9[6] = -(param_3[9] == UNK_00184826);
    auVar9[7] = -(param_3[10] == UNK_00184827);
    auVar9[8] = -(param_3[0xb] == UNK_00184828);
    auVar9[9] = -(param_3[0xc] == UNK_00184829);
    auVar9[10] = -(param_3[0xd] == UNK_0018482a);
    auVar9[0xb] = -(param_3[0xe] == UNK_0018482b);
    auVar9[0xc] = -(param_3[0xf] == UNK_0018482c);
    auVar9[0xd] = -(param_3[0x10] == UNK_0018482d);
    auVar9[0xe] = -(param_3[0x11] == UNK_0018482e);
    auVar9[0xf] = -(param_3[0x12] == UNK_0018482f);
    auVar7[0] = -(*param_3 == s_switch_conversat_internal_v1_ima_00183440[0]);
    auVar7[1] = -(param_3[1] == s_switch_conversat_internal_v1_ima_00183440[1]);
    auVar7[2] = -(param_3[2] == s_switch_conversat_internal_v1_ima_00183440[2]);
    auVar7[3] = -(param_3[3] == s_switch_conversat_internal_v1_ima_00183440[3]);
    auVar7[4] = -(param_3[4] == s_switch_conversat_internal_v1_ima_00183440[4]);
    auVar7[5] = -(param_3[5] == s_switch_conversat_internal_v1_ima_00183440[5]);
    auVar7[6] = -(param_3[6] == s_switch_conversat_internal_v1_ima_00183440[6]);
    auVar7[7] = -(param_3[7] == s_switch_conversat_internal_v1_ima_00183440[7]);
    auVar7[8] = -(param_3[8] == s_switch_conversat_internal_v1_ima_00183440[8]);
    auVar7[9] = -(param_3[9] == s_switch_conversat_internal_v1_ima_00183440[9]);
    auVar7[10] = -(param_3[10] == s_switch_conversat_internal_v1_ima_00183440[10]);
    auVar7[0xb] = -(param_3[0xb] == s_switch_conversat_internal_v1_ima_00183440[0xb]);
    auVar7[0xc] = -(param_3[0xc] == s_switch_conversat_internal_v1_ima_00183440[0xc]);
    auVar7[0xd] = -(param_3[0xd] == s_switch_conversat_internal_v1_ima_00183440[0xd]);
    auVar7[0xe] = -(param_3[0xe] == s_switch_conversat_internal_v1_ima_00183440[0xe]);
    auVar7[0xf] = -(param_3[0xf] == s_switch_conversat_internal_v1_ima_00183440[0xf]);
    auVar7 = auVar7 & auVar9;
    uVar5 = auVar7._0_8_;
    if ((ushort)((ushort)(SUB161(auVar7 >> 7,0) & 1) | (ushort)(SUB161(auVar7 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar7 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar7 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar7 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar7 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar7 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar7 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar7 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar7 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar7 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar7 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar7 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar7 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar7 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar7[0xf] >> 7) << 0xf) != 0xffff) goto LAB_00526b5d;
    if (param_5 != 0) {
      if (param_6 < 0) goto LAB_00526b96;
      if (param_6 == 0) {
        lVar4 = 1;
      }
      else {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        lVar4 = (*(code *)PTR___rust_alloc_00799000)();
        if (lVar4 == 0) goto LAB_00526b96;
        uVar5 = (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa_00,param_6);
      }
      if ((*(longlong *)(param_2 + 0x90) != -1) && (*(longlong *)(param_2 + 0x90) != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar5,1);
      }
      *(longlong *)(param_2 + 0x90) = param_6;
      *(longlong *)(param_2 + 0x98) = lVar4;
      *(longlong *)(param_2 + 0xa0) = param_6;
      lVar2 = find(param_2,param_5,param_6);
      lVar4 = local_60;
      if (lVar2 == 0) {
        local_90 = 0xffffffffffffffff;
        uVar5 = 0;
        if (local_60 != -1) {
          uVar5 = local_58;
        }
        create_record(&local_78,param_2,&local_90,uVar5,local_50,0);
        bind_native_conversation_id(param_2,lStack_70,local_68,param_5,param_6);
        param_1[2] = local_68;
        *param_1 = local_78;
        param_1[1] = lStack_70;
        goto joined_r0x00526fd0;
      }
      (*(code *)PTR_clone_00798fd0)();
      local_38 = local_80;
      local_48 = local_90;
      lStack_40 = lStack_88;
      (*(code *)PTR_clone_00798fd0)();
      local_68 = local_80;
      local_78 = local_90;
      lStack_70 = lStack_88;
      if ((*(longlong *)(param_2 + 0x78) != -1) && (*(longlong *)(param_2 + 0x78) != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      *(undefined8 *)(param_2 + 0x88) = local_68;
      *(undefined8 *)(param_2 + 0x78) = local_78;
      *(longlong *)(param_2 + 0x80) = lStack_70;
      touch_record(*(undefined8 *)(param_2 + 0x38),*(undefined8 *)(param_2 + 0x40),lStack_40,
                   local_38);
      uVar3 = persist(param_2);
      if (((uVar3 != 0) && (1 < ((uint)uVar3 & 3) - 2)) && ((uVar3 & 3) != 0)) {
        lStack_88 = uVar3 - 1;
        local_90 = CONCAT71(local_90._1_7_,3);
        (*(code *)PTR_drop_00799040)();
      }
      param_1[2] = local_38;
      uVar5 = local_48;
      lVar4 = lStack_40;
      goto LAB_00526ef1;
    }
    if (*(longlong *)(param_2 + 0x78) != -1) {
      (*(code *)PTR_clone_00798fd0)();
      goto LAB_00526b76;
    }
LAB_00526bc8:
    *param_1 = 0xffffffffffffffff;
    lVar4 = local_60;
  }
joined_r0x00526fd0:
  if ((lVar4 != -1) && (lVar4 != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  return param_1;
}


