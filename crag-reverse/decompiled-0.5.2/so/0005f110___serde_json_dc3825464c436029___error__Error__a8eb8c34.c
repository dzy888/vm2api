// 0005f110 <serde_json[dc3825464c436029]::error::Error>

/* <<agy_bridge[64a9e9deac6c45ce]::protocol::RingSubmitMeta as
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor as
   serde_core[48776c27239fa21f]::de::Visitor>::visit_str::<serde_json[dc3825464c436029]::error::Error>
    */

void __rustcall
<<agy_bridge[64a9e9deac6c45ce]::protocol::RingSubmitMeta_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor_as_serde_core[48776c27239fa21f]::de::Visitor>
::visit_str::<serde_json[dc3825464c436029]::error::Error>
          (undefined1 *param_1,longlong *param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  switch(param_3) {
  case 10:
    if ((short)param_2[1] == 0x6469 && *param_2 == 0x5f74736575716572) {
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
    break;
  case 0xb:
    if (*(longlong *)((longlong)param_2 + 3) == 0x7265746c69665f6c && *param_2 == 0x6c69665f6c6f6f74
       ) {
      param_1[1] = 8;
      *param_1 = 0;
      return;
    }
    break;
  case 0xd:
    if (*(longlong *)((longlong)param_2 + 5) == 0x74706d6f72705f6d && *param_2 == 0x705f6d6574737973
       ) {
      param_1[1] = 5;
      *param_1 = 0;
      return;
    }
    break;
  case 0xe:
    if (*(longlong *)((longlong)param_2 + 6) == 0x6c6576656c5f676e && *param_2 == 0x676e696b6e696874
       ) {
      param_1[1] = 6;
      *param_1 = 0;
      return;
    }
    break;
  case 0xf:
    if (*(longlong *)((longlong)param_2 + 7) == 0x73746e6567616275 && *param_2 == 0x75735f776f6c6c61
       ) {
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
    break;
  case 0x10:
    auVar1[0] = -((char)*param_2 ==
                 anon_da5c47adb6433ca5f625c1319540aa31_32_llvm_1675394880211241453[0]);
    auVar1[1] = -(*(char *)((longlong)param_2 + 1) ==
                 anon_da5c47adb6433ca5f625c1319540aa31_32_llvm_1675394880211241453[1]);
    auVar1[2] = -(*(char *)((longlong)param_2 + 2) ==
                 anon_da5c47adb6433ca5f625c1319540aa31_32_llvm_1675394880211241453[2]);
    auVar1[3] = -(*(char *)((longlong)param_2 + 3) ==
                 anon_da5c47adb6433ca5f625c1319540aa31_32_llvm_1675394880211241453[3]);
    auVar1[4] = -(*(char *)((longlong)param_2 + 4) ==
                 anon_da5c47adb6433ca5f625c1319540aa31_32_llvm_1675394880211241453[4]);
    auVar1[5] = -(*(char *)((longlong)param_2 + 5) ==
                 anon_da5c47adb6433ca5f625c1319540aa31_32_llvm_1675394880211241453[5]);
    auVar1[6] = -(*(char *)((longlong)param_2 + 6) ==
                 anon_da5c47adb6433ca5f625c1319540aa31_32_llvm_1675394880211241453[6]);
    auVar1[7] = -(*(char *)((longlong)param_2 + 7) ==
                 anon_da5c47adb6433ca5f625c1319540aa31_32_llvm_1675394880211241453[7]);
    auVar1[8] = -((char)param_2[1] ==
                 anon_da5c47adb6433ca5f625c1319540aa31_32_llvm_1675394880211241453[8]);
    auVar1[9] = -(*(char *)((longlong)param_2 + 9) ==
                 anon_da5c47adb6433ca5f625c1319540aa31_32_llvm_1675394880211241453[9]);
    auVar1[10] = -(*(char *)((longlong)param_2 + 10) ==
                  anon_da5c47adb6433ca5f625c1319540aa31_32_llvm_1675394880211241453[10]);
    auVar1[0xb] = -(*(char *)((longlong)param_2 + 0xb) ==
                   anon_da5c47adb6433ca5f625c1319540aa31_32_llvm_1675394880211241453[0xb]);
    auVar1[0xc] = -(*(char *)((longlong)param_2 + 0xc) ==
                   anon_da5c47adb6433ca5f625c1319540aa31_32_llvm_1675394880211241453[0xc]);
    auVar1[0xd] = -(*(char *)((longlong)param_2 + 0xd) ==
                   anon_da5c47adb6433ca5f625c1319540aa31_32_llvm_1675394880211241453[0xd]);
    auVar1[0xe] = -(*(char *)((longlong)param_2 + 0xe) ==
                   anon_da5c47adb6433ca5f625c1319540aa31_32_llvm_1675394880211241453[0xe]);
    auVar1[0xf] = -(*(char *)((longlong)param_2 + 0xf) ==
                   anon_da5c47adb6433ca5f625c1319540aa31_32_llvm_1675394880211241453[0xf]);
    if ((ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
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
                 (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe | (ushort)(auVar1[0xf] >> 7) << 0xf)
        == 0xffff) {
      param_1[1] = 7;
      *param_1 = 0;
      return;
    }
    break;
  case 0x12:
    auVar2[0] = -((char)*param_2 == s_system_prompt_mo_00008c50[0]);
    auVar2[1] = -(*(char *)((longlong)param_2 + 1) == s_system_prompt_mo_00008c50[1]);
    auVar2[2] = -(*(char *)((longlong)param_2 + 2) == s_system_prompt_mo_00008c50[2]);
    auVar2[3] = -(*(char *)((longlong)param_2 + 3) == s_system_prompt_mo_00008c50[3]);
    auVar2[4] = -(*(char *)((longlong)param_2 + 4) == s_system_prompt_mo_00008c50[4]);
    auVar2[5] = -(*(char *)((longlong)param_2 + 5) == s_system_prompt_mo_00008c50[5]);
    auVar2[6] = -(*(char *)((longlong)param_2 + 6) == s_system_prompt_mo_00008c50[6]);
    auVar2[7] = -(*(char *)((longlong)param_2 + 7) == s_system_prompt_mo_00008c50[7]);
    auVar2[8] = -((char)param_2[1] == s_system_prompt_mo_00008c50[8]);
    auVar2[9] = -(*(char *)((longlong)param_2 + 9) == s_system_prompt_mo_00008c50[9]);
    auVar2[10] = -(*(char *)((longlong)param_2 + 10) == s_system_prompt_mo_00008c50[10]);
    auVar2[0xb] = -(*(char *)((longlong)param_2 + 0xb) == s_system_prompt_mo_00008c50[0xb]);
    auVar2[0xc] = -(*(char *)((longlong)param_2 + 0xc) == s_system_prompt_mo_00008c50[0xc]);
    auVar2[0xd] = -(*(char *)((longlong)param_2 + 0xd) == s_system_prompt_mo_00008c50[0xd]);
    auVar2[0xe] = -(*(char *)((longlong)param_2 + 0xe) == s_system_prompt_mo_00008c50[0xe]);
    auVar2[0xf] = -(*(char *)((longlong)param_2 + 0xf) == s_system_prompt_mo_00008c50[0xf]);
    auVar5[0] = -((char)param_2[2] == s_de_00008cb0[0]);
    auVar5[1] = -((char)((ulonglong)param_2[2] >> 8) == s_de_00008cb0[1]);
    auVar5[2] = -(s_de_00008cb0[2] == '\0');
    auVar5[3] = -(s_de_00008cb0[3] == '\0');
    auVar5[4] = -(UNK_00008cb4 == '\0');
    auVar5[5] = -(UNK_00008cb5 == '\0');
    auVar5[6] = -(UNK_00008cb6 == '\0');
    auVar5[7] = -(UNK_00008cb7 == '\0');
    auVar5[8] = -(UNK_00008cb8 == '\0');
    auVar5[9] = -(UNK_00008cb9 == '\0');
    auVar5[10] = -(UNK_00008cba == '\0');
    auVar5[0xb] = -(UNK_00008cbb == '\0');
    auVar5[0xc] = -(UNK_00008cbc == '\0');
    auVar5[0xd] = -(UNK_00008cbd == '\0');
    auVar5[0xe] = -(UNK_00008cbe == '\0');
    auVar5[0xf] = -(UNK_00008cbf == '\0');
    auVar5 = auVar5 & auVar2;
    if ((ushort)((ushort)(SUB161(auVar5 >> 7,0) & 1) | (ushort)(SUB161(auVar5 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar5 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar5 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar5 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar5 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar5 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar5 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar5 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar5 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar5 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar5 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar5 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar5 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar5 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar5[0xf] >> 7) << 0xf) == 0xffff) {
      param_1[1] = 4;
      *param_1 = 0;
      return;
    }
    break;
  case 0x13:
    auVar6[0] = -(*(char *)((longlong)param_2 + 3) == s_ow_multi_attempt_00008ed0[0]);
    auVar6[1] = -(*(char *)((longlong)param_2 + 4) == s_ow_multi_attempt_00008ed0[1]);
    auVar6[2] = -(*(char *)((longlong)param_2 + 5) == s_ow_multi_attempt_00008ed0[2]);
    auVar6[3] = -(*(char *)((longlong)param_2 + 6) == s_ow_multi_attempt_00008ed0[3]);
    auVar6[4] = -(*(char *)((longlong)param_2 + 7) == s_ow_multi_attempt_00008ed0[4]);
    auVar6[5] = -((char)param_2[1] == s_ow_multi_attempt_00008ed0[5]);
    auVar6[6] = -(*(char *)((longlong)param_2 + 9) == s_ow_multi_attempt_00008ed0[6]);
    auVar6[7] = -(*(char *)((longlong)param_2 + 10) == s_ow_multi_attempt_00008ed0[7]);
    auVar6[8] = -(*(char *)((longlong)param_2 + 0xb) == s_ow_multi_attempt_00008ed0[8]);
    auVar6[9] = -(*(char *)((longlong)param_2 + 0xc) == s_ow_multi_attempt_00008ed0[9]);
    auVar6[10] = -(*(char *)((longlong)param_2 + 0xd) == s_ow_multi_attempt_00008ed0[10]);
    auVar6[0xb] = -(*(char *)((longlong)param_2 + 0xe) == s_ow_multi_attempt_00008ed0[0xb]);
    auVar6[0xc] = -(*(char *)((longlong)param_2 + 0xf) == s_ow_multi_attempt_00008ed0[0xc]);
    auVar6[0xd] = -((char)param_2[2] == s_ow_multi_attempt_00008ed0[0xd]);
    auVar6[0xe] = -(*(char *)((longlong)param_2 + 0x11) == s_ow_multi_attempt_00008ed0[0xe]);
    auVar6[0xf] = -(*(char *)((longlong)param_2 + 0x12) == s_ow_multi_attempt_00008ed0[0xf]);
    auVar3[0] = -((char)*param_2 == DAT_00008e70);
    auVar3[1] = -(*(char *)((longlong)param_2 + 1) == UNK_00008e71);
    auVar3[2] = -(*(char *)((longlong)param_2 + 2) == UNK_00008e72);
    auVar3[3] = -(*(char *)((longlong)param_2 + 3) == UNK_00008e73);
    auVar3[4] = -(*(char *)((longlong)param_2 + 4) == UNK_00008e74);
    auVar3[5] = -(*(char *)((longlong)param_2 + 5) == UNK_00008e75);
    auVar3[6] = -(*(char *)((longlong)param_2 + 6) == UNK_00008e76);
    auVar3[7] = -(*(char *)((longlong)param_2 + 7) == UNK_00008e77);
    auVar3[8] = -((char)param_2[1] == UNK_00008e78);
    auVar3[9] = -(*(char *)((longlong)param_2 + 9) == UNK_00008e79);
    auVar3[10] = -(*(char *)((longlong)param_2 + 10) == UNK_00008e7a);
    auVar3[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_00008e7b);
    auVar3[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_00008e7c);
    auVar3[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_00008e7d);
    auVar3[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_00008e7e);
    auVar3[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_00008e7f);
    auVar3 = auVar3 & auVar6;
    if ((ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) | (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
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
                (ushort)(byte)(auVar3[0xf] >> 7) << 0xf) == 0xffff) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
    break;
  case 0x1f:
    auVar7[0] = -(*(char *)((longlong)param_2 + 0xf) == DAT_00008d80);
    auVar7[1] = -((char)param_2[2] == UNK_00008d81);
    auVar7[2] = -(*(char *)((longlong)param_2 + 0x11) == UNK_00008d82);
    auVar7[3] = -(*(char *)((longlong)param_2 + 0x12) == UNK_00008d83);
    auVar7[4] = -(*(char *)((longlong)param_2 + 0x13) == UNK_00008d84);
    auVar7[5] = -(*(char *)((longlong)param_2 + 0x14) == UNK_00008d85);
    auVar7[6] = -(*(char *)((longlong)param_2 + 0x15) == UNK_00008d86);
    auVar7[7] = -(*(char *)((longlong)param_2 + 0x16) == UNK_00008d87);
    auVar7[8] = -(*(char *)((longlong)param_2 + 0x17) == UNK_00008d88);
    auVar7[9] = -((char)param_2[3] == UNK_00008d89);
    auVar7[10] = -(*(char *)((longlong)param_2 + 0x19) == UNK_00008d8a);
    auVar7[0xb] = -(*(char *)((longlong)param_2 + 0x1a) == UNK_00008d8b);
    auVar7[0xc] = -(*(char *)((longlong)param_2 + 0x1b) == UNK_00008d8c);
    auVar7[0xd] = -(*(char *)((longlong)param_2 + 0x1c) == UNK_00008d8d);
    auVar7[0xe] = -(*(char *)((longlong)param_2 + 0x1d) == UNK_00008d8e);
    auVar7[0xf] = -(*(char *)((longlong)param_2 + 0x1e) == UNK_00008d8f);
    auVar4[0] = -((char)*param_2 == s_expected_native__00009170[0]);
    auVar4[1] = -(*(char *)((longlong)param_2 + 1) == s_expected_native__00009170[1]);
    auVar4[2] = -(*(char *)((longlong)param_2 + 2) == s_expected_native__00009170[2]);
    auVar4[3] = -(*(char *)((longlong)param_2 + 3) == s_expected_native__00009170[3]);
    auVar4[4] = -(*(char *)((longlong)param_2 + 4) == s_expected_native__00009170[4]);
    auVar4[5] = -(*(char *)((longlong)param_2 + 5) == s_expected_native__00009170[5]);
    auVar4[6] = -(*(char *)((longlong)param_2 + 6) == s_expected_native__00009170[6]);
    auVar4[7] = -(*(char *)((longlong)param_2 + 7) == s_expected_native__00009170[7]);
    auVar4[8] = -((char)param_2[1] == s_expected_native__00009170[8]);
    auVar4[9] = -(*(char *)((longlong)param_2 + 9) == s_expected_native__00009170[9]);
    auVar4[10] = -(*(char *)((longlong)param_2 + 10) == s_expected_native__00009170[10]);
    auVar4[0xb] = -(*(char *)((longlong)param_2 + 0xb) == s_expected_native__00009170[0xb]);
    auVar4[0xc] = -(*(char *)((longlong)param_2 + 0xc) == s_expected_native__00009170[0xc]);
    auVar4[0xd] = -(*(char *)((longlong)param_2 + 0xd) == s_expected_native__00009170[0xd]);
    auVar4[0xe] = -(*(char *)((longlong)param_2 + 0xe) == s_expected_native__00009170[0xe]);
    auVar4[0xf] = -(*(char *)((longlong)param_2 + 0xf) == s_expected_native__00009170[0xf]);
    auVar4 = auVar4 & auVar7;
    if ((ushort)((ushort)(SUB161(auVar4 >> 7,0) & 1) | (ushort)(SUB161(auVar4 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar4 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar4 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar4 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar4 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar4 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar4 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar4 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar4 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar4 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar4 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar4 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar4 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar4 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar4[0xf] >> 7) << 0xf) == 0xffff) {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
  }
  param_1[1] = 9;
  *param_1 = 0;
  return;
}


