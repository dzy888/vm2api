// 004f0460 <serde_json[dc3825464c436029]::error::Error>

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
  case 6:
    if (*(short *)((longlong)param_2 + 4) == 0x7375 && (int)*param_2 == 0x74617473) {
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
    break;
  case 7:
    if (*(int *)((longlong)param_2 + 3) == 0x73726564 && (int)*param_2 == 0x64616568) {
      param_1[1] = 7;
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
    if ((short)param_2[1] == 0x6469 && *param_2 == 0x5f74706d65747461) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
    if ((short)param_2[1] == 0x7964 && *param_2 == 0x6f625f726f727265) {
      param_1[1] = 5;
      *param_1 = 0;
      return;
    }
    break;
  case 0xb:
    if (*(longlong *)((longlong)param_2 + 3) == 0x72657466615f7972 && *param_2 == 0x66615f7972746572
       ) {
      param_1[1] = 4;
      *param_1 = 0;
      return;
    }
    break;
  case 0xc:
    if ((int)param_2[1] == 0x65707974 && *param_2 == 0x5f746e65746e6f63) {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
    break;
  case 0x11:
    auVar1[0] = -((char)*param_2 == s_request_id_heade_00182700[0]);
    auVar1[1] = -(*(char *)((longlong)param_2 + 1) == s_request_id_heade_00182700[1]);
    auVar1[2] = -(*(char *)((longlong)param_2 + 2) == s_request_id_heade_00182700[2]);
    auVar1[3] = -(*(char *)((longlong)param_2 + 3) == s_request_id_heade_00182700[3]);
    auVar1[4] = -(*(char *)((longlong)param_2 + 4) == s_request_id_heade_00182700[4]);
    auVar1[5] = -(*(char *)((longlong)param_2 + 5) == s_request_id_heade_00182700[5]);
    auVar1[6] = -(*(char *)((longlong)param_2 + 6) == s_request_id_heade_00182700[6]);
    auVar1[7] = -(*(char *)((longlong)param_2 + 7) == s_request_id_heade_00182700[7]);
    auVar1[8] = -((char)param_2[1] == s_request_id_heade_00182700[8]);
    auVar1[9] = -(*(char *)((longlong)param_2 + 9) == s_request_id_heade_00182700[9]);
    auVar1[10] = -(*(char *)((longlong)param_2 + 10) == s_request_id_heade_00182700[10]);
    auVar1[0xb] = -(*(char *)((longlong)param_2 + 0xb) == s_request_id_heade_00182700[0xb]);
    auVar1[0xc] = -(*(char *)((longlong)param_2 + 0xc) == s_request_id_heade_00182700[0xc]);
    auVar1[0xd] = -(*(char *)((longlong)param_2 + 0xd) == s_request_id_heade_00182700[0xd]);
    auVar1[0xe] = -(*(char *)((longlong)param_2 + 0xe) == s_request_id_heade_00182700[0xe]);
    auVar1[0xf] = -(*(char *)((longlong)param_2 + 0xf) == s_request_id_heade_00182700[0xf]);
    auVar2[0] = -((char)param_2[2] == s_r_00183860[0]);
    auVar2[1] = -(s_r_00183860[1] == '\0');
    auVar2[2] = -(s_r_00183860[2] == '\0');
    auVar2[3] = -(s_r_00183860[3] == '\0');
    auVar2[4] = -(UNK_00183864 == '\0');
    auVar2[5] = -(UNK_00183865 == '\0');
    auVar2[6] = -(UNK_00183866 == '\0');
    auVar2[7] = -(UNK_00183867 == '\0');
    auVar2[8] = -(UNK_00183868 == '\0');
    auVar2[9] = -(UNK_00183869 == '\0');
    auVar2[10] = -(UNK_0018386a == '\0');
    auVar2[0xb] = -(UNK_0018386b == '\0');
    auVar2[0xc] = -(UNK_0018386c == '\0');
    auVar2[0xd] = -(UNK_0018386d == '\0');
    auVar2[0xe] = -(UNK_0018386e == '\0');
    auVar2[0xf] = -(UNK_0018386f == '\0');
    auVar2 = auVar2 & auVar1;
    if ((ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) | (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
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
      param_1[1] = 6;
      *param_1 = 0;
      return;
    }
  }
  param_1[1] = 8;
  *param_1 = 0;
  return;
}


