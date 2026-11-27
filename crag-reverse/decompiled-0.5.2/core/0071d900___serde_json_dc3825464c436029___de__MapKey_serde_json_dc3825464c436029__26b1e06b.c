// 0071d900 <serde_json[dc3825464c436029]::de::MapKey<serde_json[dc3825464c436029]::read::StrRead>>

/* <serde_json[dc3825464c436029]::value::de::KeyClassifier as
   serde_core[48776c27239fa21f]::de::DeserializeSeed>::deserialize::<serde_json[dc3825464c436029]::de::MapKey<serde_json[dc3825464c436029]::read::StrRead>>
    */

longlong * __rustcall
<serde_json[dc3825464c436029]::value::de::KeyClassifier_as_serde_core[48776c27239fa21f]::de::DeserializeSeed>
::deserialize::
<serde_json[dc3825464c436029]::de::MapKey<serde_json[dc3825464c436029]::read::StrRead>>
          (longlong *param_1,longlong param_2)

{
  code *pcVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 uVar4;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  int local_48;
  char *local_40;
  longlong local_38;
  
  *(longlong *)(param_2 + 0x28) = *(longlong *)(param_2 + 0x28) + 1;
  *(undefined8 *)(param_2 + 0x10) = 0;
  (*(code *)PTR_parse_str_007998f0)();
  if (local_48 == 2) {
    param_1[1] = (longlong)local_40;
    *param_1 = -2;
    return param_1;
  }
  if (local_38 == 0x1e) {
    auVar7[0] = -(local_40[0xe] == DAT_001845d0);
    auVar7[1] = -(local_40[0xf] == UNK_001845d1);
    auVar7[2] = -(local_40[0x10] == UNK_001845d2);
    auVar7[3] = -(local_40[0x11] == UNK_001845d3);
    auVar7[4] = -(local_40[0x12] == UNK_001845d4);
    auVar7[5] = -(local_40[0x13] == UNK_001845d5);
    auVar7[6] = -(local_40[0x14] == UNK_001845d6);
    auVar7[7] = -(local_40[0x15] == UNK_001845d7);
    auVar7[8] = -(local_40[0x16] == UNK_001845d8);
    auVar7[9] = -(local_40[0x17] == UNK_001845d9);
    auVar7[10] = -(local_40[0x18] == UNK_001845da);
    auVar7[0xb] = -(local_40[0x19] == UNK_001845db);
    auVar7[0xc] = -(local_40[0x1a] == UNK_001845dc);
    auVar7[0xd] = -(local_40[0x1b] == UNK_001845dd);
    auVar7[0xe] = -(local_40[0x1c] == UNK_001845de);
    auVar7[0xf] = -(local_40[0x1d] == UNK_001845df);
    auVar6[0] = -(*local_40 == s__serde_json__pri1_001837c0[0]);
    auVar6[1] = -(local_40[1] == s__serde_json__pri1_001837c0[1]);
    auVar6[2] = -(local_40[2] == s__serde_json__pri1_001837c0[2]);
    auVar6[3] = -(local_40[3] == s__serde_json__pri1_001837c0[3]);
    auVar6[4] = -(local_40[4] == s__serde_json__pri1_001837c0[4]);
    auVar6[5] = -(local_40[5] == s__serde_json__pri1_001837c0[5]);
    auVar6[6] = -(local_40[6] == s__serde_json__pri1_001837c0[6]);
    auVar6[7] = -(local_40[7] == s__serde_json__pri1_001837c0[7]);
    auVar6[8] = -(local_40[8] == s__serde_json__pri1_001837c0[8]);
    auVar6[9] = -(local_40[9] == s__serde_json__pri1_001837c0[9]);
    auVar6[10] = -(local_40[10] == s__serde_json__pri1_001837c0[10]);
    auVar6[0xb] = -(local_40[0xb] == s__serde_json__pri1_001837c0[0xb]);
    auVar6[0xc] = -(local_40[0xc] == s__serde_json__pri1_001837c0[0xc]);
    auVar6[0xd] = -(local_40[0xd] == s__serde_json__pri1_001837c0[0xd]);
    auVar6[0xe] = -(local_40[0xe] == s__serde_json__pri1_001837c0[0xe]);
    auVar6[0xf] = -(local_40[0xf] == s__serde_json__pri1_001837c0[0xf]);
    auVar6 = auVar6 & auVar7;
    if ((ushort)((ushort)(SUB161(auVar6 >> 7,0) & 1) | (ushort)(SUB161(auVar6 >> 0xf,0) & 1) << 1 |
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
                 (ushort)(SUB161(auVar6 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar6[0xf] >> 7) << 0xf) == 0xffff) {
      *param_1 = -1;
      return param_1;
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    lVar2 = (*(code *)PTR___rust_alloc_00799000)();
    uVar5 = extraout_XMM0_Qa;
    if (lVar2 == 0) {
LAB_0071d9ad:
      uVar4 = 1;
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_0071d9b9;
    }
  }
  else {
    uVar4 = local_38 == 0;
    if (local_38 < 0) goto LAB_0071d9ad;
LAB_0071d9b9:
    if ((bool)uVar4) {
      lVar2 = 1;
      goto LAB_0071d9ec;
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    lVar2 = (*(code *)PTR___rust_alloc_00799000)();
    uVar5 = extraout_XMM0_Qa_00;
    if (lVar2 == 0) {
      (*(code *)PTR_handle_error_00798ff0)();
      pcVar1 = (code *)swi(3);
      plVar3 = (longlong *)(*pcVar1)();
      return plVar3;
    }
  }
  (*(code *)PTR_memcpy_00799008)(uVar5,local_38);
LAB_0071d9ec:
  *param_1 = local_38;
  param_1[1] = lVar2;
  param_1[2] = local_38;
  return param_1;
}


