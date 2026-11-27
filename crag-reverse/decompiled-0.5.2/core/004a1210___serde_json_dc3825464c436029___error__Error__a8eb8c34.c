// 004a1210 <serde_json[dc3825464c436029]::error::Error>

/* <<craggemini_core[66f3c71560d70857]::pool::PolicyPatch as
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor as
   serde_core[48776c27239fa21f]::de::Visitor>::visit_str::<serde_json[dc3825464c436029]::error::Error>
    */

void __rustcall
<<craggemini_core[66f3c71560d70857]::pool::PolicyPatch_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor_as_serde_core[48776c27239fa21f]::de::Visitor>
::visit_str::<serde_json[dc3825464c436029]::error::Error>
          (undefined1 *param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  switch(param_3) {
  case 8:
    if (*param_2 == 0x7967657461727473) {
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
    break;
  case 0xb:
    if (*(longlong *)((longlong)param_2 + 3) == 0x6d68735f65726975 && *param_2 == 0x5f65726975716572
       ) {
      param_1[1] = 4;
      *param_1 = 0;
      return;
    }
    break;
  case 0xc:
    if ((int)param_2[1] == 0x73746e75 && *param_2 == 0x6f6363615f78616d) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
    break;
  case 0xe:
    if (*(longlong *)((longlong)param_2 + 6) == 0x64656c62616e655f && *param_2 == 0x655f796b63697473
       ) {
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
    break;
  case 0xf:
    if (*(longlong *)((longlong)param_2 + 7) == 0x736365735f6c7474 && *param_2 == 0x745f796b63697473
       ) {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
    if (*(longlong *)((longlong)param_2 + 7) == 0x736d5f6e65706f5f && *param_2 == 0x5f74697563726963
       ) {
      param_1[1] = 6;
      *param_1 = 0;
      return;
    }
    break;
  case 0x19:
    auVar3[0] = -(*(char *)((longlong)param_2 + 9) == DAT_001830c0);
    auVar3[1] = -(*(char *)((longlong)param_2 + 10) == UNK_001830c1);
    auVar3[2] = -(*(char *)((longlong)param_2 + 0xb) == UNK_001830c2);
    auVar3[3] = -(*(char *)((longlong)param_2 + 0xc) == UNK_001830c3);
    auVar3[4] = -(*(char *)((longlong)param_2 + 0xd) == UNK_001830c4);
    auVar3[5] = -(*(char *)((longlong)param_2 + 0xe) == UNK_001830c5);
    auVar3[6] = -(*(char *)((longlong)param_2 + 0xf) == UNK_001830c6);
    auVar3[7] = -((char)param_2[2] == UNK_001830c7);
    auVar3[8] = -(*(char *)((longlong)param_2 + 0x11) == UNK_001830c8);
    auVar3[9] = -(*(char *)((longlong)param_2 + 0x12) == UNK_001830c9);
    auVar3[10] = -(*(char *)((longlong)param_2 + 0x13) == UNK_001830ca);
    auVar3[0xb] = -(*(char *)((longlong)param_2 + 0x14) == UNK_001830cb);
    auVar3[0xc] = -(*(char *)((longlong)param_2 + 0x15) == UNK_001830cc);
    auVar3[0xd] = -(*(char *)((longlong)param_2 + 0x16) == UNK_001830cd);
    auVar3[0xe] = -(*(char *)((longlong)param_2 + 0x17) == UNK_001830ce);
    auVar3[0xf] = -((char)param_2[3] == UNK_001830cf);
    auVar2[0] = -((char)*param_2 == s_circuit_failure__00182a40[0]);
    auVar2[1] = -(*(char *)((longlong)param_2 + 1) == s_circuit_failure__00182a40[1]);
    auVar2[2] = -(*(char *)((longlong)param_2 + 2) == s_circuit_failure__00182a40[2]);
    auVar2[3] = -(*(char *)((longlong)param_2 + 3) == s_circuit_failure__00182a40[3]);
    auVar2[4] = -(*(char *)((longlong)param_2 + 4) == s_circuit_failure__00182a40[4]);
    auVar2[5] = -(*(char *)((longlong)param_2 + 5) == s_circuit_failure__00182a40[5]);
    auVar2[6] = -(*(char *)((longlong)param_2 + 6) == s_circuit_failure__00182a40[6]);
    auVar2[7] = -(*(char *)((longlong)param_2 + 7) == s_circuit_failure__00182a40[7]);
    auVar2[8] = -((char)param_2[1] == s_circuit_failure__00182a40[8]);
    auVar2[9] = -(*(char *)((longlong)param_2 + 9) == s_circuit_failure__00182a40[9]);
    auVar2[10] = -(*(char *)((longlong)param_2 + 10) == s_circuit_failure__00182a40[10]);
    auVar2[0xb] = -(*(char *)((longlong)param_2 + 0xb) == s_circuit_failure__00182a40[0xb]);
    auVar2[0xc] = -(*(char *)((longlong)param_2 + 0xc) == s_circuit_failure__00182a40[0xc]);
    auVar2[0xd] = -(*(char *)((longlong)param_2 + 0xd) == s_circuit_failure__00182a40[0xd]);
    auVar2[0xe] = -(*(char *)((longlong)param_2 + 0xe) == s_circuit_failure__00182a40[0xe]);
    auVar2[0xf] = -(*(char *)((longlong)param_2 + 0xf) == s_circuit_failure__00182a40[0xf]);
    auVar2 = auVar2 & auVar3;
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
      param_1[1] = 5;
      *param_1 = 0;
      return;
    }
  }
  uVar1 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>::
          unknown_field(param_2,param_3,
                        &anon_572fb51faa0db1e51baf8d00d92dd3e9_61_llvm_7677212527096675952,7);
  *(undefined8 *)(param_1 + 8) = uVar1;
  *param_1 = 1;
  return;
}


