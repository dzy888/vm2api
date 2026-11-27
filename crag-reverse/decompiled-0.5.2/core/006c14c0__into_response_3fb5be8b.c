// 006c14c0 into_response

/* <bytes[e9829e187354639b]::bytes::Bytes as
   axum_core[61c49771464cda0a]::response::into_response::IntoResponse>::into_response */

undefined8 * __rustcall
<bytes[e9829e187354639b]::bytes::Bytes_as_axum_core[61c49771464cda0a]::response::into_response::IntoResponse>
::into_response(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 local_131;
  undefined **local_130;
  char *local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined1 local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  uVar2 = (*(code *)PTR_from_0079a558)();
  (*(code *)PTR_new_0079a4e0)();
  local_a8 = local_28;
  uStack_a0 = uStack_20;
  local_b8 = local_38;
  uStack_b0 = uStack_30;
  local_c8 = local_48;
  uStack_c0 = uStack_40;
  local_d8 = local_58;
  uStack_d4 = uStack_54;
  uStack_d0 = uStack_50;
  uStack_cc = uStack_4c;
  local_e8 = local_68;
  uStack_e4 = uStack_64;
  uStack_e0 = uStack_60;
  uStack_dc = uStack_5c;
  local_f8 = local_78;
  uStack_f4 = uStack_74;
  uStack_f0 = uStack_70;
  uStack_ec = uStack_6c;
  local_108 = local_88;
  uStack_104 = uStack_84;
  uStack_100 = uStack_80;
  uStack_fc = uStack_7c;
  local_130 = &anon_46ff2ae45c1d8f80bf24c96f574d7f50_5_llvm_17588019787630232746;
  local_128 = "application/octet-stream";
  local_120 = 0x18;
  local_118 = 0;
  local_110 = 0;
  local_98 = uVar2;
  uStack_90 = param_3;
  uVar3 = <http[56314f485c23ccf6]::header::map::HeaderMap>::try_insert2::
          <http[56314f485c23ccf6]::header::name::HeaderName>(&local_88,&local_108,"",&local_130);
  if ((char)local_68 == -1) {
    (*(code *)PTR_unwrap_failed_00799028)
              (anon_46ff2ae45c1d8f80bf24c96f574d7f50_3_llvm_17588019787630232746,&local_131,
               &anon_46ff2ae45c1d8f80bf24c96f574d7f50_14_llvm_17588019787630232746);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if ((char)local_68 != '\x02') {
    (**(code **)(CONCAT44(uStack_84,local_88) + 0x20))(uVar3,CONCAT44(uStack_74,local_78));
  }
  param_1[0xe] = local_98;
  param_1[0xf] = uStack_90;
  param_1[0xc] = local_a8;
  param_1[0xd] = uStack_a0;
  param_1[10] = local_b8;
  param_1[0xb] = uStack_b0;
  param_1[8] = local_c8;
  param_1[9] = uStack_c0;
  param_1[6] = CONCAT44(uStack_d4,local_d8);
  param_1[7] = CONCAT44(uStack_cc,uStack_d0);
  param_1[4] = CONCAT44(uStack_e4,local_e8);
  param_1[5] = CONCAT44(uStack_dc,uStack_e0);
  param_1[2] = CONCAT44(uStack_f4,local_f8);
  param_1[3] = CONCAT44(uStack_ec,uStack_f0);
  *param_1 = CONCAT44(uStack_104,local_108);
  param_1[1] = CONCAT44(uStack_fc,uStack_100);
  return param_1;
}


