// 004a0980 <serde_json[dc3825464c436029]::error::Error>

/* <<craggemini_core[66f3c71560d70857]::Config as
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor as
   serde_core[48776c27239fa21f]::de::Visitor>::visit_str::<serde_json[dc3825464c436029]::error::Error>
    */

void __rustcall
<<craggemini_core[66f3c71560d70857]::Config_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor_as_serde_core[48776c27239fa21f]::de::Visitor>
::visit_str::<serde_json[dc3825464c436029]::error::Error>
          (undefined1 *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  
  switch(param_3) {
  case 5:
    if (*(char *)((longlong)param_2 + 4) == 'l' && (int)*param_2 == 0x65646f6d) {
      param_1[1] = 4;
    }
    else {
      if (*(char *)((longlong)param_2 + 4) != 'd' || (int)*param_2 != 0x695f6d76)
      goto switchD_004a09a4_caseD_6;
      param_1[1] = 0xb;
    }
    break;
  default:
switchD_004a09a4_caseD_6:
    uVar3 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
            ::unknown_field(param_2,param_3,
                            &anon_572fb51faa0db1e51baf8d00d92dd3e9_59_llvm_7677212527096675952,0x2f)
    ;
    *(undefined8 *)(param_1 + 8) = uVar3;
    uVar4 = 1;
    goto LAB_004a11fb;
  case 7:
    if (*(int *)((longlong)param_2 + 3) == 0x7269645f && (int)*param_2 == 0x5f6e7572) {
      param_1[1] = 0;
    }
    else {
      if (*(int *)((longlong)param_2 + 3) != 0x6e69625f || (int)*param_2 != 0x5f796761)
      goto switchD_004a09a4_caseD_6;
      param_1[1] = 0x14;
    }
    break;
  case 8:
    if (*param_2 == 0x687461705f6d6873) {
      param_1[1] = 0xe;
    }
    else if (*param_2 == 0x65646f6d5f706361) {
      param_1[1] = 0x17;
    }
    else if (*param_2 == 0x7967657461727473) {
      param_1[1] = 0x22;
    }
    else {
      if (*param_2 != 0x73746e756f636361) goto switchD_004a09a4_caseD_6;
      param_1[1] = 0x2e;
    }
    break;
  case 9:
    if ((char)param_2[1] == 'e' && *param_2 == 0x756575715f78616d) {
      param_1[1] = 10;
    }
    else {
      if ((char)param_2[1] != 'o' || *param_2 != 0x735f656764697262) goto switchD_004a09a4_caseD_6;
      param_1[1] = 0x15;
    }
    break;
  case 10:
    if ((short)param_2[1] == 0x6469 && *param_2 == 0x5f6e6f6973736573) {
      param_1[1] = 3;
    }
    else if ((short)param_2[1] == 0x3635 && *param_2 == 0x326168735f796761) {
      param_1[1] = 5;
    }
    else {
      if ((short)param_2[1] != 0x736d || *param_2 != 0x5f74756f656d6974)
      goto switchD_004a09a4_caseD_6;
      param_1[1] = 6;
    }
    break;
  case 0xb:
    if (*(longlong *)((longlong)param_2 + 3) == 0x7269645f65736e65 && *param_2 == 0x5f65736e6563696c
       ) {
      param_1[1] = 0xc;
    }
    else {
      if (*(longlong *)((longlong)param_2 + 3) != 0x6d68735f65726975 ||
          *param_2 != 0x5f65726975716572) goto switchD_004a09a4_caseD_6;
      param_1[1] = 0x26;
    }
    break;
  case 0xc:
    if ((int)param_2[1] != 0x73746e75 || *param_2 != 0x6f6363615f78616d)
    goto switchD_004a09a4_caseD_6;
    param_1[1] = 0x23;
    break;
  case 0xe:
    if (*(longlong *)((longlong)param_2 + 6) == 0x6e656b6f745f6c61 && *param_2 == 0x6c616e7265746e69
       ) {
      param_1[1] = 1;
    }
    else {
      if (*(longlong *)((longlong)param_2 + 6) != 0x64656c62616e655f ||
          *param_2 != 0x655f796b63697473) goto switchD_004a09a4_caseD_6;
      param_1[1] = 0x24;
    }
    break;
  case 0xf:
    if (*(longlong *)((longlong)param_2 + 7) == 0x736d5f74756f656d && *param_2 == 0x6d69745f656c6469
       ) {
      param_1[1] = 8;
    }
    else if (*(longlong *)((longlong)param_2 + 7) == 0x687461705f676966 &&
             *param_2 == 0x666e6f635f70636d) {
      param_1[1] = 0x12;
    }
    else if (*(longlong *)((longlong)param_2 + 7) == 0x79636e6572727563 &&
             *param_2 == 0x636e6f635f78616d) {
      param_1[1] = 0x1f;
    }
    else if (*(longlong *)((longlong)param_2 + 7) == 0x736365735f6c7474 &&
             *param_2 == 0x745f796b63697473) {
      param_1[1] = 0x25;
    }
    else {
      if (*(longlong *)((longlong)param_2 + 7) != 0x736d5f6e65706f5f ||
          *param_2 != 0x5f74697563726963) goto switchD_004a09a4_caseD_6;
      param_1[1] = 0x28;
    }
    break;
  case 0x10:
    auVar21[0] = -((char)*param_2 ==
                  anon_572fb51faa0db1e51baf8d00d92dd3e9_21_llvm_7677212527096675952[0]);
    auVar21[1] = -(*(char *)((longlong)param_2 + 1) ==
                  anon_572fb51faa0db1e51baf8d00d92dd3e9_21_llvm_7677212527096675952[1]);
    auVar21[2] = -(*(char *)((longlong)param_2 + 2) ==
                  anon_572fb51faa0db1e51baf8d00d92dd3e9_21_llvm_7677212527096675952[2]);
    auVar21[3] = -(*(char *)((longlong)param_2 + 3) ==
                  anon_572fb51faa0db1e51baf8d00d92dd3e9_21_llvm_7677212527096675952[3]);
    auVar21[4] = -(*(char *)((longlong)param_2 + 4) ==
                  anon_572fb51faa0db1e51baf8d00d92dd3e9_21_llvm_7677212527096675952[4]);
    auVar21[5] = -(*(char *)((longlong)param_2 + 5) ==
                  anon_572fb51faa0db1e51baf8d00d92dd3e9_21_llvm_7677212527096675952[5]);
    auVar21[6] = -(*(char *)((longlong)param_2 + 6) ==
                  anon_572fb51faa0db1e51baf8d00d92dd3e9_21_llvm_7677212527096675952[6]);
    auVar21[7] = -(*(char *)((longlong)param_2 + 7) ==
                  anon_572fb51faa0db1e51baf8d00d92dd3e9_21_llvm_7677212527096675952[7]);
    auVar21[8] = -((char)param_2[1] ==
                  anon_572fb51faa0db1e51baf8d00d92dd3e9_21_llvm_7677212527096675952[8]);
    auVar21[9] = -(*(char *)((longlong)param_2 + 9) ==
                  anon_572fb51faa0db1e51baf8d00d92dd3e9_21_llvm_7677212527096675952[9]);
    auVar21[10] = -(*(char *)((longlong)param_2 + 10) ==
                   anon_572fb51faa0db1e51baf8d00d92dd3e9_21_llvm_7677212527096675952[10]);
    auVar21[0xb] = -(*(char *)((longlong)param_2 + 0xb) ==
                    anon_572fb51faa0db1e51baf8d00d92dd3e9_21_llvm_7677212527096675952[0xb]);
    auVar21[0xc] = -(*(char *)((longlong)param_2 + 0xc) ==
                    anon_572fb51faa0db1e51baf8d00d92dd3e9_21_llvm_7677212527096675952[0xc]);
    auVar21[0xd] = -(*(char *)((longlong)param_2 + 0xd) ==
                    anon_572fb51faa0db1e51baf8d00d92dd3e9_21_llvm_7677212527096675952[0xd]);
    auVar21[0xe] = -(*(char *)((longlong)param_2 + 0xe) ==
                    anon_572fb51faa0db1e51baf8d00d92dd3e9_21_llvm_7677212527096675952[0xe]);
    auVar21[0xf] = -(*(char *)((longlong)param_2 + 0xf) ==
                    anon_572fb51faa0db1e51baf8d00d92dd3e9_21_llvm_7677212527096675952[0xf]);
    if ((ushort)((ushort)(SUB161(auVar21 >> 7,0) & 1) | (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar21 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar21 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar21 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar21 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar21 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar21 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar21 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar21 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar21 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar21 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar21 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar21 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar21 >> 0x77,0) & 1) << 0xe | (ushort)(auVar21[0xf] >> 7) << 0xf
                ) == 0xffff) {
      param_1[1] = 9;
    }
    else {
      auVar22[0] = -((char)*param_2 ==
                    anon_572fb51faa0db1e51baf8d00d92dd3e9_25_llvm_7677212527096675952[0]);
      auVar22[1] = -(*(char *)((longlong)param_2 + 1) ==
                    anon_572fb51faa0db1e51baf8d00d92dd3e9_25_llvm_7677212527096675952[1]);
      auVar22[2] = -(*(char *)((longlong)param_2 + 2) ==
                    anon_572fb51faa0db1e51baf8d00d92dd3e9_25_llvm_7677212527096675952[2]);
      auVar22[3] = -(*(char *)((longlong)param_2 + 3) ==
                    anon_572fb51faa0db1e51baf8d00d92dd3e9_25_llvm_7677212527096675952[3]);
      auVar22[4] = -(*(char *)((longlong)param_2 + 4) ==
                    anon_572fb51faa0db1e51baf8d00d92dd3e9_25_llvm_7677212527096675952[4]);
      auVar22[5] = -(*(char *)((longlong)param_2 + 5) ==
                    anon_572fb51faa0db1e51baf8d00d92dd3e9_25_llvm_7677212527096675952[5]);
      auVar22[6] = -(*(char *)((longlong)param_2 + 6) ==
                    anon_572fb51faa0db1e51baf8d00d92dd3e9_25_llvm_7677212527096675952[6]);
      auVar22[7] = -(*(char *)((longlong)param_2 + 7) ==
                    anon_572fb51faa0db1e51baf8d00d92dd3e9_25_llvm_7677212527096675952[7]);
      auVar22[8] = -((char)param_2[1] ==
                    anon_572fb51faa0db1e51baf8d00d92dd3e9_25_llvm_7677212527096675952[8]);
      auVar22[9] = -(*(char *)((longlong)param_2 + 9) ==
                    anon_572fb51faa0db1e51baf8d00d92dd3e9_25_llvm_7677212527096675952[9]);
      auVar22[10] = -(*(char *)((longlong)param_2 + 10) ==
                     anon_572fb51faa0db1e51baf8d00d92dd3e9_25_llvm_7677212527096675952[10]);
      auVar22[0xb] = -(*(char *)((longlong)param_2 + 0xb) ==
                      anon_572fb51faa0db1e51baf8d00d92dd3e9_25_llvm_7677212527096675952[0xb]);
      auVar22[0xc] = -(*(char *)((longlong)param_2 + 0xc) ==
                      anon_572fb51faa0db1e51baf8d00d92dd3e9_25_llvm_7677212527096675952[0xc]);
      auVar22[0xd] = -(*(char *)((longlong)param_2 + 0xd) ==
                      anon_572fb51faa0db1e51baf8d00d92dd3e9_25_llvm_7677212527096675952[0xd]);
      auVar22[0xe] = -(*(char *)((longlong)param_2 + 0xe) ==
                      anon_572fb51faa0db1e51baf8d00d92dd3e9_25_llvm_7677212527096675952[0xe]);
      auVar22[0xf] = -(*(char *)((longlong)param_2 + 0xf) ==
                      anon_572fb51faa0db1e51baf8d00d92dd3e9_25_llvm_7677212527096675952[0xf]);
      if ((ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
                  (ushort)(auVar22[0xf] >> 7) << 0xf) == 0xffff) {
        param_1[1] = 0xd;
      }
      else {
        auVar23[0] = -((char)*param_2 ==
                      anon_1b4a85c95499e1b671cf4fa96a1b6d0f_70_llvm_10049508496007902178[0]);
        auVar23[1] = -(*(char *)((longlong)param_2 + 1) ==
                      anon_1b4a85c95499e1b671cf4fa96a1b6d0f_70_llvm_10049508496007902178[1]);
        auVar23[2] = -(*(char *)((longlong)param_2 + 2) ==
                      anon_1b4a85c95499e1b671cf4fa96a1b6d0f_70_llvm_10049508496007902178[2]);
        auVar23[3] = -(*(char *)((longlong)param_2 + 3) ==
                      anon_1b4a85c95499e1b671cf4fa96a1b6d0f_70_llvm_10049508496007902178[3]);
        auVar23[4] = -(*(char *)((longlong)param_2 + 4) ==
                      anon_1b4a85c95499e1b671cf4fa96a1b6d0f_70_llvm_10049508496007902178[4]);
        auVar23[5] = -(*(char *)((longlong)param_2 + 5) ==
                      anon_1b4a85c95499e1b671cf4fa96a1b6d0f_70_llvm_10049508496007902178[5]);
        auVar23[6] = -(*(char *)((longlong)param_2 + 6) ==
                      anon_1b4a85c95499e1b671cf4fa96a1b6d0f_70_llvm_10049508496007902178[6]);
        auVar23[7] = -(*(char *)((longlong)param_2 + 7) ==
                      anon_1b4a85c95499e1b671cf4fa96a1b6d0f_70_llvm_10049508496007902178[7]);
        auVar23[8] = -((char)param_2[1] ==
                      anon_1b4a85c95499e1b671cf4fa96a1b6d0f_70_llvm_10049508496007902178[8]);
        auVar23[9] = -(*(char *)((longlong)param_2 + 9) ==
                      anon_1b4a85c95499e1b671cf4fa96a1b6d0f_70_llvm_10049508496007902178[9]);
        auVar23[10] = -(*(char *)((longlong)param_2 + 10) ==
                       anon_1b4a85c95499e1b671cf4fa96a1b6d0f_70_llvm_10049508496007902178[10]);
        auVar23[0xb] = -(*(char *)((longlong)param_2 + 0xb) ==
                        anon_1b4a85c95499e1b671cf4fa96a1b6d0f_70_llvm_10049508496007902178[0xb]);
        auVar23[0xc] = -(*(char *)((longlong)param_2 + 0xc) ==
                        anon_1b4a85c95499e1b671cf4fa96a1b6d0f_70_llvm_10049508496007902178[0xc]);
        auVar23[0xd] = -(*(char *)((longlong)param_2 + 0xd) ==
                        anon_1b4a85c95499e1b671cf4fa96a1b6d0f_70_llvm_10049508496007902178[0xd]);
        auVar23[0xe] = -(*(char *)((longlong)param_2 + 0xe) ==
                        anon_1b4a85c95499e1b671cf4fa96a1b6d0f_70_llvm_10049508496007902178[0xe]);
        auVar23[0xf] = -(*(char *)((longlong)param_2 + 0xf) ==
                        anon_1b4a85c95499e1b671cf4fa96a1b6d0f_70_llvm_10049508496007902178[0xf]);
        if ((ushort)((ushort)(SUB161(auVar23 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar23[0xf] >> 7) << 0xf) != 0xffff) goto switchD_004a09a4_caseD_6;
        param_1[1] = 0x2d;
      }
    }
    break;
  case 0x11:
    auVar7[0] = -((char)*param_2 == s_shm_request_byte_00182b50[0]);
    auVar7[1] = -(*(char *)((longlong)param_2 + 1) == s_shm_request_byte_00182b50[1]);
    auVar7[2] = -(*(char *)((longlong)param_2 + 2) == s_shm_request_byte_00182b50[2]);
    auVar7[3] = -(*(char *)((longlong)param_2 + 3) == s_shm_request_byte_00182b50[3]);
    auVar7[4] = -(*(char *)((longlong)param_2 + 4) == s_shm_request_byte_00182b50[4]);
    auVar7[5] = -(*(char *)((longlong)param_2 + 5) == s_shm_request_byte_00182b50[5]);
    auVar7[6] = -(*(char *)((longlong)param_2 + 6) == s_shm_request_byte_00182b50[6]);
    auVar7[7] = -(*(char *)((longlong)param_2 + 7) == s_shm_request_byte_00182b50[7]);
    auVar7[8] = -((char)param_2[1] == s_shm_request_byte_00182b50[8]);
    auVar7[9] = -(*(char *)((longlong)param_2 + 9) == s_shm_request_byte_00182b50[9]);
    auVar7[10] = -(*(char *)((longlong)param_2 + 10) == s_shm_request_byte_00182b50[10]);
    auVar7[0xb] = -(*(char *)((longlong)param_2 + 0xb) == s_shm_request_byte_00182b50[0xb]);
    auVar7[0xc] = -(*(char *)((longlong)param_2 + 0xc) == s_shm_request_byte_00182b50[0xc]);
    auVar7[0xd] = -(*(char *)((longlong)param_2 + 0xd) == s_shm_request_byte_00182b50[0xd]);
    auVar7[0xe] = -(*(char *)((longlong)param_2 + 0xe) == s_shm_request_byte_00182b50[0xe]);
    auVar7[0xf] = -(*(char *)((longlong)param_2 + 0xf) == s_shm_request_byte_00182b50[0xf]);
    auVar30[0] = -((char)param_2[2] == DAT_00184770);
    auVar30[1] = -(UNK_00184771 == '\0');
    auVar30[2] = -(UNK_00184772 == '\0');
    auVar30[3] = -(UNK_00184773 == '\0');
    auVar30[4] = -(UNK_00184774 == '\0');
    auVar30[5] = -(UNK_00184775 == '\0');
    auVar30[6] = -(UNK_00184776 == '\0');
    auVar30[7] = -(UNK_00184777 == '\0');
    auVar30[8] = -(UNK_00184778 == '\0');
    auVar30[9] = -(UNK_00184779 == '\0');
    auVar30[10] = -(UNK_0018477a == '\0');
    auVar30[0xb] = -(UNK_0018477b == '\0');
    auVar30[0xc] = -(UNK_0018477c == '\0');
    auVar30[0xd] = -(UNK_0018477d == '\0');
    auVar30[0xe] = -(UNK_0018477e == '\0');
    auVar30[0xf] = -(UNK_0018477f == '\0');
    auVar30 = auVar30 & auVar7;
    if ((ushort)((ushort)(SUB161(auVar30 >> 7,0) & 1) | (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar30[0xf] >> 7) << 0xf) == 0xffff) {
      param_1[1] = 0xf;
    }
    else {
      auVar8[0] = -((char)*param_2 == s_verify_agy_sha25_00183d40[0]);
      auVar8[1] = -(*(char *)((longlong)param_2 + 1) == s_verify_agy_sha25_00183d40[1]);
      auVar8[2] = -(*(char *)((longlong)param_2 + 2) == s_verify_agy_sha25_00183d40[2]);
      auVar8[3] = -(*(char *)((longlong)param_2 + 3) == s_verify_agy_sha25_00183d40[3]);
      auVar8[4] = -(*(char *)((longlong)param_2 + 4) == s_verify_agy_sha25_00183d40[4]);
      auVar8[5] = -(*(char *)((longlong)param_2 + 5) == s_verify_agy_sha25_00183d40[5]);
      auVar8[6] = -(*(char *)((longlong)param_2 + 6) == s_verify_agy_sha25_00183d40[6]);
      auVar8[7] = -(*(char *)((longlong)param_2 + 7) == s_verify_agy_sha25_00183d40[7]);
      auVar8[8] = -((char)param_2[1] == s_verify_agy_sha25_00183d40[8]);
      auVar8[9] = -(*(char *)((longlong)param_2 + 9) == s_verify_agy_sha25_00183d40[9]);
      auVar8[10] = -(*(char *)((longlong)param_2 + 10) == s_verify_agy_sha25_00183d40[10]);
      auVar8[0xb] = -(*(char *)((longlong)param_2 + 0xb) == s_verify_agy_sha25_00183d40[0xb]);
      auVar8[0xc] = -(*(char *)((longlong)param_2 + 0xc) == s_verify_agy_sha25_00183d40[0xc]);
      auVar8[0xd] = -(*(char *)((longlong)param_2 + 0xd) == s_verify_agy_sha25_00183d40[0xd]);
      auVar8[0xe] = -(*(char *)((longlong)param_2 + 0xe) == s_verify_agy_sha25_00183d40[0xe]);
      auVar8[0xf] = -(*(char *)((longlong)param_2 + 0xf) == s_verify_agy_sha25_00183d40[0xf]);
      auVar31[0] = -((char)param_2[2] == s_6_00183780[0]);
      auVar31[1] = -(s_6_00183780[1] == '\0');
      auVar31[2] = -(s_6_00183780[2] == '\0');
      auVar31[3] = -(s_6_00183780[3] == '\0');
      auVar31[4] = -(UNK_00183784 == '\0');
      auVar31[5] = -(UNK_00183785 == '\0');
      auVar31[6] = -(UNK_00183786 == '\0');
      auVar31[7] = -(UNK_00183787 == '\0');
      auVar31[8] = -(UNK_00183788 == '\0');
      auVar31[9] = -(UNK_00183789 == '\0');
      auVar31[10] = -(UNK_0018378a == '\0');
      auVar31[0xb] = -(UNK_0018378b == '\0');
      auVar31[0xc] = -(UNK_0018378c == '\0');
      auVar31[0xd] = -(UNK_0018378d == '\0');
      auVar31[0xe] = -(UNK_0018378e == '\0');
      auVar31[0xf] = -(UNK_0018378f == '\0');
      auVar31 = auVar31 & auVar8;
      if ((ushort)((ushort)(SUB161(auVar31 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar31 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar31 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar31 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar31 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar31 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar31 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar31 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar31 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar31 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar31 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar31 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar31 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar31[0xf] >> 7) << 0xf) != 0xffff)
      goto switchD_004a09a4_caseD_6;
      param_1[1] = 0x16;
    }
    break;
  case 0x12:
    auVar13[0] = -((char)*param_2 == s_external_api_tok_00183470[0]);
    auVar13[1] = -(*(char *)((longlong)param_2 + 1) == s_external_api_tok_00183470[1]);
    auVar13[2] = -(*(char *)((longlong)param_2 + 2) == s_external_api_tok_00183470[2]);
    auVar13[3] = -(*(char *)((longlong)param_2 + 3) == s_external_api_tok_00183470[3]);
    auVar13[4] = -(*(char *)((longlong)param_2 + 4) == s_external_api_tok_00183470[4]);
    auVar13[5] = -(*(char *)((longlong)param_2 + 5) == s_external_api_tok_00183470[5]);
    auVar13[6] = -(*(char *)((longlong)param_2 + 6) == s_external_api_tok_00183470[6]);
    auVar13[7] = -(*(char *)((longlong)param_2 + 7) == s_external_api_tok_00183470[7]);
    auVar13[8] = -((char)param_2[1] == s_external_api_tok_00183470[8]);
    auVar13[9] = -(*(char *)((longlong)param_2 + 9) == s_external_api_tok_00183470[9]);
    auVar13[10] = -(*(char *)((longlong)param_2 + 10) == s_external_api_tok_00183470[10]);
    auVar13[0xb] = -(*(char *)((longlong)param_2 + 0xb) == s_external_api_tok_00183470[0xb]);
    auVar13[0xc] = -(*(char *)((longlong)param_2 + 0xc) == s_external_api_tok_00183470[0xc]);
    auVar13[0xd] = -(*(char *)((longlong)param_2 + 0xd) == s_external_api_tok_00183470[0xd]);
    auVar13[0xe] = -(*(char *)((longlong)param_2 + 0xe) == s_external_api_tok_00183470[0xe]);
    auVar13[0xf] = -(*(char *)((longlong)param_2 + 0xf) == s_external_api_tok_00183470[0xf]);
    auVar36[0] = -((char)param_2[2] == s_en_001842a0[0]);
    auVar36[1] = -((char)((ulonglong)param_2[2] >> 8) == s_en_001842a0[1]);
    auVar36[2] = -(s_en_001842a0[2] == '\0');
    auVar36[3] = -(s_en_001842a0[3] == '\0');
    auVar36[4] = -(UNK_001842a4 == '\0');
    auVar36[5] = -(UNK_001842a5 == '\0');
    auVar36[6] = -(UNK_001842a6 == '\0');
    auVar36[7] = -(UNK_001842a7 == '\0');
    auVar36[8] = -(UNK_001842a8 == '\0');
    auVar36[9] = -(UNK_001842a9 == '\0');
    auVar36[10] = -(UNK_001842aa == '\0');
    auVar36[0xb] = -(UNK_001842ab == '\0');
    auVar36[0xc] = -(UNK_001842ac == '\0');
    auVar36[0xd] = -(UNK_001842ad == '\0');
    auVar36[0xe] = -(UNK_001842ae == '\0');
    auVar36[0xf] = -(UNK_001842af == '\0');
    auVar36 = auVar36 & auVar13;
    if ((ushort)((ushort)(SUB161(auVar36 >> 7,0) & 1) | (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar36 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar36 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar36 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar36 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar36 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar36 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar36 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar36 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar36 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar36 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar36 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar36 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar36[0xf] >> 7) << 0xf) == 0xffff) {
      param_1[1] = 2;
    }
    else {
      auVar14[0] = -((char)*param_2 == DAT_001840b0);
      auVar14[1] = -(*(char *)((longlong)param_2 + 1) == UNK_001840b1);
      auVar14[2] = -(*(char *)((longlong)param_2 + 2) == UNK_001840b2);
      auVar14[3] = -(*(char *)((longlong)param_2 + 3) == UNK_001840b3);
      auVar14[4] = -(*(char *)((longlong)param_2 + 4) == UNK_001840b4);
      auVar14[5] = -(*(char *)((longlong)param_2 + 5) == UNK_001840b5);
      auVar14[6] = -(*(char *)((longlong)param_2 + 6) == UNK_001840b6);
      auVar14[7] = -(*(char *)((longlong)param_2 + 7) == UNK_001840b7);
      auVar14[8] = -((char)param_2[1] == UNK_001840b8);
      auVar14[9] = -(*(char *)((longlong)param_2 + 9) == UNK_001840b9);
      auVar14[10] = -(*(char *)((longlong)param_2 + 10) == UNK_001840ba);
      auVar14[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_001840bb);
      auVar14[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_001840bc);
      auVar14[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_001840bd);
      auVar14[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_001840be);
      auVar14[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_001840bf);
      auVar37[0] = -((char)param_2[2] == DAT_00183ac0);
      auVar37[1] = -((char)((ulonglong)param_2[2] >> 8) == UNK_00183ac1);
      auVar37[2] = -(UNK_00183ac2 == '\0');
      auVar37[3] = -(UNK_00183ac3 == '\0');
      auVar37[4] = -(UNK_00183ac4 == '\0');
      auVar37[5] = -(UNK_00183ac5 == '\0');
      auVar37[6] = -(UNK_00183ac6 == '\0');
      auVar37[7] = -(UNK_00183ac7 == '\0');
      auVar37[8] = -(UNK_00183ac8 == '\0');
      auVar37[9] = -(UNK_00183ac9 == '\0');
      auVar37[10] = -(UNK_00183aca == '\0');
      auVar37[0xb] = -(UNK_00183acb == '\0');
      auVar37[0xc] = -(UNK_00183acc == '\0');
      auVar37[0xd] = -(UNK_00183acd == '\0');
      auVar37[0xe] = -(UNK_00183ace == '\0');
      auVar37[0xf] = -(UNK_00183acf == '\0');
      auVar37 = auVar37 & auVar14;
      if ((ushort)((ushort)(SUB161(auVar37 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar37 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar37 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar37 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar37 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar37 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar37 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar37 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar37 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar37 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar37 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar37 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar37 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar37 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar37 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar37[0xf] >> 7) << 0xf) == 0xffff) {
        param_1[1] = 0x10;
      }
      else {
        auVar15[0] = -((char)*param_2 == s_system_prompt_mo_QUOTA_EXHAUSTED_00182b60[0]);
        auVar15[1] = -(*(char *)((longlong)param_2 + 1) ==
                      s_system_prompt_mo_QUOTA_EXHAUSTED_00182b60[1]);
        auVar15[2] = -(*(char *)((longlong)param_2 + 2) ==
                      s_system_prompt_mo_QUOTA_EXHAUSTED_00182b60[2]);
        auVar15[3] = -(*(char *)((longlong)param_2 + 3) ==
                      s_system_prompt_mo_QUOTA_EXHAUSTED_00182b60[3]);
        auVar15[4] = -(*(char *)((longlong)param_2 + 4) ==
                      s_system_prompt_mo_QUOTA_EXHAUSTED_00182b60[4]);
        auVar15[5] = -(*(char *)((longlong)param_2 + 5) ==
                      s_system_prompt_mo_QUOTA_EXHAUSTED_00182b60[5]);
        auVar15[6] = -(*(char *)((longlong)param_2 + 6) ==
                      s_system_prompt_mo_QUOTA_EXHAUSTED_00182b60[6]);
        auVar15[7] = -(*(char *)((longlong)param_2 + 7) ==
                      s_system_prompt_mo_QUOTA_EXHAUSTED_00182b60[7]);
        auVar15[8] = -((char)param_2[1] == s_system_prompt_mo_QUOTA_EXHAUSTED_00182b60[8]);
        auVar15[9] = -(*(char *)((longlong)param_2 + 9) ==
                      s_system_prompt_mo_QUOTA_EXHAUSTED_00182b60[9]);
        auVar15[10] = -(*(char *)((longlong)param_2 + 10) ==
                       s_system_prompt_mo_QUOTA_EXHAUSTED_00182b60[10]);
        auVar15[0xb] = -(*(char *)((longlong)param_2 + 0xb) ==
                        s_system_prompt_mo_QUOTA_EXHAUSTED_00182b60[0xb]);
        auVar15[0xc] = -(*(char *)((longlong)param_2 + 0xc) ==
                        s_system_prompt_mo_QUOTA_EXHAUSTED_00182b60[0xc]);
        auVar15[0xd] = -(*(char *)((longlong)param_2 + 0xd) ==
                        s_system_prompt_mo_QUOTA_EXHAUSTED_00182b60[0xd]);
        auVar15[0xe] = -(*(char *)((longlong)param_2 + 0xe) ==
                        s_system_prompt_mo_QUOTA_EXHAUSTED_00182b60[0xe]);
        auVar15[0xf] = -(*(char *)((longlong)param_2 + 0xf) ==
                        s_system_prompt_mo_QUOTA_EXHAUSTED_00182b60[0xf]);
        auVar38[0] = -((char)param_2[2] == s_de_00182cb0[0]);
        auVar38[1] = -((char)((ulonglong)param_2[2] >> 8) == s_de_00182cb0[1]);
        auVar38[2] = -(s_de_00182cb0[2] == '\0');
        auVar38[3] = -(s_de_00182cb0[3] == '\0');
        auVar38[4] = -(UNK_00182cb4 == '\0');
        auVar38[5] = -(UNK_00182cb5 == '\0');
        auVar38[6] = -(UNK_00182cb6 == '\0');
        auVar38[7] = -(UNK_00182cb7 == '\0');
        auVar38[8] = -(UNK_00182cb8 == '\0');
        auVar38[9] = -(UNK_00182cb9 == '\0');
        auVar38[10] = -(UNK_00182cba == '\0');
        auVar38[0xb] = -(UNK_00182cbb == '\0');
        auVar38[0xc] = -(UNK_00182cbc == '\0');
        auVar38[0xd] = -(UNK_00182cbd == '\0');
        auVar38[0xe] = -(UNK_00182cbe == '\0');
        auVar38[0xf] = -(UNK_00182cbf == '\0');
        auVar38 = auVar38 & auVar15;
        if ((ushort)((ushort)(SUB161(auVar38 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar38 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar38 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar38 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar38 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar38 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar38 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar38 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar38 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar38 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar38 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar38 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar38 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar38 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar38 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar38[0xf] >> 7) << 0xf) == 0xffff) {
          param_1[1] = 0x21;
        }
        else {
          auVar16[0] = -((char)*param_2 == s_memory_limit_byt_00183850[0]);
          auVar16[1] = -(*(char *)((longlong)param_2 + 1) == s_memory_limit_byt_00183850[1]);
          auVar16[2] = -(*(char *)((longlong)param_2 + 2) == s_memory_limit_byt_00183850[2]);
          auVar16[3] = -(*(char *)((longlong)param_2 + 3) == s_memory_limit_byt_00183850[3]);
          auVar16[4] = -(*(char *)((longlong)param_2 + 4) == s_memory_limit_byt_00183850[4]);
          auVar16[5] = -(*(char *)((longlong)param_2 + 5) == s_memory_limit_byt_00183850[5]);
          auVar16[6] = -(*(char *)((longlong)param_2 + 6) == s_memory_limit_byt_00183850[6]);
          auVar16[7] = -(*(char *)((longlong)param_2 + 7) == s_memory_limit_byt_00183850[7]);
          auVar16[8] = -((char)param_2[1] == s_memory_limit_byt_00183850[8]);
          auVar16[9] = -(*(char *)((longlong)param_2 + 9) == s_memory_limit_byt_00183850[9]);
          auVar16[10] = -(*(char *)((longlong)param_2 + 10) == s_memory_limit_byt_00183850[10]);
          auVar16[0xb] = -(*(char *)((longlong)param_2 + 0xb) == s_memory_limit_byt_00183850[0xb]);
          auVar16[0xc] = -(*(char *)((longlong)param_2 + 0xc) == s_memory_limit_byt_00183850[0xc]);
          auVar16[0xd] = -(*(char *)((longlong)param_2 + 0xd) == s_memory_limit_byt_00183850[0xd]);
          auVar16[0xe] = -(*(char *)((longlong)param_2 + 0xe) == s_memory_limit_byt_00183850[0xe]);
          auVar16[0xf] = -(*(char *)((longlong)param_2 + 0xf) == s_memory_limit_byt_00183850[0xf]);
          auVar39[0] = -((char)param_2[2] == DAT_00183ac0);
          auVar39[1] = -((char)((ulonglong)param_2[2] >> 8) == UNK_00183ac1);
          auVar39[2] = -(UNK_00183ac2 == '\0');
          auVar39[3] = -(UNK_00183ac3 == '\0');
          auVar39[4] = -(UNK_00183ac4 == '\0');
          auVar39[5] = -(UNK_00183ac5 == '\0');
          auVar39[6] = -(UNK_00183ac6 == '\0');
          auVar39[7] = -(UNK_00183ac7 == '\0');
          auVar39[8] = -(UNK_00183ac8 == '\0');
          auVar39[9] = -(UNK_00183ac9 == '\0');
          auVar39[10] = -(UNK_00183aca == '\0');
          auVar39[0xb] = -(UNK_00183acb == '\0');
          auVar39[0xc] = -(UNK_00183acc == '\0');
          auVar39[0xd] = -(UNK_00183acd == '\0');
          auVar39[0xe] = -(UNK_00183ace == '\0');
          auVar39[0xf] = -(UNK_00183acf == '\0');
          auVar39 = auVar39 & auVar16;
          if ((ushort)((ushort)(SUB161(auVar39 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar39 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar39 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar39 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar39 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar39 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar39 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar39 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar39 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar39 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar39 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar39 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar39 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar39 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar39 >> 0x77,0) & 1) << 0xe |
                      (ushort)(byte)(auVar39[0xf] >> 7) << 0xf) != 0xffff)
          goto switchD_004a09a4_caseD_6;
          param_1[1] = 0x29;
        }
      }
    }
    break;
  case 0x13:
    auVar32[0] = -(*(char *)((longlong)param_2 + 3) == s__tool_timeout_ms_00183560[0]);
    auVar32[1] = -(*(char *)((longlong)param_2 + 4) == s__tool_timeout_ms_00183560[1]);
    auVar32[2] = -(*(char *)((longlong)param_2 + 5) == s__tool_timeout_ms_00183560[2]);
    auVar32[3] = -(*(char *)((longlong)param_2 + 6) == s__tool_timeout_ms_00183560[3]);
    auVar32[4] = -(*(char *)((longlong)param_2 + 7) == s__tool_timeout_ms_00183560[4]);
    auVar32[5] = -((char)param_2[1] == s__tool_timeout_ms_00183560[5]);
    auVar32[6] = -(*(char *)((longlong)param_2 + 9) == s__tool_timeout_ms_00183560[6]);
    auVar32[7] = -(*(char *)((longlong)param_2 + 10) == s__tool_timeout_ms_00183560[7]);
    auVar32[8] = -(*(char *)((longlong)param_2 + 0xb) == s__tool_timeout_ms_00183560[8]);
    auVar32[9] = -(*(char *)((longlong)param_2 + 0xc) == s__tool_timeout_ms_00183560[9]);
    auVar32[10] = -(*(char *)((longlong)param_2 + 0xd) == s__tool_timeout_ms_00183560[10]);
    auVar32[0xb] = -(*(char *)((longlong)param_2 + 0xe) == s__tool_timeout_ms_00183560[0xb]);
    auVar32[0xc] = -(*(char *)((longlong)param_2 + 0xf) == s__tool_timeout_ms_00183560[0xc]);
    auVar32[0xd] = -((char)param_2[2] == s__tool_timeout_ms_00183560[0xd]);
    auVar32[0xe] = -(*(char *)((longlong)param_2 + 0x11) == s__tool_timeout_ms_00183560[0xe]);
    auVar32[0xf] = -(*(char *)((longlong)param_2 + 0x12) == s__tool_timeout_ms_00183560[0xf]);
    auVar9[0] = -((char)*param_2 == s_mcp_tool_timeout_00184780[0]);
    auVar9[1] = -(*(char *)((longlong)param_2 + 1) == s_mcp_tool_timeout_00184780[1]);
    auVar9[2] = -(*(char *)((longlong)param_2 + 2) == s_mcp_tool_timeout_00184780[2]);
    auVar9[3] = -(*(char *)((longlong)param_2 + 3) == s_mcp_tool_timeout_00184780[3]);
    auVar9[4] = -(*(char *)((longlong)param_2 + 4) == s_mcp_tool_timeout_00184780[4]);
    auVar9[5] = -(*(char *)((longlong)param_2 + 5) == s_mcp_tool_timeout_00184780[5]);
    auVar9[6] = -(*(char *)((longlong)param_2 + 6) == s_mcp_tool_timeout_00184780[6]);
    auVar9[7] = -(*(char *)((longlong)param_2 + 7) == s_mcp_tool_timeout_00184780[7]);
    auVar9[8] = -((char)param_2[1] == s_mcp_tool_timeout_00184780[8]);
    auVar9[9] = -(*(char *)((longlong)param_2 + 9) == s_mcp_tool_timeout_00184780[9]);
    auVar9[10] = -(*(char *)((longlong)param_2 + 10) == s_mcp_tool_timeout_00184780[10]);
    auVar9[0xb] = -(*(char *)((longlong)param_2 + 0xb) == s_mcp_tool_timeout_00184780[0xb]);
    auVar9[0xc] = -(*(char *)((longlong)param_2 + 0xc) == s_mcp_tool_timeout_00184780[0xc]);
    auVar9[0xd] = -(*(char *)((longlong)param_2 + 0xd) == s_mcp_tool_timeout_00184780[0xd]);
    auVar9[0xe] = -(*(char *)((longlong)param_2 + 0xe) == s_mcp_tool_timeout_00184780[0xe]);
    auVar9[0xf] = -(*(char *)((longlong)param_2 + 0xf) == s_mcp_tool_timeout_00184780[0xf]);
    auVar9 = auVar9 & auVar32;
    if ((ushort)((ushort)(SUB161(auVar9 >> 7,0) & 1) | (ushort)(SUB161(auVar9 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar9 >> 0x17,0) & 1) << 2 |
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
                (ushort)(byte)(auVar9[0xf] >> 7) << 0xf) == 0xffff) {
      param_1[1] = 0x11;
    }
    else {
      auVar33[0] = -(*(char *)((longlong)param_2 + 3) == s_owed_agy_sha256s_00182a50[0]);
      auVar33[1] = -(*(char *)((longlong)param_2 + 4) == s_owed_agy_sha256s_00182a50[1]);
      auVar33[2] = -(*(char *)((longlong)param_2 + 5) == s_owed_agy_sha256s_00182a50[2]);
      auVar33[3] = -(*(char *)((longlong)param_2 + 6) == s_owed_agy_sha256s_00182a50[3]);
      auVar33[4] = -(*(char *)((longlong)param_2 + 7) == s_owed_agy_sha256s_00182a50[4]);
      auVar33[5] = -((char)param_2[1] == s_owed_agy_sha256s_00182a50[5]);
      auVar33[6] = -(*(char *)((longlong)param_2 + 9) == s_owed_agy_sha256s_00182a50[6]);
      auVar33[7] = -(*(char *)((longlong)param_2 + 10) == s_owed_agy_sha256s_00182a50[7]);
      auVar33[8] = -(*(char *)((longlong)param_2 + 0xb) == s_owed_agy_sha256s_00182a50[8]);
      auVar33[9] = -(*(char *)((longlong)param_2 + 0xc) == s_owed_agy_sha256s_00182a50[9]);
      auVar33[10] = -(*(char *)((longlong)param_2 + 0xd) == s_owed_agy_sha256s_00182a50[10]);
      auVar33[0xb] = -(*(char *)((longlong)param_2 + 0xe) == s_owed_agy_sha256s_00182a50[0xb]);
      auVar33[0xc] = -(*(char *)((longlong)param_2 + 0xf) == s_owed_agy_sha256s_00182a50[0xc]);
      auVar33[0xd] = -((char)param_2[2] == s_owed_agy_sha256s_00182a50[0xd]);
      auVar33[0xe] = -(*(char *)((longlong)param_2 + 0x11) == s_owed_agy_sha256s_00182a50[0xe]);
      auVar33[0xf] = -(*(char *)((longlong)param_2 + 0x12) == s_owed_agy_sha256s_00182a50[0xf]);
      auVar10[0] = -((char)*param_2 == s_allowed_agy_sha2_00182ca0[0]);
      auVar10[1] = -(*(char *)((longlong)param_2 + 1) == s_allowed_agy_sha2_00182ca0[1]);
      auVar10[2] = -(*(char *)((longlong)param_2 + 2) == s_allowed_agy_sha2_00182ca0[2]);
      auVar10[3] = -(*(char *)((longlong)param_2 + 3) == s_allowed_agy_sha2_00182ca0[3]);
      auVar10[4] = -(*(char *)((longlong)param_2 + 4) == s_allowed_agy_sha2_00182ca0[4]);
      auVar10[5] = -(*(char *)((longlong)param_2 + 5) == s_allowed_agy_sha2_00182ca0[5]);
      auVar10[6] = -(*(char *)((longlong)param_2 + 6) == s_allowed_agy_sha2_00182ca0[6]);
      auVar10[7] = -(*(char *)((longlong)param_2 + 7) == s_allowed_agy_sha2_00182ca0[7]);
      auVar10[8] = -((char)param_2[1] == s_allowed_agy_sha2_00182ca0[8]);
      auVar10[9] = -(*(char *)((longlong)param_2 + 9) == s_allowed_agy_sha2_00182ca0[9]);
      auVar10[10] = -(*(char *)((longlong)param_2 + 10) == s_allowed_agy_sha2_00182ca0[10]);
      auVar10[0xb] = -(*(char *)((longlong)param_2 + 0xb) == s_allowed_agy_sha2_00182ca0[0xb]);
      auVar10[0xc] = -(*(char *)((longlong)param_2 + 0xc) == s_allowed_agy_sha2_00182ca0[0xc]);
      auVar10[0xd] = -(*(char *)((longlong)param_2 + 0xd) == s_allowed_agy_sha2_00182ca0[0xd]);
      auVar10[0xe] = -(*(char *)((longlong)param_2 + 0xe) == s_allowed_agy_sha2_00182ca0[0xe]);
      auVar10[0xf] = -(*(char *)((longlong)param_2 + 0xf) == s_allowed_agy_sha2_00182ca0[0xf]);
      auVar10 = auVar10 & auVar33;
      if ((ushort)((ushort)(SUB161(auVar10 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar10 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar10 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar10 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar10 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar10 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar10 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar10 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar10 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar10 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar10 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar10 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar10 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar10 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar10 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar10[0xf] >> 7) << 0xf) == 0xffff) {
        param_1[1] = 0x18;
      }
      else {
        auVar34[0] = -(*(char *)((longlong)param_2 + 3) == s_ict_unique_proxy_00184290[0]);
        auVar34[1] = -(*(char *)((longlong)param_2 + 4) == s_ict_unique_proxy_00184290[1]);
        auVar34[2] = -(*(char *)((longlong)param_2 + 5) == s_ict_unique_proxy_00184290[2]);
        auVar34[3] = -(*(char *)((longlong)param_2 + 6) == s_ict_unique_proxy_00184290[3]);
        auVar34[4] = -(*(char *)((longlong)param_2 + 7) == s_ict_unique_proxy_00184290[4]);
        auVar34[5] = -((char)param_2[1] == s_ict_unique_proxy_00184290[5]);
        auVar34[6] = -(*(char *)((longlong)param_2 + 9) == s_ict_unique_proxy_00184290[6]);
        auVar34[7] = -(*(char *)((longlong)param_2 + 10) == s_ict_unique_proxy_00184290[7]);
        auVar34[8] = -(*(char *)((longlong)param_2 + 0xb) == s_ict_unique_proxy_00184290[8]);
        auVar34[9] = -(*(char *)((longlong)param_2 + 0xc) == s_ict_unique_proxy_00184290[9]);
        auVar34[10] = -(*(char *)((longlong)param_2 + 0xd) == s_ict_unique_proxy_00184290[10]);
        auVar34[0xb] = -(*(char *)((longlong)param_2 + 0xe) == s_ict_unique_proxy_00184290[0xb]);
        auVar34[0xc] = -(*(char *)((longlong)param_2 + 0xf) == s_ict_unique_proxy_00184290[0xc]);
        auVar34[0xd] = -((char)param_2[2] == s_ict_unique_proxy_00184290[0xd]);
        auVar34[0xe] = -(*(char *)((longlong)param_2 + 0x11) == s_ict_unique_proxy_00184290[0xe]);
        auVar34[0xf] = -(*(char *)((longlong)param_2 + 0x12) == s_ict_unique_proxy_00184290[0xf]);
        auVar11[0] = -((char)*param_2 == DAT_00182ea0);
        auVar11[1] = -(*(char *)((longlong)param_2 + 1) == UNK_00182ea1);
        auVar11[2] = -(*(char *)((longlong)param_2 + 2) == UNK_00182ea2);
        auVar11[3] = -(*(char *)((longlong)param_2 + 3) == UNK_00182ea3);
        auVar11[4] = -(*(char *)((longlong)param_2 + 4) == UNK_00182ea4);
        auVar11[5] = -(*(char *)((longlong)param_2 + 5) == UNK_00182ea5);
        auVar11[6] = -(*(char *)((longlong)param_2 + 6) == UNK_00182ea6);
        auVar11[7] = -(*(char *)((longlong)param_2 + 7) == UNK_00182ea7);
        auVar11[8] = -((char)param_2[1] == UNK_00182ea8);
        auVar11[9] = -(*(char *)((longlong)param_2 + 9) == UNK_00182ea9);
        auVar11[10] = -(*(char *)((longlong)param_2 + 10) == UNK_00182eaa);
        auVar11[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_00182eab);
        auVar11[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_00182eac);
        auVar11[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_00182ead);
        auVar11[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_00182eae);
        auVar11[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_00182eaf);
        auVar11 = auVar11 & auVar34;
        if ((ushort)((ushort)(SUB161(auVar11 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar11 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar11 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar11 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar11 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar11 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar11 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar11 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar11 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar11 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar11 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar11 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar11 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar11 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar11 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar11[0xf] >> 7) << 0xf) != 0xffff)
        goto switchD_004a09a4_caseD_6;
        param_1[1] = 0x1c;
      }
    }
    break;
  case 0x14:
    lVar1 = param_2[2];
    auVar29[0] = -((char)lVar1 == DAT_00182c80);
    auVar29[1] = -((char)((ulonglong)lVar1 >> 8) == UNK_00182c81);
    auVar29[2] = -((char)((ulonglong)lVar1 >> 0x10) == UNK_00182c82);
    auVar29[3] = -((char)((ulonglong)lVar1 >> 0x18) == UNK_00182c83);
    auVar29[4] = -(UNK_00182c84 == '\0');
    auVar29[5] = -(UNK_00182c85 == '\0');
    auVar29[6] = -(UNK_00182c86 == '\0');
    auVar29[7] = -(UNK_00182c87 == '\0');
    auVar29[8] = -(UNK_00182c88 == '\0');
    auVar29[9] = -(UNK_00182c89 == '\0');
    auVar29[10] = -(UNK_00182c8a == '\0');
    auVar29[0xb] = -(UNK_00182c8b == '\0');
    auVar29[0xc] = -(UNK_00182c8c == '\0');
    auVar29[0xd] = -(UNK_00182c8d == '\0');
    auVar29[0xe] = -(UNK_00182c8e == '\0');
    auVar29[0xf] = -(UNK_00182c8f == '\0');
    auVar6[0] = -((char)*param_2 == s_memory_reserve_b_00183960[0]);
    auVar6[1] = -(*(char *)((longlong)param_2 + 1) == s_memory_reserve_b_00183960[1]);
    auVar6[2] = -(*(char *)((longlong)param_2 + 2) == s_memory_reserve_b_00183960[2]);
    auVar6[3] = -(*(char *)((longlong)param_2 + 3) == s_memory_reserve_b_00183960[3]);
    auVar6[4] = -(*(char *)((longlong)param_2 + 4) == s_memory_reserve_b_00183960[4]);
    auVar6[5] = -(*(char *)((longlong)param_2 + 5) == s_memory_reserve_b_00183960[5]);
    auVar6[6] = -(*(char *)((longlong)param_2 + 6) == s_memory_reserve_b_00183960[6]);
    auVar6[7] = -(*(char *)((longlong)param_2 + 7) == s_memory_reserve_b_00183960[7]);
    auVar6[8] = -((char)param_2[1] == s_memory_reserve_b_00183960[8]);
    auVar6[9] = -(*(char *)((longlong)param_2 + 9) == s_memory_reserve_b_00183960[9]);
    auVar6[10] = -(*(char *)((longlong)param_2 + 10) == s_memory_reserve_b_00183960[10]);
    auVar6[0xb] = -(*(char *)((longlong)param_2 + 0xb) == s_memory_reserve_b_00183960[0xb]);
    auVar6[0xc] = -(*(char *)((longlong)param_2 + 0xc) == s_memory_reserve_b_00183960[0xc]);
    auVar6[0xd] = -(*(char *)((longlong)param_2 + 0xd) == s_memory_reserve_b_00183960[0xd]);
    auVar6[0xe] = -(*(char *)((longlong)param_2 + 0xe) == s_memory_reserve_b_00183960[0xe]);
    auVar6[0xf] = -(*(char *)((longlong)param_2 + 0xf) == s_memory_reserve_b_00183960[0xf]);
    auVar6 = auVar6 & auVar29;
    if ((ushort)((ushort)(SUB161(auVar6 >> 7,0) & 1) | (ushort)(SUB161(auVar6 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar6 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar6 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar6 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar6 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar6 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar6 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar6 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar6 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar6 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar6 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar6 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar6 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar6 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar6[0xf] >> 7) << 0xf) != 0xffff) goto switchD_004a09a4_caseD_6;
    param_1[1] = 0x2a;
    break;
  case 0x15:
    auVar40[0] = -(*(char *)((longlong)param_2 + 5) == s__byte_timeout_ms_00183970[0]);
    auVar40[1] = -(*(char *)((longlong)param_2 + 6) == s__byte_timeout_ms_00183970[1]);
    auVar40[2] = -(*(char *)((longlong)param_2 + 7) == s__byte_timeout_ms_00183970[2]);
    auVar40[3] = -((char)param_2[1] == s__byte_timeout_ms_00183970[3]);
    auVar40[4] = -(*(char *)((longlong)param_2 + 9) == s__byte_timeout_ms_00183970[4]);
    auVar40[5] = -(*(char *)((longlong)param_2 + 10) == s__byte_timeout_ms_00183970[5]);
    auVar40[6] = -(*(char *)((longlong)param_2 + 0xb) == s__byte_timeout_ms_00183970[6]);
    auVar40[7] = -(*(char *)((longlong)param_2 + 0xc) == s__byte_timeout_ms_00183970[7]);
    auVar40[8] = -(*(char *)((longlong)param_2 + 0xd) == s__byte_timeout_ms_00183970[8]);
    auVar40[9] = -(*(char *)((longlong)param_2 + 0xe) == s__byte_timeout_ms_00183970[9]);
    auVar40[10] = -(*(char *)((longlong)param_2 + 0xf) == s__byte_timeout_ms_00183970[10]);
    auVar40[0xb] = -((char)param_2[2] == s__byte_timeout_ms_00183970[0xb]);
    auVar40[0xc] = -(*(char *)((longlong)param_2 + 0x11) == s__byte_timeout_ms_00183970[0xc]);
    auVar40[0xd] = -(*(char *)((longlong)param_2 + 0x12) == s__byte_timeout_ms_00183970[0xd]);
    auVar40[0xe] = -(*(char *)((longlong)param_2 + 0x13) == s__byte_timeout_ms_00183970[0xe]);
    auVar40[0xf] = -(*(char *)((longlong)param_2 + 0x14) == s__byte_timeout_ms_00183970[0xf]);
    auVar17[0] = -((char)*param_2 == DAT_00183620);
    auVar17[1] = -(*(char *)((longlong)param_2 + 1) == UNK_00183621);
    auVar17[2] = -(*(char *)((longlong)param_2 + 2) == UNK_00183622);
    auVar17[3] = -(*(char *)((longlong)param_2 + 3) == UNK_00183623);
    auVar17[4] = -(*(char *)((longlong)param_2 + 4) == UNK_00183624);
    auVar17[5] = -(*(char *)((longlong)param_2 + 5) == UNK_00183625);
    auVar17[6] = -(*(char *)((longlong)param_2 + 6) == UNK_00183626);
    auVar17[7] = -(*(char *)((longlong)param_2 + 7) == UNK_00183627);
    auVar17[8] = -((char)param_2[1] == UNK_00183628);
    auVar17[9] = -(*(char *)((longlong)param_2 + 9) == UNK_00183629);
    auVar17[10] = -(*(char *)((longlong)param_2 + 10) == UNK_0018362a);
    auVar17[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_0018362b);
    auVar17[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_0018362c);
    auVar17[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_0018362d);
    auVar17[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_0018362e);
    auVar17[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_0018362f);
    auVar17 = auVar17 & auVar40;
    if ((ushort)((ushort)(SUB161(auVar17 >> 7,0) & 1) | (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar17 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar17 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar17 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar17 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar17 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar17 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar17 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar17 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar17 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar17[0xf] >> 7) << 0xf) == 0xffff) {
      param_1[1] = 7;
    }
    else {
      auVar41[0] = -(*(char *)((longlong)param_2 + 5) == s_on_idle_ttl_secs_001826e0[0]);
      auVar41[1] = -(*(char *)((longlong)param_2 + 6) == s_on_idle_ttl_secs_001826e0[1]);
      auVar41[2] = -(*(char *)((longlong)param_2 + 7) == s_on_idle_ttl_secs_001826e0[2]);
      auVar41[3] = -((char)param_2[1] == s_on_idle_ttl_secs_001826e0[3]);
      auVar41[4] = -(*(char *)((longlong)param_2 + 9) == s_on_idle_ttl_secs_001826e0[4]);
      auVar41[5] = -(*(char *)((longlong)param_2 + 10) == s_on_idle_ttl_secs_001826e0[5]);
      auVar41[6] = -(*(char *)((longlong)param_2 + 0xb) == s_on_idle_ttl_secs_001826e0[6]);
      auVar41[7] = -(*(char *)((longlong)param_2 + 0xc) == s_on_idle_ttl_secs_001826e0[7]);
      auVar41[8] = -(*(char *)((longlong)param_2 + 0xd) == s_on_idle_ttl_secs_001826e0[8]);
      auVar41[9] = -(*(char *)((longlong)param_2 + 0xe) == s_on_idle_ttl_secs_001826e0[9]);
      auVar41[10] = -(*(char *)((longlong)param_2 + 0xf) == s_on_idle_ttl_secs_001826e0[10]);
      auVar41[0xb] = -((char)param_2[2] == s_on_idle_ttl_secs_001826e0[0xb]);
      auVar41[0xc] = -(*(char *)((longlong)param_2 + 0x11) == s_on_idle_ttl_secs_001826e0[0xc]);
      auVar41[0xd] = -(*(char *)((longlong)param_2 + 0x12) == s_on_idle_ttl_secs_001826e0[0xd]);
      auVar41[0xe] = -(*(char *)((longlong)param_2 + 0x13) == s_on_idle_ttl_secs_001826e0[0xe]);
      auVar41[0xf] = -(*(char *)((longlong)param_2 + 0x14) == s_on_idle_ttl_secs_001826e0[0xf]);
      auVar18[0] = -((char)*param_2 == s_session_idle_ttlDAILY_QUOTA_EXHA_00183980[0]);
      auVar18[1] = -(*(char *)((longlong)param_2 + 1) ==
                    s_session_idle_ttlDAILY_QUOTA_EXHA_00183980[1]);
      auVar18[2] = -(*(char *)((longlong)param_2 + 2) ==
                    s_session_idle_ttlDAILY_QUOTA_EXHA_00183980[2]);
      auVar18[3] = -(*(char *)((longlong)param_2 + 3) ==
                    s_session_idle_ttlDAILY_QUOTA_EXHA_00183980[3]);
      auVar18[4] = -(*(char *)((longlong)param_2 + 4) ==
                    s_session_idle_ttlDAILY_QUOTA_EXHA_00183980[4]);
      auVar18[5] = -(*(char *)((longlong)param_2 + 5) ==
                    s_session_idle_ttlDAILY_QUOTA_EXHA_00183980[5]);
      auVar18[6] = -(*(char *)((longlong)param_2 + 6) ==
                    s_session_idle_ttlDAILY_QUOTA_EXHA_00183980[6]);
      auVar18[7] = -(*(char *)((longlong)param_2 + 7) ==
                    s_session_idle_ttlDAILY_QUOTA_EXHA_00183980[7]);
      auVar18[8] = -((char)param_2[1] == s_session_idle_ttlDAILY_QUOTA_EXHA_00183980[8]);
      auVar18[9] = -(*(char *)((longlong)param_2 + 9) ==
                    s_session_idle_ttlDAILY_QUOTA_EXHA_00183980[9]);
      auVar18[10] = -(*(char *)((longlong)param_2 + 10) ==
                     s_session_idle_ttlDAILY_QUOTA_EXHA_00183980[10]);
      auVar18[0xb] = -(*(char *)((longlong)param_2 + 0xb) ==
                      s_session_idle_ttlDAILY_QUOTA_EXHA_00183980[0xb]);
      auVar18[0xc] = -(*(char *)((longlong)param_2 + 0xc) ==
                      s_session_idle_ttlDAILY_QUOTA_EXHA_00183980[0xc]);
      auVar18[0xd] = -(*(char *)((longlong)param_2 + 0xd) ==
                      s_session_idle_ttlDAILY_QUOTA_EXHA_00183980[0xd]);
      auVar18[0xe] = -(*(char *)((longlong)param_2 + 0xe) ==
                      s_session_idle_ttlDAILY_QUOTA_EXHA_00183980[0xe]);
      auVar18[0xf] = -(*(char *)((longlong)param_2 + 0xf) ==
                      s_session_idle_ttlDAILY_QUOTA_EXHA_00183980[0xf]);
      auVar18 = auVar18 & auVar41;
      if ((ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar18[0xf] >> 7) << 0xf) != 0xffff)
      goto switchD_004a09a4_caseD_6;
      param_1[1] = 0x20;
    }
    break;
  case 0x16:
    auVar42[0] = -(*(char *)((longlong)param_2 + 6) == DAT_001830b0);
    auVar42[1] = -(*(char *)((longlong)param_2 + 7) == UNK_001830b1);
    auVar42[2] = -((char)param_2[1] == UNK_001830b2);
    auVar42[3] = -(*(char *)((longlong)param_2 + 9) == UNK_001830b3);
    auVar42[4] = -(*(char *)((longlong)param_2 + 10) == UNK_001830b4);
    auVar42[5] = -(*(char *)((longlong)param_2 + 0xb) == UNK_001830b5);
    auVar42[6] = -(*(char *)((longlong)param_2 + 0xc) == UNK_001830b6);
    auVar42[7] = -(*(char *)((longlong)param_2 + 0xd) == UNK_001830b7);
    auVar42[8] = -(*(char *)((longlong)param_2 + 0xe) == UNK_001830b8);
    auVar42[9] = -(*(char *)((longlong)param_2 + 0xf) == UNK_001830b9);
    auVar42[10] = -((char)param_2[2] == UNK_001830ba);
    auVar42[0xb] = -(*(char *)((longlong)param_2 + 0x11) == UNK_001830bb);
    auVar42[0xc] = -(*(char *)((longlong)param_2 + 0x12) == UNK_001830bc);
    auVar42[0xd] = -(*(char *)((longlong)param_2 + 0x13) == UNK_001830bd);
    auVar42[0xe] = -(*(char *)((longlong)param_2 + 0x14) == UNK_001830be);
    auVar42[0xf] = -(*(char *)((longlong)param_2 + 0x15) == UNK_001830bf);
    auVar19[0] = -((char)*param_2 == DAT_00183220);
    auVar19[1] = -(*(char *)((longlong)param_2 + 1) == UNK_00183221);
    auVar19[2] = -(*(char *)((longlong)param_2 + 2) == UNK_00183222);
    auVar19[3] = -(*(char *)((longlong)param_2 + 3) == UNK_00183223);
    auVar19[4] = -(*(char *)((longlong)param_2 + 4) == UNK_00183224);
    auVar19[5] = -(*(char *)((longlong)param_2 + 5) == UNK_00183225);
    auVar19[6] = -(*(char *)((longlong)param_2 + 6) == UNK_00183226);
    auVar19[7] = -(*(char *)((longlong)param_2 + 7) == UNK_00183227);
    auVar19[8] = -((char)param_2[1] == UNK_00183228);
    auVar19[9] = -(*(char *)((longlong)param_2 + 9) == UNK_00183229);
    auVar19[10] = -(*(char *)((longlong)param_2 + 10) == UNK_0018322a);
    auVar19[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_0018322b);
    auVar19[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_0018322c);
    auVar19[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_0018322d);
    auVar19[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_0018322e);
    auVar19[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_0018322f);
    auVar19 = auVar19 & auVar42;
    if ((ushort)((ushort)(SUB161(auVar19 >> 7,0) & 1) | (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar19[0xf] >> 7) << 0xf) == 0xffff) {
      param_1[1] = 0x13;
    }
    else {
      auVar43[0] = -(*(char *)((longlong)param_2 + 6) == DAT_00184420);
      auVar43[1] = -(*(char *)((longlong)param_2 + 7) == UNK_00184421);
      auVar43[2] = -((char)param_2[1] == UNK_00184422);
      auVar43[3] = -(*(char *)((longlong)param_2 + 9) == UNK_00184423);
      auVar43[4] = -(*(char *)((longlong)param_2 + 10) == UNK_00184424);
      auVar43[5] = -(*(char *)((longlong)param_2 + 0xb) == UNK_00184425);
      auVar43[6] = -(*(char *)((longlong)param_2 + 0xc) == UNK_00184426);
      auVar43[7] = -(*(char *)((longlong)param_2 + 0xd) == UNK_00184427);
      auVar43[8] = -(*(char *)((longlong)param_2 + 0xe) == UNK_00184428);
      auVar43[9] = -(*(char *)((longlong)param_2 + 0xf) == UNK_00184429);
      auVar43[10] = -((char)param_2[2] == UNK_0018442a);
      auVar43[0xb] = -(*(char *)((longlong)param_2 + 0x11) == UNK_0018442b);
      auVar43[0xc] = -(*(char *)((longlong)param_2 + 0x12) == UNK_0018442c);
      auVar43[0xd] = -(*(char *)((longlong)param_2 + 0x13) == UNK_0018442d);
      auVar43[0xe] = -(*(char *)((longlong)param_2 + 0x14) == UNK_0018442e);
      auVar43[0xf] = -(*(char *)((longlong)param_2 + 0x15) == UNK_0018442f);
      auVar20[0] = -((char)*param_2 == s_acp_startup_time_00182da0[0]);
      auVar20[1] = -(*(char *)((longlong)param_2 + 1) == s_acp_startup_time_00182da0[1]);
      auVar20[2] = -(*(char *)((longlong)param_2 + 2) == s_acp_startup_time_00182da0[2]);
      auVar20[3] = -(*(char *)((longlong)param_2 + 3) == s_acp_startup_time_00182da0[3]);
      auVar20[4] = -(*(char *)((longlong)param_2 + 4) == s_acp_startup_time_00182da0[4]);
      auVar20[5] = -(*(char *)((longlong)param_2 + 5) == s_acp_startup_time_00182da0[5]);
      auVar20[6] = -(*(char *)((longlong)param_2 + 6) == s_acp_startup_time_00182da0[6]);
      auVar20[7] = -(*(char *)((longlong)param_2 + 7) == s_acp_startup_time_00182da0[7]);
      auVar20[8] = -((char)param_2[1] == s_acp_startup_time_00182da0[8]);
      auVar20[9] = -(*(char *)((longlong)param_2 + 9) == s_acp_startup_time_00182da0[9]);
      auVar20[10] = -(*(char *)((longlong)param_2 + 10) == s_acp_startup_time_00182da0[10]);
      auVar20[0xb] = -(*(char *)((longlong)param_2 + 0xb) == s_acp_startup_time_00182da0[0xb]);
      auVar20[0xc] = -(*(char *)((longlong)param_2 + 0xc) == s_acp_startup_time_00182da0[0xc]);
      auVar20[0xd] = -(*(char *)((longlong)param_2 + 0xd) == s_acp_startup_time_00182da0[0xd]);
      auVar20[0xe] = -(*(char *)((longlong)param_2 + 0xe) == s_acp_startup_time_00182da0[0xe]);
      auVar20[0xf] = -(*(char *)((longlong)param_2 + 0xf) == s_acp_startup_time_00182da0[0xf]);
      auVar20 = auVar20 & auVar43;
      if ((ushort)((ushort)(SUB161(auVar20 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar20 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar20 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar20 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar20 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar20 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar20 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar20 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar20 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar20 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar20 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar20 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar20 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar20 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar20[0xf] >> 7) << 0xf) != 0xffff)
      goto switchD_004a09a4_caseD_6;
      param_1[1] = 0x1a;
    }
    break;
  case 0x17:
    auVar47[0] = -(*(char *)((longlong)param_2 + 7) == DAT_001825b0);
    auVar47[1] = -((char)param_2[1] == UNK_001825b1);
    auVar47[2] = -(*(char *)((longlong)param_2 + 9) == UNK_001825b2);
    auVar47[3] = -(*(char *)((longlong)param_2 + 10) == UNK_001825b3);
    auVar47[4] = -(*(char *)((longlong)param_2 + 0xb) == UNK_001825b4);
    auVar47[5] = -(*(char *)((longlong)param_2 + 0xc) == UNK_001825b5);
    auVar47[6] = -(*(char *)((longlong)param_2 + 0xd) == UNK_001825b6);
    auVar47[7] = -(*(char *)((longlong)param_2 + 0xe) == UNK_001825b7);
    auVar47[8] = -(*(char *)((longlong)param_2 + 0xf) == UNK_001825b8);
    auVar47[9] = -((char)param_2[2] == UNK_001825b9);
    auVar47[10] = -(*(char *)((longlong)param_2 + 0x11) == UNK_001825ba);
    auVar47[0xb] = -(*(char *)((longlong)param_2 + 0x12) == UNK_001825bb);
    auVar47[0xc] = -(*(char *)((longlong)param_2 + 0x13) == UNK_001825bc);
    auVar47[0xd] = -(*(char *)((longlong)param_2 + 0x14) == UNK_001825bd);
    auVar47[0xe] = -(*(char *)((longlong)param_2 + 0x15) == UNK_001825be);
    auVar47[0xf] = -(*(char *)((longlong)param_2 + 0x16) == UNK_001825bf);
    auVar27[0] = -((char)*param_2 == s_auto_calibrate_o_00184690[0]);
    auVar27[1] = -(*(char *)((longlong)param_2 + 1) == s_auto_calibrate_o_00184690[1]);
    auVar27[2] = -(*(char *)((longlong)param_2 + 2) == s_auto_calibrate_o_00184690[2]);
    auVar27[3] = -(*(char *)((longlong)param_2 + 3) == s_auto_calibrate_o_00184690[3]);
    auVar27[4] = -(*(char *)((longlong)param_2 + 4) == s_auto_calibrate_o_00184690[4]);
    auVar27[5] = -(*(char *)((longlong)param_2 + 5) == s_auto_calibrate_o_00184690[5]);
    auVar27[6] = -(*(char *)((longlong)param_2 + 6) == s_auto_calibrate_o_00184690[6]);
    auVar27[7] = -(*(char *)((longlong)param_2 + 7) == s_auto_calibrate_o_00184690[7]);
    auVar27[8] = -((char)param_2[1] == s_auto_calibrate_o_00184690[8]);
    auVar27[9] = -(*(char *)((longlong)param_2 + 9) == s_auto_calibrate_o_00184690[9]);
    auVar27[10] = -(*(char *)((longlong)param_2 + 10) == s_auto_calibrate_o_00184690[10]);
    auVar27[0xb] = -(*(char *)((longlong)param_2 + 0xb) == s_auto_calibrate_o_00184690[0xb]);
    auVar27[0xc] = -(*(char *)((longlong)param_2 + 0xc) == s_auto_calibrate_o_00184690[0xc]);
    auVar27[0xd] = -(*(char *)((longlong)param_2 + 0xd) == s_auto_calibrate_o_00184690[0xd]);
    auVar27[0xe] = -(*(char *)((longlong)param_2 + 0xe) == s_auto_calibrate_o_00184690[0xe]);
    auVar27[0xf] = -(*(char *)((longlong)param_2 + 0xf) == s_auto_calibrate_o_00184690[0xf]);
    auVar27 = auVar27 & auVar47;
    if ((ushort)((ushort)(SUB161(auVar27 >> 7,0) & 1) | (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar27[0xf] >> 7) << 0xf) != 0xffff) goto switchD_004a09a4_caseD_6;
    param_1[1] = 0x1e;
    break;
  case 0x19:
    auVar44[0] = -(*(char *)((longlong)param_2 + 9) == DAT_00184870);
    auVar44[1] = -(*(char *)((longlong)param_2 + 10) == UNK_00184871);
    auVar44[2] = -(*(char *)((longlong)param_2 + 0xb) == UNK_00184872);
    auVar44[3] = -(*(char *)((longlong)param_2 + 0xc) == UNK_00184873);
    auVar44[4] = -(*(char *)((longlong)param_2 + 0xd) == UNK_00184874);
    auVar44[5] = -(*(char *)((longlong)param_2 + 0xe) == UNK_00184875);
    auVar44[6] = -(*(char *)((longlong)param_2 + 0xf) == UNK_00184876);
    auVar44[7] = -((char)param_2[2] == UNK_00184877);
    auVar44[8] = -(*(char *)((longlong)param_2 + 0x11) == UNK_00184878);
    auVar44[9] = -(*(char *)((longlong)param_2 + 0x12) == UNK_00184879);
    auVar44[10] = -(*(char *)((longlong)param_2 + 0x13) == UNK_0018487a);
    auVar44[0xb] = -(*(char *)((longlong)param_2 + 0x14) == UNK_0018487b);
    auVar44[0xc] = -(*(char *)((longlong)param_2 + 0x15) == UNK_0018487c);
    auVar44[0xd] = -(*(char *)((longlong)param_2 + 0x16) == UNK_0018487d);
    auVar44[0xe] = -(*(char *)((longlong)param_2 + 0x17) == UNK_0018487e);
    auVar44[0xf] = -((char)param_2[3] == UNK_0018487f);
    auVar24[0] = -((char)*param_2 == DAT_00183210);
    auVar24[1] = -(*(char *)((longlong)param_2 + 1) == UNK_00183211);
    auVar24[2] = -(*(char *)((longlong)param_2 + 2) == UNK_00183212);
    auVar24[3] = -(*(char *)((longlong)param_2 + 3) == UNK_00183213);
    auVar24[4] = -(*(char *)((longlong)param_2 + 4) == UNK_00183214);
    auVar24[5] = -(*(char *)((longlong)param_2 + 5) == UNK_00183215);
    auVar24[6] = -(*(char *)((longlong)param_2 + 6) == UNK_00183216);
    auVar24[7] = -(*(char *)((longlong)param_2 + 7) == UNK_00183217);
    auVar24[8] = -((char)param_2[1] == UNK_00183218);
    auVar24[9] = -(*(char *)((longlong)param_2 + 9) == UNK_00183219);
    auVar24[10] = -(*(char *)((longlong)param_2 + 10) == UNK_0018321a);
    auVar24[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_0018321b);
    auVar24[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_0018321c);
    auVar24[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_0018321d);
    auVar24[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_0018321e);
    auVar24[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_0018321f);
    auVar24 = auVar24 & auVar44;
    if ((ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) | (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar24[0xf] >> 7) << 0xf) == 0xffff) {
      param_1[1] = 0x1d;
    }
    else {
      auVar45[0] = -(*(char *)((longlong)param_2 + 9) == DAT_001830c0);
      auVar45[1] = -(*(char *)((longlong)param_2 + 10) == UNK_001830c1);
      auVar45[2] = -(*(char *)((longlong)param_2 + 0xb) == UNK_001830c2);
      auVar45[3] = -(*(char *)((longlong)param_2 + 0xc) == UNK_001830c3);
      auVar45[4] = -(*(char *)((longlong)param_2 + 0xd) == UNK_001830c4);
      auVar45[5] = -(*(char *)((longlong)param_2 + 0xe) == UNK_001830c5);
      auVar45[6] = -(*(char *)((longlong)param_2 + 0xf) == UNK_001830c6);
      auVar45[7] = -((char)param_2[2] == UNK_001830c7);
      auVar45[8] = -(*(char *)((longlong)param_2 + 0x11) == UNK_001830c8);
      auVar45[9] = -(*(char *)((longlong)param_2 + 0x12) == UNK_001830c9);
      auVar45[10] = -(*(char *)((longlong)param_2 + 0x13) == UNK_001830ca);
      auVar45[0xb] = -(*(char *)((longlong)param_2 + 0x14) == UNK_001830cb);
      auVar45[0xc] = -(*(char *)((longlong)param_2 + 0x15) == UNK_001830cc);
      auVar45[0xd] = -(*(char *)((longlong)param_2 + 0x16) == UNK_001830cd);
      auVar45[0xe] = -(*(char *)((longlong)param_2 + 0x17) == UNK_001830ce);
      auVar45[0xf] = -((char)param_2[3] == UNK_001830cf);
      auVar25[0] = -((char)*param_2 == s_circuit_failure__00182a40[0]);
      auVar25[1] = -(*(char *)((longlong)param_2 + 1) == s_circuit_failure__00182a40[1]);
      auVar25[2] = -(*(char *)((longlong)param_2 + 2) == s_circuit_failure__00182a40[2]);
      auVar25[3] = -(*(char *)((longlong)param_2 + 3) == s_circuit_failure__00182a40[3]);
      auVar25[4] = -(*(char *)((longlong)param_2 + 4) == s_circuit_failure__00182a40[4]);
      auVar25[5] = -(*(char *)((longlong)param_2 + 5) == s_circuit_failure__00182a40[5]);
      auVar25[6] = -(*(char *)((longlong)param_2 + 6) == s_circuit_failure__00182a40[6]);
      auVar25[7] = -(*(char *)((longlong)param_2 + 7) == s_circuit_failure__00182a40[7]);
      auVar25[8] = -((char)param_2[1] == s_circuit_failure__00182a40[8]);
      auVar25[9] = -(*(char *)((longlong)param_2 + 9) == s_circuit_failure__00182a40[9]);
      auVar25[10] = -(*(char *)((longlong)param_2 + 10) == s_circuit_failure__00182a40[10]);
      auVar25[0xb] = -(*(char *)((longlong)param_2 + 0xb) == s_circuit_failure__00182a40[0xb]);
      auVar25[0xc] = -(*(char *)((longlong)param_2 + 0xc) == s_circuit_failure__00182a40[0xc]);
      auVar25[0xd] = -(*(char *)((longlong)param_2 + 0xd) == s_circuit_failure__00182a40[0xd]);
      auVar25[0xe] = -(*(char *)((longlong)param_2 + 0xe) == s_circuit_failure__00182a40[0xe]);
      auVar25[0xf] = -(*(char *)((longlong)param_2 + 0xf) == s_circuit_failure__00182a40[0xf]);
      auVar25 = auVar25 & auVar45;
      if ((ushort)((ushort)(SUB161(auVar25 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar25 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar25 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar25 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar25 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar25 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar25 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar25 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar25 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar25 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar25 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar25 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar25[0xf] >> 7) << 0xf) == 0xffff) {
        param_1[1] = 0x27;
      }
      else {
        auVar46[0] = -(*(char *)((longlong)param_2 + 9) == s_soft_limit_bytes_00182d90[0]);
        auVar46[1] = -(*(char *)((longlong)param_2 + 10) == s_soft_limit_bytes_00182d90[1]);
        auVar46[2] = -(*(char *)((longlong)param_2 + 0xb) == s_soft_limit_bytes_00182d90[2]);
        auVar46[3] = -(*(char *)((longlong)param_2 + 0xc) == s_soft_limit_bytes_00182d90[3]);
        auVar46[4] = -(*(char *)((longlong)param_2 + 0xd) == s_soft_limit_bytes_00182d90[4]);
        auVar46[5] = -(*(char *)((longlong)param_2 + 0xe) == s_soft_limit_bytes_00182d90[5]);
        auVar46[6] = -(*(char *)((longlong)param_2 + 0xf) == s_soft_limit_bytes_00182d90[6]);
        auVar46[7] = -((char)param_2[2] == s_soft_limit_bytes_00182d90[7]);
        auVar46[8] = -(*(char *)((longlong)param_2 + 0x11) == s_soft_limit_bytes_00182d90[8]);
        auVar46[9] = -(*(char *)((longlong)param_2 + 0x12) == s_soft_limit_bytes_00182d90[9]);
        auVar46[10] = -(*(char *)((longlong)param_2 + 0x13) == s_soft_limit_bytes_00182d90[10]);
        auVar46[0xb] = -(*(char *)((longlong)param_2 + 0x14) == s_soft_limit_bytes_00182d90[0xb]);
        auVar46[0xc] = -(*(char *)((longlong)param_2 + 0x15) == s_soft_limit_bytes_00182d90[0xc]);
        auVar46[0xd] = -(*(char *)((longlong)param_2 + 0x16) == s_soft_limit_bytes_00182d90[0xd]);
        auVar46[0xe] = -(*(char *)((longlong)param_2 + 0x17) == s_soft_limit_bytes_00182d90[0xe]);
        auVar46[0xf] = -((char)param_2[3] == s_soft_limit_bytes_00182d90[0xf]);
        auVar26[0] = -((char)*param_2 == s_slot_rss_soft_li_00182c90[0]);
        auVar26[1] = -(*(char *)((longlong)param_2 + 1) == s_slot_rss_soft_li_00182c90[1]);
        auVar26[2] = -(*(char *)((longlong)param_2 + 2) == s_slot_rss_soft_li_00182c90[2]);
        auVar26[3] = -(*(char *)((longlong)param_2 + 3) == s_slot_rss_soft_li_00182c90[3]);
        auVar26[4] = -(*(char *)((longlong)param_2 + 4) == s_slot_rss_soft_li_00182c90[4]);
        auVar26[5] = -(*(char *)((longlong)param_2 + 5) == s_slot_rss_soft_li_00182c90[5]);
        auVar26[6] = -(*(char *)((longlong)param_2 + 6) == s_slot_rss_soft_li_00182c90[6]);
        auVar26[7] = -(*(char *)((longlong)param_2 + 7) == s_slot_rss_soft_li_00182c90[7]);
        auVar26[8] = -((char)param_2[1] == s_slot_rss_soft_li_00182c90[8]);
        auVar26[9] = -(*(char *)((longlong)param_2 + 9) == s_slot_rss_soft_li_00182c90[9]);
        auVar26[10] = -(*(char *)((longlong)param_2 + 10) == s_slot_rss_soft_li_00182c90[10]);
        auVar26[0xb] = -(*(char *)((longlong)param_2 + 0xb) == s_slot_rss_soft_li_00182c90[0xb]);
        auVar26[0xc] = -(*(char *)((longlong)param_2 + 0xc) == s_slot_rss_soft_li_00182c90[0xc]);
        auVar26[0xd] = -(*(char *)((longlong)param_2 + 0xd) == s_slot_rss_soft_li_00182c90[0xd]);
        auVar26[0xe] = -(*(char *)((longlong)param_2 + 0xe) == s_slot_rss_soft_li_00182c90[0xe]);
        auVar26[0xf] = -(*(char *)((longlong)param_2 + 0xf) == s_slot_rss_soft_li_00182c90[0xf]);
        auVar26 = auVar26 & auVar46;
        if ((ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar26[0xf] >> 7) << 0xf) != 0xffff)
        goto switchD_004a09a4_caseD_6;
        param_1[1] = 0x2c;
      }
    }
    break;
  case 0x1a:
    auVar28[0] = -(*(char *)((longlong)param_2 + 10) == s_y_estimate_bytes_00183fa0[0]);
    auVar28[1] = -(*(char *)((longlong)param_2 + 0xb) == s_y_estimate_bytes_00183fa0[1]);
    auVar28[2] = -(*(char *)((longlong)param_2 + 0xc) == s_y_estimate_bytes_00183fa0[2]);
    auVar28[3] = -(*(char *)((longlong)param_2 + 0xd) == s_y_estimate_bytes_00183fa0[3]);
    auVar28[4] = -(*(char *)((longlong)param_2 + 0xe) == s_y_estimate_bytes_00183fa0[4]);
    auVar28[5] = -(*(char *)((longlong)param_2 + 0xf) == s_y_estimate_bytes_00183fa0[5]);
    auVar28[6] = -((char)param_2[2] == s_y_estimate_bytes_00183fa0[6]);
    auVar28[7] = -(*(char *)((longlong)param_2 + 0x11) == s_y_estimate_bytes_00183fa0[7]);
    auVar28[8] = -(*(char *)((longlong)param_2 + 0x12) == s_y_estimate_bytes_00183fa0[8]);
    auVar28[9] = -(*(char *)((longlong)param_2 + 0x13) == s_y_estimate_bytes_00183fa0[9]);
    auVar28[10] = -(*(char *)((longlong)param_2 + 0x14) == s_y_estimate_bytes_00183fa0[10]);
    auVar28[0xb] = -(*(char *)((longlong)param_2 + 0x15) == s_y_estimate_bytes_00183fa0[0xb]);
    auVar28[0xc] = -(*(char *)((longlong)param_2 + 0x16) == s_y_estimate_bytes_00183fa0[0xc]);
    auVar28[0xd] = -(*(char *)((longlong)param_2 + 0x17) == s_y_estimate_bytes_00183fa0[0xd]);
    auVar28[0xe] = -((char)param_2[3] == s_y_estimate_bytes_00183fa0[0xe]);
    auVar28[0xf] = -(*(char *)((longlong)param_2 + 0x19) == s_y_estimate_bytes_00183fa0[0xf]);
    auVar5[0] = -((char)*param_2 == s_slot_memory_esti_00182a30[0]);
    auVar5[1] = -(*(char *)((longlong)param_2 + 1) == s_slot_memory_esti_00182a30[1]);
    auVar5[2] = -(*(char *)((longlong)param_2 + 2) == s_slot_memory_esti_00182a30[2]);
    auVar5[3] = -(*(char *)((longlong)param_2 + 3) == s_slot_memory_esti_00182a30[3]);
    auVar5[4] = -(*(char *)((longlong)param_2 + 4) == s_slot_memory_esti_00182a30[4]);
    auVar5[5] = -(*(char *)((longlong)param_2 + 5) == s_slot_memory_esti_00182a30[5]);
    auVar5[6] = -(*(char *)((longlong)param_2 + 6) == s_slot_memory_esti_00182a30[6]);
    auVar5[7] = -(*(char *)((longlong)param_2 + 7) == s_slot_memory_esti_00182a30[7]);
    auVar5[8] = -((char)param_2[1] == s_slot_memory_esti_00182a30[8]);
    auVar5[9] = -(*(char *)((longlong)param_2 + 9) == s_slot_memory_esti_00182a30[9]);
    auVar5[10] = -(*(char *)((longlong)param_2 + 10) == s_slot_memory_esti_00182a30[10]);
    auVar5[0xb] = -(*(char *)((longlong)param_2 + 0xb) == s_slot_memory_esti_00182a30[0xb]);
    auVar5[0xc] = -(*(char *)((longlong)param_2 + 0xc) == s_slot_memory_esti_00182a30[0xc]);
    auVar5[0xd] = -(*(char *)((longlong)param_2 + 0xd) == s_slot_memory_esti_00182a30[0xd]);
    auVar5[0xe] = -(*(char *)((longlong)param_2 + 0xe) == s_slot_memory_esti_00182a30[0xe]);
    auVar5[0xf] = -(*(char *)((longlong)param_2 + 0xf) == s_slot_memory_esti_00182a30[0xf]);
    auVar5 = auVar5 & auVar28;
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
                (ushort)(byte)(auVar5[0xf] >> 7) << 0xf) != 0xffff) goto switchD_004a09a4_caseD_6;
    param_1[1] = 0x2b;
    break;
  case 0x1b:
    auVar35[0] = -(*(char *)((longlong)param_2 + 0xb) == DAT_00182f70);
    auVar35[1] = -(*(char *)((longlong)param_2 + 0xc) == UNK_00182f71);
    auVar35[2] = -(*(char *)((longlong)param_2 + 0xd) == UNK_00182f72);
    auVar35[3] = -(*(char *)((longlong)param_2 + 0xe) == UNK_00182f73);
    auVar35[4] = -(*(char *)((longlong)param_2 + 0xf) == UNK_00182f74);
    auVar35[5] = -((char)param_2[2] == UNK_00182f75);
    auVar35[6] = -(*(char *)((longlong)param_2 + 0x11) == UNK_00182f76);
    auVar35[7] = -(*(char *)((longlong)param_2 + 0x12) == UNK_00182f77);
    auVar35[8] = -(*(char *)((longlong)param_2 + 0x13) == UNK_00182f78);
    auVar35[9] = -(*(char *)((longlong)param_2 + 0x14) == UNK_00182f79);
    auVar35[10] = -(*(char *)((longlong)param_2 + 0x15) == UNK_00182f7a);
    auVar35[0xb] = -(*(char *)((longlong)param_2 + 0x16) == UNK_00182f7b);
    auVar35[0xc] = -(*(char *)((longlong)param_2 + 0x17) == UNK_00182f7c);
    auVar35[0xd] = -((char)param_2[3] == UNK_00182f7d);
    auVar35[0xe] = -(*(char *)((longlong)param_2 + 0x19) == UNK_00182f7e);
    auVar35[0xf] = -(*(char *)((longlong)param_2 + 0x1a) == UNK_00182f7f);
    auVar12[0] = -((char)*param_2 == DAT_001840a0);
    auVar12[1] = -(*(char *)((longlong)param_2 + 1) == UNK_001840a1);
    auVar12[2] = -(*(char *)((longlong)param_2 + 2) == UNK_001840a2);
    auVar12[3] = -(*(char *)((longlong)param_2 + 3) == UNK_001840a3);
    auVar12[4] = -(*(char *)((longlong)param_2 + 4) == UNK_001840a4);
    auVar12[5] = -(*(char *)((longlong)param_2 + 5) == UNK_001840a5);
    auVar12[6] = -(*(char *)((longlong)param_2 + 6) == UNK_001840a6);
    auVar12[7] = -(*(char *)((longlong)param_2 + 7) == UNK_001840a7);
    auVar12[8] = -((char)param_2[1] == UNK_001840a8);
    auVar12[9] = -(*(char *)((longlong)param_2 + 9) == UNK_001840a9);
    auVar12[10] = -(*(char *)((longlong)param_2 + 10) == UNK_001840aa);
    auVar12[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_001840ab);
    auVar12[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_001840ac);
    auVar12[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_001840ad);
    auVar12[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_001840ae);
    auVar12[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_001840af);
    auVar12 = auVar12 & auVar35;
    if ((ushort)((ushort)(SUB161(auVar12 >> 7,0) & 1) | (ushort)(SUB161(auVar12 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar12 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar12 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar12 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar12 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar12 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar12 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar12 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar12 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar12 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar12 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar12 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar12 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar12 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar12[0xf] >> 7) << 0xf) != 0xffff) goto switchD_004a09a4_caseD_6;
    param_1[1] = 0x1b;
    break;
  case 0x22:
    iVar2 = (*(code *)PTR_bcmp_00799020)
                      ("acp_include_default_customizationsacp_startup_timeout_msacp_max_sessions_per_workerstrict_unique_proxyrequire_proxy_calibrationauto_calibrate_on_startmax_concurrencysession_idle_ttl_secssystem_prompt_modemax_accountssticky_enabledsticky_ttl_secsrequire_shm"
                       ,0x22);
    if (iVar2 != 0) goto switchD_004a09a4_caseD_6;
    param_1[1] = 0x19;
  }
  uVar4 = 0;
LAB_004a11fb:
  *param_1 = uVar4;
  return;
}


