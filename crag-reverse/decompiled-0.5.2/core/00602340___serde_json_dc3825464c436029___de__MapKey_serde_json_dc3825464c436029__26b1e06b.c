// 00602340 <serde_json[dc3825464c436029]::de::MapKey<serde_json[dc3825464c436029]::read::StrRead>>

/* <serde_json[dc3825464c436029]::value::de::KeyClassifier as
   serde_core[48776c27239fa21f]::de::DeserializeSeed>::deserialize::<serde_json[dc3825464c436029]::de::MapKey<serde_json[dc3825464c436029]::read::StrRead>>
    */

longlong * __rustcall
<serde_json[dc3825464c436029]::value::de::KeyClassifier_as_serde_core[48776c27239fa21f]::de::DeserializeSeed>
::deserialize::
<serde_json[dc3825464c436029]::de::MapKey<serde_json[dc3825464c436029]::read::StrRead>>
          (longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  longlong local_40;
  char *local_38;
  longlong local_30;
  
  *(longlong *)(param_2 + 0x28) = *(longlong *)(param_2 + 0x28) + 1;
  *(undefined8 *)(param_2 + 0x10) = 0;
  (*(code *)PTR_parse_str_007998f0)();
  if (local_40 == 2) {
    param_1[1] = (longlong)local_38;
    *param_1 = -2;
  }
  else {
    if ((int)local_40 != 1) goto LAB_006023b6;
    if (local_30 == 0x1e) goto LAB_006023bc;
    if (-1 < local_30) goto LAB_00602450;
    do {
      (*(code *)PTR_handle_error_00798ff0)();
LAB_006023b6:
      if (local_30 == 0x1e) {
LAB_006023bc:
        auVar3[0] = -(local_38[0xe] == DAT_001845d0);
        auVar3[1] = -(local_38[0xf] == UNK_001845d1);
        auVar3[2] = -(local_38[0x10] == UNK_001845d2);
        auVar3[3] = -(local_38[0x11] == UNK_001845d3);
        auVar3[4] = -(local_38[0x12] == UNK_001845d4);
        auVar3[5] = -(local_38[0x13] == UNK_001845d5);
        auVar3[6] = -(local_38[0x14] == UNK_001845d6);
        auVar3[7] = -(local_38[0x15] == UNK_001845d7);
        auVar3[8] = -(local_38[0x16] == UNK_001845d8);
        auVar3[9] = -(local_38[0x17] == UNK_001845d9);
        auVar3[10] = -(local_38[0x18] == UNK_001845da);
        auVar3[0xb] = -(local_38[0x19] == UNK_001845db);
        auVar3[0xc] = -(local_38[0x1a] == UNK_001845dc);
        auVar3[0xd] = -(local_38[0x1b] == UNK_001845dd);
        auVar3[0xe] = -(local_38[0x1c] == UNK_001845de);
        auVar3[0xf] = -(local_38[0x1d] == UNK_001845df);
        auVar2[0] = -(*local_38 == s__serde_json__pri1_001837c0[0]);
        auVar2[1] = -(local_38[1] == s__serde_json__pri1_001837c0[1]);
        auVar2[2] = -(local_38[2] == s__serde_json__pri1_001837c0[2]);
        auVar2[3] = -(local_38[3] == s__serde_json__pri1_001837c0[3]);
        auVar2[4] = -(local_38[4] == s__serde_json__pri1_001837c0[4]);
        auVar2[5] = -(local_38[5] == s__serde_json__pri1_001837c0[5]);
        auVar2[6] = -(local_38[6] == s__serde_json__pri1_001837c0[6]);
        auVar2[7] = -(local_38[7] == s__serde_json__pri1_001837c0[7]);
        auVar2[8] = -(local_38[8] == s__serde_json__pri1_001837c0[8]);
        auVar2[9] = -(local_38[9] == s__serde_json__pri1_001837c0[9]);
        auVar2[10] = -(local_38[10] == s__serde_json__pri1_001837c0[10]);
        auVar2[0xb] = -(local_38[0xb] == s__serde_json__pri1_001837c0[0xb]);
        auVar2[0xc] = -(local_38[0xc] == s__serde_json__pri1_001837c0[0xc]);
        auVar2[0xd] = -(local_38[0xd] == s__serde_json__pri1_001837c0[0xd]);
        auVar2[0xe] = -(local_38[0xe] == s__serde_json__pri1_001837c0[0xe]);
        auVar2[0xf] = -(local_38[0xf] == s__serde_json__pri1_001837c0[0xf]);
        auVar2 = auVar2 & auVar3;
        if ((ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar2[0xf] >> 7) << 0xf) == 0xffff) {
LAB_00602438:
          *param_1 = -1;
          return param_1;
        }
      }
      else {
        if (local_30 < 0) {
          (*(code *)PTR_handle_error_00798ff0)();
          goto LAB_00602438;
        }
LAB_00602450:
        if (local_30 == 0) {
          lVar1 = 1;
          goto LAB_00602417;
        }
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar1 = (*(code *)PTR___rust_alloc_00799000)();
    } while (lVar1 == 0);
    (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa,local_30);
LAB_00602417:
    *param_1 = local_30;
    param_1[1] = lVar1;
    param_1[2] = local_30;
  }
  return param_1;
}


