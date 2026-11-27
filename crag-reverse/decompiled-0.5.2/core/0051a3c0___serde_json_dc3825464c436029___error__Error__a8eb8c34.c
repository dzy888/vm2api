// 0051a3c0 <serde_json[dc3825464c436029]::error::Error>

/* <<craggemini_core[66f3c71560d70857]::resume::ResumeCutMeta as
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor as
   serde_core[48776c27239fa21f]::de::Visitor>::visit_str::<serde_json[dc3825464c436029]::error::Error>
    */

void __rustcall
<<craggemini_core[66f3c71560d70857]::resume::ResumeCutMeta_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor_as_serde_core[48776c27239fa21f]::de::Visitor>
::visit_str::<serde_json[dc3825464c436029]::error::Error>
          (undefined1 *param_1,longlong *param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  switch(param_3) {
  case 10:
    if ((short)param_2[1] == 0x6e65 && *param_2 == 0x6c5f747365676964) {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
    if ((short)param_2[1] == 0x7365 && *param_2 == 0x7479625f657a6973) {
      param_1[1] = 5;
      *param_1 = 0;
      return;
    }
    break;
  case 0xb:
    if (*(longlong *)((longlong)param_2 + 3) == 0x736d5f74615f6465 && *param_2 == 0x74615f6465766173
       ) {
      param_1[1] = 4;
      *param_1 = 0;
      return;
    }
    break;
  case 0xc:
    if ((int)param_2[1] == 0x656d616e && *param_2 == 0x5f7269645f747563) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
    break;
  case 0xe:
    if (*(longlong *)((longlong)param_2 + 6) == 0x7473656769645f67 && *param_2 == 0x5f676e69646e6962
       ) {
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
    if (*(longlong *)((longlong)param_2 + 6) == 0x62645f7972616d6d && *param_2 == 0x6d6d75735f736168
       ) {
      param_1[1] = 6;
      *param_1 = 0;
      return;
    }
    break;
  case 0x16:
    auVar2[0] = -(*(char *)((longlong)param_2 + 6) == DAT_001830b0);
    auVar2[1] = -(*(char *)((longlong)param_2 + 7) == UNK_001830b1);
    auVar2[2] = -((char)param_2[1] == UNK_001830b2);
    auVar2[3] = -(*(char *)((longlong)param_2 + 9) == UNK_001830b3);
    auVar2[4] = -(*(char *)((longlong)param_2 + 10) == UNK_001830b4);
    auVar2[5] = -(*(char *)((longlong)param_2 + 0xb) == UNK_001830b5);
    auVar2[6] = -(*(char *)((longlong)param_2 + 0xc) == UNK_001830b6);
    auVar2[7] = -(*(char *)((longlong)param_2 + 0xd) == UNK_001830b7);
    auVar2[8] = -(*(char *)((longlong)param_2 + 0xe) == UNK_001830b8);
    auVar2[9] = -(*(char *)((longlong)param_2 + 0xf) == UNK_001830b9);
    auVar2[10] = -((char)param_2[2] == UNK_001830ba);
    auVar2[0xb] = -(*(char *)((longlong)param_2 + 0x11) == UNK_001830bb);
    auVar2[0xc] = -(*(char *)((longlong)param_2 + 0x12) == UNK_001830bc);
    auVar2[0xd] = -(*(char *)((longlong)param_2 + 0x13) == UNK_001830bd);
    auVar2[0xe] = -(*(char *)((longlong)param_2 + 0x14) == UNK_001830be);
    auVar2[0xf] = -(*(char *)((longlong)param_2 + 0x15) == UNK_001830bf);
    auVar1[0] = -((char)*param_2 == s_native_conversat_00182dc0[0]);
    auVar1[1] = -(*(char *)((longlong)param_2 + 1) == s_native_conversat_00182dc0[1]);
    auVar1[2] = -(*(char *)((longlong)param_2 + 2) == s_native_conversat_00182dc0[2]);
    auVar1[3] = -(*(char *)((longlong)param_2 + 3) == s_native_conversat_00182dc0[3]);
    auVar1[4] = -(*(char *)((longlong)param_2 + 4) == s_native_conversat_00182dc0[4]);
    auVar1[5] = -(*(char *)((longlong)param_2 + 5) == s_native_conversat_00182dc0[5]);
    auVar1[6] = -(*(char *)((longlong)param_2 + 6) == s_native_conversat_00182dc0[6]);
    auVar1[7] = -(*(char *)((longlong)param_2 + 7) == s_native_conversat_00182dc0[7]);
    auVar1[8] = -((char)param_2[1] == s_native_conversat_00182dc0[8]);
    auVar1[9] = -(*(char *)((longlong)param_2 + 9) == s_native_conversat_00182dc0[9]);
    auVar1[10] = -(*(char *)((longlong)param_2 + 10) == s_native_conversat_00182dc0[10]);
    auVar1[0xb] = -(*(char *)((longlong)param_2 + 0xb) == s_native_conversat_00182dc0[0xb]);
    auVar1[0xc] = -(*(char *)((longlong)param_2 + 0xc) == s_native_conversat_00182dc0[0xc]);
    auVar1[0xd] = -(*(char *)((longlong)param_2 + 0xd) == s_native_conversat_00182dc0[0xd]);
    auVar1[0xe] = -(*(char *)((longlong)param_2 + 0xe) == s_native_conversat_00182dc0[0xe]);
    auVar1[0xf] = -(*(char *)((longlong)param_2 + 0xf) == s_native_conversat_00182dc0[0xf]);
    auVar1 = auVar1 & auVar2;
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
                 (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar1[0xf] >> 7) << 0xf) == 0xffff) {
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
  }
  param_1[1] = 7;
  *param_1 = 0;
  return;
}


