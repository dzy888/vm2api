// 004a1380 <serde_json[dc3825464c436029]::error::Error>

/* <<craggemini_core[66f3c71560d70857]::pool::CooldownKind as
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor as
   serde_core[48776c27239fa21f]::de::Visitor>::visit_str::<serde_json[dc3825464c436029]::error::Error>
    */

void __rustcall
<<craggemini_core[66f3c71560d70857]::pool::CooldownKind_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor_as_serde_core[48776c27239fa21f]::de::Visitor>
::visit_str::<serde_json[dc3825464c436029]::error::Error>
          (undefined1 *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  switch(param_3) {
  case 0xe:
    if (*(longlong *)((longlong)param_2 + 6) == 0x746e656e616d7265 && *param_2 == 0x7265705f68747561
       ) {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
    break;
  case 0xf:
    if (*(longlong *)((longlong)param_2 + 7) == 0x6465747375616878 && *param_2 == 0x78655f61746f7571
       ) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
    break;
  case 0x13:
    auVar6[0] = -(*(char *)((longlong)param_2 + 3) == DAT_00184140);
    auVar6[1] = -(*(char *)((longlong)param_2 + 4) == UNK_00184141);
    auVar6[2] = -(*(char *)((longlong)param_2 + 5) == UNK_00184142);
    auVar6[3] = -(*(char *)((longlong)param_2 + 6) == UNK_00184143);
    auVar6[4] = -(*(char *)((longlong)param_2 + 7) == UNK_00184144);
    auVar6[5] = -((char)param_2[1] == UNK_00184145);
    auVar6[6] = -(*(char *)((longlong)param_2 + 9) == UNK_00184146);
    auVar6[7] = -(*(char *)((longlong)param_2 + 10) == UNK_00184147);
    auVar6[8] = -(*(char *)((longlong)param_2 + 0xb) == UNK_00184148);
    auVar6[9] = -(*(char *)((longlong)param_2 + 0xc) == UNK_00184149);
    auVar6[10] = -(*(char *)((longlong)param_2 + 0xd) == UNK_0018414a);
    auVar6[0xb] = -(*(char *)((longlong)param_2 + 0xe) == UNK_0018414b);
    auVar6[0xc] = -(*(char *)((longlong)param_2 + 0xf) == UNK_0018414c);
    auVar6[0xd] = -((char)param_2[2] == UNK_0018414d);
    auVar6[0xe] = -(*(char *)((longlong)param_2 + 0x11) == UNK_0018414e);
    auVar6[0xf] = -(*(char *)((longlong)param_2 + 0x12) == UNK_0018414f);
    auVar3[0] = -((char)*param_2 == s_validation_requi_00182a20[0]);
    auVar3[1] = -(*(char *)((longlong)param_2 + 1) == s_validation_requi_00182a20[1]);
    auVar3[2] = -(*(char *)((longlong)param_2 + 2) == s_validation_requi_00182a20[2]);
    auVar3[3] = -(*(char *)((longlong)param_2 + 3) == s_validation_requi_00182a20[3]);
    auVar3[4] = -(*(char *)((longlong)param_2 + 4) == s_validation_requi_00182a20[4]);
    auVar3[5] = -(*(char *)((longlong)param_2 + 5) == s_validation_requi_00182a20[5]);
    auVar3[6] = -(*(char *)((longlong)param_2 + 6) == s_validation_requi_00182a20[6]);
    auVar3[7] = -(*(char *)((longlong)param_2 + 7) == s_validation_requi_00182a20[7]);
    auVar3[8] = -((char)param_2[1] == s_validation_requi_00182a20[8]);
    auVar3[9] = -(*(char *)((longlong)param_2 + 9) == s_validation_requi_00182a20[9]);
    auVar3[10] = -(*(char *)((longlong)param_2 + 10) == s_validation_requi_00182a20[10]);
    auVar3[0xb] = -(*(char *)((longlong)param_2 + 0xb) == s_validation_requi_00182a20[0xb]);
    auVar3[0xc] = -(*(char *)((longlong)param_2 + 0xc) == s_validation_requi_00182a20[0xc]);
    auVar3[0xd] = -(*(char *)((longlong)param_2 + 0xd) == s_validation_requi_00182a20[0xd]);
    auVar3[0xe] = -(*(char *)((longlong)param_2 + 0xe) == s_validation_requi_00182a20[0xe]);
    auVar3[0xf] = -(*(char *)((longlong)param_2 + 0xf) == s_validation_requi_00182a20[0xf]);
    auVar3 = auVar3 & auVar6;
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
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
    break;
  case 0x14:
    lVar1 = param_2[2];
    auVar8[0] = -((char)lVar1 == DAT_00183670);
    auVar8[1] = -((char)((ulonglong)lVar1 >> 8) == UNK_00183671);
    auVar8[2] = -((char)((ulonglong)lVar1 >> 0x10) == UNK_00183672);
    auVar8[3] = -((char)((ulonglong)lVar1 >> 0x18) == UNK_00183673);
    auVar8[4] = -(UNK_00183674 == '\0');
    auVar8[5] = -(UNK_00183675 == '\0');
    auVar8[6] = -(UNK_00183676 == '\0');
    auVar8[7] = -(UNK_00183677 == '\0');
    auVar8[8] = -(UNK_00183678 == '\0');
    auVar8[9] = -(UNK_00183679 == '\0');
    auVar8[10] = -(UNK_0018367a == '\0');
    auVar8[0xb] = -(UNK_0018367b == '\0');
    auVar8[0xc] = -(UNK_0018367c == '\0');
    auVar8[0xd] = -(UNK_0018367d == '\0');
    auVar8[0xe] = -(UNK_0018367e == '\0');
    auVar8[0xf] = -(UNK_0018367f == '\0');
    auVar5[0] = -((char)*param_2 == DAT_00182eb0);
    auVar5[1] = -(*(char *)((longlong)param_2 + 1) == UNK_00182eb1);
    auVar5[2] = -(*(char *)((longlong)param_2 + 2) == UNK_00182eb2);
    auVar5[3] = -(*(char *)((longlong)param_2 + 3) == UNK_00182eb3);
    auVar5[4] = -(*(char *)((longlong)param_2 + 4) == UNK_00182eb4);
    auVar5[5] = -(*(char *)((longlong)param_2 + 5) == UNK_00182eb5);
    auVar5[6] = -(*(char *)((longlong)param_2 + 6) == UNK_00182eb6);
    auVar5[7] = -(*(char *)((longlong)param_2 + 7) == UNK_00182eb7);
    auVar5[8] = -((char)param_2[1] == UNK_00182eb8);
    auVar5[9] = -(*(char *)((longlong)param_2 + 9) == UNK_00182eb9);
    auVar5[10] = -(*(char *)((longlong)param_2 + 10) == UNK_00182eba);
    auVar5[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_00182ebb);
    auVar5[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_00182ebc);
    auVar5[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_00182ebd);
    auVar5[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_00182ebe);
    auVar5[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_00182ebf);
    auVar5 = auVar5 & auVar8;
    if ((ushort)((ushort)(SUB161(auVar5 >> 7,0) & 1) | (ushort)(SUB161(auVar5 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar5 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar5 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar5 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar5 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar5 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar5 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar5 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar5 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar5 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar5 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar5 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar5 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar5 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar5[0xf] >> 7) << 0xf) == 0xffff) {
      param_1[1] = 4;
      *param_1 = 0;
      return;
    }
    break;
  case 0x18:
    lVar1 = param_2[2];
    auVar7[0] = -((char)lVar1 == s_xhausted_00183ad0[0]);
    auVar7[1] = -((char)((ulonglong)lVar1 >> 8) == s_xhausted_00183ad0[1]);
    auVar7[2] = -((char)((ulonglong)lVar1 >> 0x10) == s_xhausted_00183ad0[2]);
    auVar7[3] = -((char)((ulonglong)lVar1 >> 0x18) == s_xhausted_00183ad0[3]);
    auVar7[4] = -((char)((ulonglong)lVar1 >> 0x20) == s_xhausted_00183ad0[4]);
    auVar7[5] = -((char)((ulonglong)lVar1 >> 0x28) == s_xhausted_00183ad0[5]);
    auVar7[6] = -((char)((ulonglong)lVar1 >> 0x30) == s_xhausted_00183ad0[6]);
    auVar7[7] = -((char)((ulonglong)lVar1 >> 0x38) == s_xhausted_00183ad0[7]);
    auVar7[8] = -(s_xhausted_00183ad0[8] == '\0');
    auVar7[9] = -(UNK_00183ad9 == '\0');
    auVar7[10] = -(UNK_00183ada == '\0');
    auVar7[0xb] = -(UNK_00183adb == '\0');
    auVar7[0xc] = -(UNK_00183adc == '\0');
    auVar7[0xd] = -(UNK_00183add == '\0');
    auVar7[0xe] = -(UNK_00183ade == '\0');
    auVar7[0xf] = -(UNK_00183adf == '\0');
    auVar4[0] = -((char)*param_2 == s_model_capacity_e_00184530[0]);
    auVar4[1] = -(*(char *)((longlong)param_2 + 1) == s_model_capacity_e_00184530[1]);
    auVar4[2] = -(*(char *)((longlong)param_2 + 2) == s_model_capacity_e_00184530[2]);
    auVar4[3] = -(*(char *)((longlong)param_2 + 3) == s_model_capacity_e_00184530[3]);
    auVar4[4] = -(*(char *)((longlong)param_2 + 4) == s_model_capacity_e_00184530[4]);
    auVar4[5] = -(*(char *)((longlong)param_2 + 5) == s_model_capacity_e_00184530[5]);
    auVar4[6] = -(*(char *)((longlong)param_2 + 6) == s_model_capacity_e_00184530[6]);
    auVar4[7] = -(*(char *)((longlong)param_2 + 7) == s_model_capacity_e_00184530[7]);
    auVar4[8] = -((char)param_2[1] == s_model_capacity_e_00184530[8]);
    auVar4[9] = -(*(char *)((longlong)param_2 + 9) == s_model_capacity_e_00184530[9]);
    auVar4[10] = -(*(char *)((longlong)param_2 + 10) == s_model_capacity_e_00184530[10]);
    auVar4[0xb] = -(*(char *)((longlong)param_2 + 0xb) == s_model_capacity_e_00184530[0xb]);
    auVar4[0xc] = -(*(char *)((longlong)param_2 + 0xc) == s_model_capacity_e_00184530[0xc]);
    auVar4[0xd] = -(*(char *)((longlong)param_2 + 0xd) == s_model_capacity_e_00184530[0xd]);
    auVar4[0xe] = -(*(char *)((longlong)param_2 + 0xe) == s_model_capacity_e_00184530[0xe]);
    auVar4[0xf] = -(*(char *)((longlong)param_2 + 0xf) == s_model_capacity_e_00184530[0xf]);
    auVar4 = auVar4 & auVar7;
    if ((ushort)((ushort)(SUB161(auVar4 >> 7,0) & 1) | (ushort)(SUB161(auVar4 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar4 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar4 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar4 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar4 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar4 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar4 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar4 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar4 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar4 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar4 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar4 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar4 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar4 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar4[0xf] >> 7) << 0xf) == 0xffff) {
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
  }
  uVar2 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>::
          unknown_variant(param_2,param_3,
                          &anon_572fb51faa0db1e51baf8d00d92dd3e9_67_llvm_7677212527096675952,5);
  *(undefined8 *)(param_1 + 8) = uVar2;
  *param_1 = 1;
  return;
}


