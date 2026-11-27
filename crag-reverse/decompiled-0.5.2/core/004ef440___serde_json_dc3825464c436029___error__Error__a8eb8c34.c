// 004ef440 <serde_json[dc3825464c436029]::error::Error>

/* <<craggemini_core[66f3c71560d70857]::protocol::FromBridge as
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor as
   serde_core[48776c27239fa21f]::de::Visitor>::visit_str::<serde_json[dc3825464c436029]::error::Error>
    */

undefined1 * __rustcall
<<craggemini_core[66f3c71560d70857]::protocol::FromBridge_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor_as_serde_core[48776c27239fa21f]::de::Visitor>
::visit_str::<serde_json[dc3825464c436029]::error::Error>
          (undefined1 *param_1,ulonglong *param_2,longlong param_3)

{
  ulonglong uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  uVar1 = param_3 - 4;
  if (uVar1 < 0xf) {
    switch(uVar1) {
    case 0:
      iVar3 = (*(code *)PTR_bcmp_00799020)
                        ((longlong)&switchD_004ef46d::switchdataD_00198098 +
                         (longlong)(int)(&switchD_004ef46d::switchdataD_00198098)[uVar1],param_3);
      if (iVar3 != 0) {
        if (param_3 == 6) goto switchD_004ef46d_caseD_2;
        goto switchD_004ef46d_caseD_3;
      }
      param_1[1] = 0xd;
      break;
    case 1:
      if (*(char *)((longlong)param_2 + 4) != 'y' || (int)*param_2 != 0x64616572)
      goto switchD_004ef46d_caseD_3;
      param_1[1] = 0;
      break;
    case 2:
switchD_004ef46d_caseD_2:
      iVar3 = (*(code *)PTR_bcmp_00799020)();
      if (iVar3 != 0) goto switchD_004ef46d_caseD_3;
      param_1[1] = 0xe;
      break;
    default:
      goto switchD_004ef46d_caseD_3;
    case 4:
      if (*param_2 != 0x6465747065636361) goto switchD_004ef46d_caseD_3;
      param_1[1] = 1;
      break;
    case 8:
      if ((int)param_2[1] == 0x6573735f && *param_2 == 0x72656469766f7270) {
        param_1[1] = 3;
      }
      else {
        uVar6 = (ulonglong)(uint)param_2[1] ^ 0x646e655f | *param_2 ^ 0x72656469766f7270;
        if (uVar6 == 0) {
          param_1[1] = 7;
        }
        else {
          iVar3 = (*(code *)PTR_bcmp_00799020)(uVar6,param_3);
          if (iVar3 != 0) {
            if ((uVar1 >> 1 | (ulonglong)((uVar1 & 1) != 0) << 0x3f) < 6) {
                    /* WARNING: Could not recover jumptable at 0x004ef5fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              puVar4 = (undefined1 *)
                       (*(code *)(&DAT_001980ec + *(int *)(&DAT_001980ec + (uVar1 >> 1) * 4)))
                                 (&DAT_001980ec + *(int *)(&DAT_001980ec + (uVar1 >> 1) * 4));
              return puVar4;
            }
            goto switchD_004ef46d_caseD_3;
          }
          param_1[1] = 10;
        }
      }
      break;
    case 10:
      uVar6 = *(ulonglong *)((longlong)param_2 + 6) ^ 0x74726174735f7265 |
              *param_2 ^ 0x72656469766f7270;
      if (uVar6 == 0) {
        param_1[1] = 2;
      }
      else {
        iVar3 = (*(code *)PTR_bcmp_00799020)(uVar6,param_3);
        if (iVar3 != 0) {
          if ((uVar1 >> 1 | (ulonglong)((uVar1 & 1) != 0) << 0x3f) < 6) {
                    /* WARNING: Could not recover jumptable at 0x004ef53a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            puVar4 = (undefined1 *)
                     (*(code *)(&DAT_001980d4 + *(int *)(&DAT_001980d4 + (uVar1 >> 1) * 4)))();
            return puVar4;
          }
          goto switchD_004ef46d_caseD_3;
        }
        param_1[1] = 8;
      }
      break;
    case 0xb:
      if (*(longlong *)((longlong)param_2 + 7) != 0x6d68735f6c6f6f74 ||
          *param_2 != 0x745f65766974616e) goto switchD_004ef46d_caseD_3;
      param_1[1] = 5;
      break;
    case 0xc:
      auVar7[0] = -((char)*param_2 == DAT_00184170);
      auVar7[1] = -(*(char *)((longlong)param_2 + 1) == UNK_00184171);
      auVar7[2] = -(*(char *)((longlong)param_2 + 2) == UNK_00184172);
      auVar7[3] = -(*(char *)((longlong)param_2 + 3) == UNK_00184173);
      auVar7[4] = -(*(char *)((longlong)param_2 + 4) == UNK_00184174);
      auVar7[5] = -(*(char *)((longlong)param_2 + 5) == UNK_00184175);
      auVar7[6] = -(*(char *)((longlong)param_2 + 6) == UNK_00184176);
      auVar7[7] = -(*(char *)((longlong)param_2 + 7) == UNK_00184177);
      auVar7[8] = -((char)param_2[1] == UNK_00184178);
      auVar7[9] = -(*(char *)((longlong)param_2 + 9) == UNK_00184179);
      auVar7[10] = -(*(char *)((longlong)param_2 + 10) == UNK_0018417a);
      auVar7[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_0018417b);
      auVar7[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_0018417c);
      auVar7[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_0018417d);
      auVar7[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_0018417e);
      auVar7[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_0018417f);
      if ((ushort)((ushort)(SUB161(auVar7 >> 7,0) & 1) | (ushort)(SUB161(auVar7 >> 0xf,0) & 1) << 1
                   | (ushort)(SUB161(auVar7 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar7 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar7 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar7 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar7 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar7 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar7 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar7 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar7 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar7 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar7 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar7 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar7 >> 0x77,0) & 1) << 0xe | (ushort)(auVar7[0xf] >> 7) << 0xf
                  ) != 0xffff) goto switchD_004ef46d_caseD_3;
      param_1[1] = 4;
      break;
    case 0xe:
      auVar8[0] = -((char)*param_2 == DAT_00183c20);
      auVar8[1] = -(*(char *)((longlong)param_2 + 1) == UNK_00183c21);
      auVar8[2] = -(*(char *)((longlong)param_2 + 2) == UNK_00183c22);
      auVar8[3] = -(*(char *)((longlong)param_2 + 3) == UNK_00183c23);
      auVar8[4] = -(*(char *)((longlong)param_2 + 4) == UNK_00183c24);
      auVar8[5] = -(*(char *)((longlong)param_2 + 5) == UNK_00183c25);
      auVar8[6] = -(*(char *)((longlong)param_2 + 6) == UNK_00183c26);
      auVar8[7] = -(*(char *)((longlong)param_2 + 7) == UNK_00183c27);
      auVar8[8] = -((char)param_2[1] == UNK_00183c28);
      auVar8[9] = -(*(char *)((longlong)param_2 + 9) == UNK_00183c29);
      auVar8[10] = -(*(char *)((longlong)param_2 + 10) == UNK_00183c2a);
      auVar8[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_00183c2b);
      auVar8[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_00183c2c);
      auVar8[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_00183c2d);
      auVar8[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_00183c2e);
      auVar8[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_00183c2f);
      auVar9[0] = -((char)param_2[2] == s_ne_00183e80[0]);
      auVar9[1] = -((char)(param_2[2] >> 8) == s_ne_00183e80[1]);
      auVar9[2] = -(s_ne_00183e80[2] == '\0');
      auVar9[3] = -(s_ne_00183e80[3] == '\0');
      auVar9[4] = -(UNK_00183e84 == '\0');
      auVar9[5] = -(UNK_00183e85 == '\0');
      auVar9[6] = -(UNK_00183e86 == '\0');
      auVar9[7] = -(UNK_00183e87 == '\0');
      auVar9[8] = -(UNK_00183e88 == '\0');
      auVar9[9] = -(UNK_00183e89 == '\0');
      auVar9[10] = -(UNK_00183e8a == '\0');
      auVar9[0xb] = -(UNK_00183e8b == '\0');
      auVar9[0xc] = -(UNK_00183e8c == '\0');
      auVar9[0xd] = -(UNK_00183e8d == '\0');
      auVar9[0xe] = -(UNK_00183e8e == '\0');
      auVar9[0xf] = -(UNK_00183e8f == '\0');
      auVar9 = auVar9 & auVar8;
      if ((ushort)((ushort)(SUB161(auVar9 >> 7,0) & 1) | (ushort)(SUB161(auVar9 >> 0xf,0) & 1) << 1
                   | (ushort)(SUB161(auVar9 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar9 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar9 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar9 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar9 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar9 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar9 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar9 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar9 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar9 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar9 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar9 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar9 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar9[0xf] >> 7) << 0xf) != 0xffff) goto switchD_004ef46d_caseD_3;
      param_1[1] = 6;
    }
    uVar2 = 0;
  }
  else {
switchD_004ef46d_caseD_3:
    uVar5 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
            ::unknown_variant(param_2,param_3,&PTR_s_readyprovider_startprovider_ssen_0078c178,0xf);
    *(undefined8 *)(param_1 + 8) = uVar5;
    uVar2 = 1;
  }
  *param_1 = uVar2;
  return param_1;
}


