// 005c7790 <serde_json[dc3825464c436029]::error::Error>

/* <<craggemini_core[66f3c71560d70857]::license::host::SlotPermit as
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor as
   serde_core[48776c27239fa21f]::de::Visitor>::visit_str::<serde_json[dc3825464c436029]::error::Error>
    */

void __rustcall
<<craggemini_core[66f3c71560d70857]::license::host::SlotPermit_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor_as_serde_core[48776c27239fa21f]::de::Visitor>
::visit_str::<serde_json[dc3825464c436029]::error::Error>
          (undefined1 *param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  switch(param_3) {
  case 4:
    if ((int)*param_2 == 0x74616573) {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
    break;
  case 5:
    if (*(char *)((longlong)param_2 + 4) == 'd' && (int)*param_2 == 0x695f6d76) {
      param_1[1] = 4;
      *param_1 = 0;
      return;
    }
    break;
  case 7:
    if (*(int *)((longlong)param_2 + 3) == 0x6e6f6973 && (int)*param_2 == 0x73726576) {
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
    if (*(int *)((longlong)param_2 + 3) == 0x74637564 && (int)*param_2 == 0x646f7270) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
    if (*(int *)((longlong)param_2 + 3) == 0x64695f74 && (int)*param_2 == 0x74736f68) {
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
    break;
  case 0xb:
    if (*(longlong *)((longlong)param_2 + 3) == 0x79656b5f64657070 && *param_2 == 0x5f64657070617277
       ) {
      param_1[1] = 8;
      *param_1 = 0;
      return;
    }
    break;
  case 0xe:
    if (*(longlong *)((longlong)param_2 + 6) == 0x64695f79656b5f64 && *param_2 == 0x5f64616f6c796170
       ) {
      param_1[1] = 7;
      *param_1 = 0;
      return;
    }
    break;
  case 0xf:
    if (*(longlong *)((longlong)param_2 + 7) == 0x687361685f64695f && *param_2 == 0x5f656e696863616d
       ) {
      param_1[1] = 5;
      *param_1 = 0;
      return;
    }
    break;
  case 0x11:
    auVar2[0] = -((char)*param_2 == DAT_00184320);
    auVar2[1] = -(*(char *)((longlong)param_2 + 1) == UNK_00184321);
    auVar2[2] = -(*(char *)((longlong)param_2 + 2) == UNK_00184322);
    auVar2[3] = -(*(char *)((longlong)param_2 + 3) == UNK_00184323);
    auVar2[4] = -(*(char *)((longlong)param_2 + 4) == UNK_00184324);
    auVar2[5] = -(*(char *)((longlong)param_2 + 5) == UNK_00184325);
    auVar2[6] = -(*(char *)((longlong)param_2 + 6) == UNK_00184326);
    auVar2[7] = -(*(char *)((longlong)param_2 + 7) == UNK_00184327);
    auVar2[8] = -((char)param_2[1] == UNK_00184328);
    auVar2[9] = -(*(char *)((longlong)param_2 + 9) == UNK_00184329);
    auVar2[10] = -(*(char *)((longlong)param_2 + 10) == UNK_0018432a);
    auVar2[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_0018432b);
    auVar2[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_0018432c);
    auVar2[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_0018432d);
    auVar2[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_0018432e);
    auVar2[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_0018432f);
    auVar3[0] = -((char)param_2[2] == s_y_00183130[0]);
    auVar3[1] = -(s_y_00183130[1] == '\0');
    auVar3[2] = -(s_y_00183130[2] == '\0');
    auVar3[3] = -(s_y_00183130[3] == '\0');
    auVar3[4] = -(UNK_00183134 == '\0');
    auVar3[5] = -(UNK_00183135 == '\0');
    auVar3[6] = -(UNK_00183136 == '\0');
    auVar3[7] = -(UNK_00183137 == '\0');
    auVar3[8] = -(UNK_00183138 == '\0');
    auVar3[9] = -(UNK_00183139 == '\0');
    auVar3[10] = -(UNK_0018313a == '\0');
    auVar3[0xb] = -(UNK_0018313b == '\0');
    auVar3[0xc] = -(UNK_0018313c == '\0');
    auVar3[0xd] = -(UNK_0018313d == '\0');
    auVar3[0xe] = -(UNK_0018313e == '\0');
    auVar3[0xf] = -(UNK_0018313f == '\0');
    auVar3 = auVar3 & auVar2;
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
      param_1[1] = 6;
      *param_1 = 0;
      return;
    }
  }
  uVar1 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>::
          unknown_field(param_2,param_3,
                        &anon_30b5cef53457a6ea696e8d7e9f6273d6_56_llvm_8436237269785592069,9);
  *(undefined8 *)(param_1 + 8) = uVar1;
  *param_1 = 1;
  return;
}


