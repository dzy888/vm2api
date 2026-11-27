// 004f35f0 <serde_json[dc3825464c436029]::error::Error>

/* <<craggemini_core[66f3c71560d70857]::protocol::FromBridge as
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor as
   serde_core[48776c27239fa21f]::de::Visitor>::visit_str::<serde_json[dc3825464c436029]::error::Error>
    */

void __rustcall
<<craggemini_core[66f3c71560d70857]::protocol::FromBridge_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor_as_serde_core[48776c27239fa21f]::de::Visitor>
::visit_str::<serde_json[dc3825464c436029]::error::Error>
          (undefined1 *param_1,longlong *param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  switch(param_3) {
  case 4:
    if ((int)*param_2 == 0x656c6f72) {
      param_1[1] = 5;
      *param_1 = 0;
      return;
    }
    break;
  case 5:
    if (*(char *)((longlong)param_2 + 4) == 't' && (int)*param_2 == 0x6e657665) {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
    if (*(char *)((longlong)param_2 + 4) == 'e' && (int)*param_2 == 0x74617473) {
      param_1[1] = 6;
      *param_1 = 0;
      return;
    }
    break;
  case 9:
    if ((char)param_2[1] == 'e' && *param_2 == 0x6d616e5f65707974) {
      param_1[1] = 4;
      *param_1 = 0;
      return;
    }
    break;
  case 10:
    if ((short)param_2[1] == 0x6469 && *param_2 == 0x5f74736575716572) {
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
    break;
  case 0xb:
    if (*(longlong *)((longlong)param_2 + 3) == 0x64695f746e656761 && *param_2 == 0x746e656761627573
       ) {
      param_1[1] = 1;
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
    auVar1[0] = -((char)*param_2 == s_parent_conversat_00182b40[0]);
    auVar1[1] = -(*(char *)((longlong)param_2 + 1) == s_parent_conversat_00182b40[1]);
    auVar1[2] = -(*(char *)((longlong)param_2 + 2) == s_parent_conversat_00182b40[2]);
    auVar1[3] = -(*(char *)((longlong)param_2 + 3) == s_parent_conversat_00182b40[3]);
    auVar1[4] = -(*(char *)((longlong)param_2 + 4) == s_parent_conversat_00182b40[4]);
    auVar1[5] = -(*(char *)((longlong)param_2 + 5) == s_parent_conversat_00182b40[5]);
    auVar1[6] = -(*(char *)((longlong)param_2 + 6) == s_parent_conversat_00182b40[6]);
    auVar1[7] = -(*(char *)((longlong)param_2 + 7) == s_parent_conversat_00182b40[7]);
    auVar1[8] = -((char)param_2[1] == s_parent_conversat_00182b40[8]);
    auVar1[9] = -(*(char *)((longlong)param_2 + 9) == s_parent_conversat_00182b40[9]);
    auVar1[10] = -(*(char *)((longlong)param_2 + 10) == s_parent_conversat_00182b40[10]);
    auVar1[0xb] = -(*(char *)((longlong)param_2 + 0xb) == s_parent_conversat_00182b40[0xb]);
    auVar1[0xc] = -(*(char *)((longlong)param_2 + 0xc) == s_parent_conversat_00182b40[0xc]);
    auVar1[0xd] = -(*(char *)((longlong)param_2 + 0xd) == s_parent_conversat_00182b40[0xd]);
    auVar1[0xe] = -(*(char *)((longlong)param_2 + 0xe) == s_parent_conversat_00182b40[0xe]);
    auVar1[0xf] = -(*(char *)((longlong)param_2 + 0xf) == s_parent_conversat_00182b40[0xf]);
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
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
  }
  param_1[1] = 7;
  *param_1 = 0;
  return;
}


