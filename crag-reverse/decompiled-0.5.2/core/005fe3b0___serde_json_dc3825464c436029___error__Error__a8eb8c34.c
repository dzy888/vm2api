// 005fe3b0 <serde_json[dc3825464c436029]::error::Error>

/* <<craggemini_core[66f3c71560d70857]::server::WebToolRequest as
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor as
   serde_core[48776c27239fa21f]::de::Visitor>::visit_str::<serde_json[dc3825464c436029]::error::Error>
    */

void __rustcall
<<craggemini_core[66f3c71560d70857]::server::WebToolRequest_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor_as_serde_core[48776c27239fa21f]::de::Visitor>
::visit_str::<serde_json[dc3825464c436029]::error::Error>
          (undefined1 *param_1,longlong *param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  switch(param_3) {
  case 3:
    if (*(char *)((longlong)param_2 + 2) == 'l' && (short)*param_2 == 0x7275) {
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
    break;
  case 4:
    if ((int)*param_2 == 0x736c7275) {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
    break;
  case 5:
    if (*(char *)((longlong)param_2 + 4) == 'y' && (int)*param_2 == 0x72657571) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
    break;
  case 6:
    if (*(short *)((longlong)param_2 + 4) == 0x7470 && (int)*param_2 == 0x6d6f7270) {
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
  case 0xd:
    if (*(longlong *)((longlong)param_2 + 5) == 0x6e6f697461636f6c && *param_2 == 0x636f6c5f72657375
       ) {
      param_1[1] = 8;
      *param_1 = 0;
      return;
    }
    break;
  case 0xf:
    if (*(longlong *)((longlong)param_2 + 7) == 0x736e69616d6f645f && *param_2 == 0x5f6465776f6c6c61
       ) {
      param_1[1] = 5;
      *param_1 = 0;
      return;
    }
    if (*(longlong *)((longlong)param_2 + 7) == 0x736e69616d6f645f && *param_2 == 0x5f64656b636f6c62
       ) {
      param_1[1] = 6;
      *param_1 = 0;
      return;
    }
    break;
  case 0x13:
    auVar2[0] = -(*(char *)((longlong)param_2 + 3) == DAT_00183390);
    auVar2[1] = -(*(char *)((longlong)param_2 + 4) == UNK_00183391);
    auVar2[2] = -(*(char *)((longlong)param_2 + 5) == UNK_00183392);
    auVar2[3] = -(*(char *)((longlong)param_2 + 6) == UNK_00183393);
    auVar2[4] = -(*(char *)((longlong)param_2 + 7) == UNK_00183394);
    auVar2[5] = -((char)param_2[1] == UNK_00183395);
    auVar2[6] = -(*(char *)((longlong)param_2 + 9) == UNK_00183396);
    auVar2[7] = -(*(char *)((longlong)param_2 + 10) == UNK_00183397);
    auVar2[8] = -(*(char *)((longlong)param_2 + 0xb) == UNK_00183398);
    auVar2[9] = -(*(char *)((longlong)param_2 + 0xc) == UNK_00183399);
    auVar2[10] = -(*(char *)((longlong)param_2 + 0xd) == UNK_0018339a);
    auVar2[0xb] = -(*(char *)((longlong)param_2 + 0xe) == UNK_0018339b);
    auVar2[0xc] = -(*(char *)((longlong)param_2 + 0xf) == UNK_0018339c);
    auVar2[0xd] = -((char)param_2[2] == UNK_0018339d);
    auVar2[0xe] = -(*(char *)((longlong)param_2 + 0x11) == UNK_0018339e);
    auVar2[0xf] = -(*(char *)((longlong)param_2 + 0x12) == UNK_0018339f);
    auVar1[0] = -((char)*param_2 == DAT_00182bd0);
    auVar1[1] = -(*(char *)((longlong)param_2 + 1) == UNK_00182bd1);
    auVar1[2] = -(*(char *)((longlong)param_2 + 2) == UNK_00182bd2);
    auVar1[3] = -(*(char *)((longlong)param_2 + 3) == UNK_00182bd3);
    auVar1[4] = -(*(char *)((longlong)param_2 + 4) == UNK_00182bd4);
    auVar1[5] = -(*(char *)((longlong)param_2 + 5) == UNK_00182bd5);
    auVar1[6] = -(*(char *)((longlong)param_2 + 6) == UNK_00182bd6);
    auVar1[7] = -(*(char *)((longlong)param_2 + 7) == UNK_00182bd7);
    auVar1[8] = -((char)param_2[1] == UNK_00182bd8);
    auVar1[9] = -(*(char *)((longlong)param_2 + 9) == UNK_00182bd9);
    auVar1[10] = -(*(char *)((longlong)param_2 + 10) == UNK_00182bda);
    auVar1[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_00182bdb);
    auVar1[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_00182bdc);
    auVar1[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_00182bdd);
    auVar1[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_00182bde);
    auVar1[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_00182bdf);
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
      param_1[1] = 7;
      *param_1 = 0;
      return;
    }
  }
  param_1[1] = 9;
  *param_1 = 0;
  return;
}


