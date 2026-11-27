// 0018ff60 <serde_json[dc3825464c436029]::de::MapKey<serde_json[dc3825464c436029]::read::SliceRead>>

/* <serde_json[dc3825464c436029]::value::de::KeyClassifier as
   serde_core[48776c27239fa21f]::de::DeserializeSeed>::deserialize::<serde_json[dc3825464c436029]::de::MapKey<serde_json[dc3825464c436029]::read::SliceRead>>
    */

longlong * __rustcall
<serde_json[dc3825464c436029]::value::de::KeyClassifier_as_serde_core[48776c27239fa21f]::de::DeserializeSeed>
::deserialize::
<serde_json[dc3825464c436029]::de::MapKey<serde_json[dc3825464c436029]::read::SliceRead>>
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
  (*(code *)PTR_parse_str_00219c90)();
  if (local_40 == 2) {
    param_1[1] = (longlong)local_38;
    *param_1 = -2;
  }
  else {
    if ((int)local_40 != 1) goto LAB_0018ffd6;
    if (local_30 == 0x1e) goto LAB_0018ffdc;
    if (-1 < local_30) goto LAB_00190070;
    do {
      (*(code *)PTR_handle_error_00219c78)();
LAB_0018ffd6:
      if (local_30 == 0x1e) {
LAB_0018ffdc:
        auVar3[0] = -(local_38[0xe] == DAT_00114040);
        auVar3[1] = -(local_38[0xf] == UNK_00114041);
        auVar3[2] = -(local_38[0x10] == UNK_00114042);
        auVar3[3] = -(local_38[0x11] == UNK_00114043);
        auVar3[4] = -(local_38[0x12] == UNK_00114044);
        auVar3[5] = -(local_38[0x13] == UNK_00114045);
        auVar3[6] = -(local_38[0x14] == UNK_00114046);
        auVar3[7] = -(local_38[0x15] == UNK_00114047);
        auVar3[8] = -(local_38[0x16] == UNK_00114048);
        auVar3[9] = -(local_38[0x17] == UNK_00114049);
        auVar3[10] = -(local_38[0x18] == UNK_0011404a);
        auVar3[0xb] = -(local_38[0x19] == UNK_0011404b);
        auVar3[0xc] = -(local_38[0x1a] == UNK_0011404c);
        auVar3[0xd] = -(local_38[0x1b] == UNK_0011404d);
        auVar3[0xe] = -(local_38[0x1c] == UNK_0011404e);
        auVar3[0xf] = -(local_38[0x1d] == UNK_0011404f);
        auVar2[0] = -(*local_38 == DAT_00113cb0);
        auVar2[1] = -(local_38[1] == UNK_00113cb1);
        auVar2[2] = -(local_38[2] == UNK_00113cb2);
        auVar2[3] = -(local_38[3] == UNK_00113cb3);
        auVar2[4] = -(local_38[4] == UNK_00113cb4);
        auVar2[5] = -(local_38[5] == UNK_00113cb5);
        auVar2[6] = -(local_38[6] == UNK_00113cb6);
        auVar2[7] = -(local_38[7] == UNK_00113cb7);
        auVar2[8] = -(local_38[8] == UNK_00113cb8);
        auVar2[9] = -(local_38[9] == UNK_00113cb9);
        auVar2[10] = -(local_38[10] == UNK_00113cba);
        auVar2[0xb] = -(local_38[0xb] == UNK_00113cbb);
        auVar2[0xc] = -(local_38[0xc] == UNK_00113cbc);
        auVar2[0xd] = -(local_38[0xd] == UNK_00113cbd);
        auVar2[0xe] = -(local_38[0xe] == UNK_00113cbe);
        auVar2[0xf] = -(local_38[0xf] == UNK_00113cbf);
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
LAB_00190058:
          *param_1 = -1;
          return param_1;
        }
      }
      else {
        if (local_30 < 0) {
          (*(code *)PTR_handle_error_00219c78)();
          goto LAB_00190058;
        }
LAB_00190070:
        if (local_30 == 0) {
          lVar1 = 1;
          goto LAB_00190037;
        }
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
      lVar1 = (*(code *)PTR___rust_alloc_00219c88)();
    } while (lVar1 == 0);
    (*(code *)PTR_memcpy_00219c60)(extraout_XMM0_Qa,local_30);
LAB_00190037:
    *param_1 = local_30;
    param_1[1] = lVar1;
    param_1[2] = local_30;
  }
  return param_1;
}


