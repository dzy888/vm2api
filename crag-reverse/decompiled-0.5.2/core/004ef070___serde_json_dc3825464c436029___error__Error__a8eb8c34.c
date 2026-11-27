// 004ef070 <serde_json[dc3825464c436029]::error::Error>

/* <<craggemini_core[66f3c71560d70857]::protocol::CapturedHeaders as
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor as
   serde_core[48776c27239fa21f]::de::Visitor>::visit_str::<serde_json[dc3825464c436029]::error::Error>
    */

void __rustcall
<<craggemini_core[66f3c71560d70857]::protocol::CapturedHeaders_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor_as_serde_core[48776c27239fa21f]::de::Visitor>
::visit_str::<serde_json[dc3825464c436029]::error::Error>
          (undefined1 *param_1,longlong *param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  
  switch(param_3) {
  case 10:
    if ((short)param_2[1] == 0x6469 && *param_2 == 0x5f74736575716572) {
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
    break;
  case 0xb:
    if (*(longlong *)((longlong)param_2 + 3) == 0x72657466615f7972 && *param_2 == 0x66615f7972746572
       ) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
    if (*(longlong *)((longlong)param_2 + 3) == 0x7375746174735f63 && *param_2 == 0x6174735f63707267
       ) {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
    break;
  case 0xc:
    if ((int)param_2[1] == 0x65707974 && *param_2 == 0x5f746e65746e6f63) {
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
    if ((int)param_2[1] == 0x65676173 && *param_2 == 0x73656d5f63707267) {
      param_1[1] = 4;
      *param_1 = 0;
      return;
    }
    break;
  case 0x10:
    auVar1[0] = -((char)*param_2 == DAT_00183330);
    auVar1[1] = -(*(char *)((longlong)param_2 + 1) == UNK_00183331);
    auVar1[2] = -(*(char *)((longlong)param_2 + 2) == UNK_00183332);
    auVar1[3] = -(*(char *)((longlong)param_2 + 3) == UNK_00183333);
    auVar1[4] = -(*(char *)((longlong)param_2 + 4) == UNK_00183334);
    auVar1[5] = -(*(char *)((longlong)param_2 + 5) == UNK_00183335);
    auVar1[6] = -(*(char *)((longlong)param_2 + 6) == UNK_00183336);
    auVar1[7] = -(*(char *)((longlong)param_2 + 7) == UNK_00183337);
    auVar1[8] = -((char)param_2[1] == UNK_00183338);
    auVar1[9] = -(*(char *)((longlong)param_2 + 9) == UNK_00183339);
    auVar1[10] = -(*(char *)((longlong)param_2 + 10) == UNK_0018333a);
    auVar1[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_0018333b);
    auVar1[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_0018333c);
    auVar1[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_0018333d);
    auVar1[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_0018333e);
    auVar1[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_0018333f);
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
      param_1[1] = 5;
      *param_1 = 0;
      return;
    }
  }
  param_1[1] = 6;
  *param_1 = 0;
  return;
}


